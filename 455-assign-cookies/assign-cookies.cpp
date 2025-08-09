class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gn=g.size();
        int kn=s.size();

        int gi=0;
        int ki=0;

        int con=0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
       while(gi<gn && ki<kn){

            if(g[gi]<=s[ki]){
                gi++;
                ki++;
                con++;
            }
            else{
                ki++;
            }

       }

       return con;

    }
};