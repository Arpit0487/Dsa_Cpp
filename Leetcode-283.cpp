class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
          vector<int> temp; 
          for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] != 0) temp.push_back(nums[i]) ; 
          }
           for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == 0) temp.push_back(nums[i]) ; 
          }
          nums.clear() ; 
          nums = temp ; 
        }
    };

//another method
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector<int> temp ; 
      int count = 0;
      for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i] != 0) temp.push_back(nums[i]) ;
        else if(nums[i]==0) count++; 
      }
      while(count--){
        temp.push_back(0);
      }
      nums.clear() ; 
      nums = temp ; 
    }
};
