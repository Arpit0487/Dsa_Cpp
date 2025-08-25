class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size()==0 || s.size()==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        for(int i=0; i<g.size(); i++){
            for(int j=0; j<s.size(); j++){
                if(s[j] >= g[i]){
                    count++;
                    s[j]=INT_MIN;
                    break;
                }
            }
        }
        return count;
    }
};