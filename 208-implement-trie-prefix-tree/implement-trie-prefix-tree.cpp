class Trie {
  private:
    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
            isEnd = false;
        }
    };

    TrieNode* root;

    bool isPresent(char c , TrieNode* node){
        if(node->children[c-'a']!=nullptr) return true;
        return false;
    }


public:
    Trie() {
         root= new TrieNode();  
    }
    
    void insert(string word) {
        TrieNode* curr =root;
        for(int i=0;i<word.size();i++){
            if(!isPresent(word[i],curr)) curr->children[word[i]-'a']=new TrieNode();
             curr=curr->children[word[i]-'a'];
        }
        curr->isEnd=true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i=0;i<word.size();i++){
            if(!isPresent(word[i],curr)) return false;
             curr=curr->children[word[i]-'a'];
        }
        if( curr->isEnd==true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i=0;i<prefix.size();i++){
            if(!isPresent(prefix[i],curr)) return false;
             curr=curr->children[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */