class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0, bott = rows-1, right = cols-1, left = 0;
        
        while(left <= right && top <= bott){

            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bott; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bott){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bott][i]);
                }
                bott--;
            }

            if(left<=right){
                for(int i=bott; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

        }
        return ans;
    }
};