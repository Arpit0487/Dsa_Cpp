class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int matrix[n][n];
        int count=1;
        vector<vector<int>> ans;
        int top = 0, bott = n-1, right = n-1, left = 0;
        
        while(left <= right && top <= bott && count<=n*n){

            for(int i=left; i<=right; i++){
                matrix[top][i] = count;
                count++;
            }
            top++;

            for(int i=top; i<=bott; i++){
                matrix[i][right] = count;
                count++;
            }
            right--;

            if(top<=bott){
                for(int i=right; i>=left; i--){
                    matrix[bott][i] = count;
                    count++;
                }
                bott--;
            }

            if(left<=right){
                for(int i=bott; i>=top; i--){
                    matrix[i][left] = count;
                    count++;
                }
                left++;
            }
        }
        for(int i=0; i<n; i++){
            vector<int> a;
            for(int j=0; j<n; j++){
                a.push_back(matrix[i][j]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};