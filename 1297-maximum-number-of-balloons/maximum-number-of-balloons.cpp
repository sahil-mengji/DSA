class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int> a;
        
        for(auto c:text){
            a[c]++;
        }

        int m=INT_MAX;

        for(auto c:{'b','a','l','o','n'})
        {
            if(c=='l' || c=='o' )m=min(m,a[c]/2);
            else m=min(m,a[c]);
        }

        return m;
    }
};