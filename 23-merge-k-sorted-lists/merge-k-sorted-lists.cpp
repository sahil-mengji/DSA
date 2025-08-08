/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        struct cmp {
            bool operator()(pair<int,int>& a, pair<int,int>& b) {
                return a.first > b.first; 
            }
        };

        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> q;

        int n = lists.size();
        for (int i = 0; i < n; i++) {
            if (lists[i]) { 
                q.push({lists[i]->val, i});
            }
        }

        ListNode dummy ;
        ListNode* tail = &dummy;

        while(!q.empty()){
            auto [val, idx] = q.top();
            q.pop();


            tail->next = new ListNode(val);
            tail = tail->next;

           lists[idx] = lists[idx]->next;
            if (lists[idx]) {
                q.push({lists[idx]->val, idx});
            }
        }

        return dummy.next;
    }
};