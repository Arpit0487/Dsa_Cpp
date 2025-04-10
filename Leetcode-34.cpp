class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int left = -1;
            int right = -1;
            left = findLeft(nums,target);
            right = findRight(nums,target);
            return {left,right};
        }
        vector<int> findLeft(vector<int>& nums, int target){
            int start = 0;
            int end = nums.size()-1;
            int mid = (start+end)/2;
            while(start<=end){
                if(nums[mid]<target){
                    start=mid+1;
                }
                else if(nums[mid]>target){
                    end=mid;
                }
                else{
                    
                }
            }
        }
    };