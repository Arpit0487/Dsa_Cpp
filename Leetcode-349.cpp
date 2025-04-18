class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            if(nums1.size()==0 || nums2.size()==0) return ans;
            if(nums1.size() <= nums2.size()){
                for(int i=0; i<nums1.size(); i++){
                    for(int j=0; j<nums2.size(); j++){
                        if(nums1[i]==nums2[j]){
                            ans.push_back(nums1[i]);
                            break;
                        }
                    }
                }
            }
            else{
                for(int i=0; i<nums2.size(); i++){
                    for(int j=0; j<nums1.size(); j++){
                        if(nums2[i]==nums1[j]){
                            ans.push_back(nums2[i]);
                            break;
                        }
                    }
                }
            }
            //set stores only unique values so we are creating a set
            std::set<int> unique_ans(ans.begin(), ans.end());
            //set can't be returned so we are converting set again to a vector with unique values
            std::vector<int> result(unique_ans.begin(), unique_ans.end());
            return result;
        }
    };