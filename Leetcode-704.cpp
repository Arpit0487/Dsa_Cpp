class Solution {
    public:
        int midIndex(vector<int>& nums, int target, int start, int end) {
            if (start > end) {
                return -1;
            }
            int mid = start + (end - start) / 2;
            if (target > nums[mid]) {
                return midIndex(nums, target, mid + 1, end);
            }
            else if (target < nums[mid]) {
                return midIndex(nums, target, start, mid - 1);
            }
            else {
                return mid;
            }
        }
        int search(vector<int>& nums, int target) {
            return midIndex(nums, target, 0, nums.size() - 1);
        }
    };
    