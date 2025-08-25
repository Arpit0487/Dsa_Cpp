class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector <int> ans;
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map <int,int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            minh.push({it.second, -it.first}); 
        }
        while (minh.size()) {
            for (int i = 0; i < minh.top().first; i++) {
                ans.push_back(-minh.top().second); 
            }
            minh.pop();
        }
        return ans;
    }
};