class Solution {
    public:
        int romanToInt(string s) {
            int length = s.length();
            int arr[15] = {0};
            int integer = 0;
            for(int i=0; i<length; i++){
                if(s[i]=='I'){
                    arr[i]= 1;
                }
                else if(s[i]=='V'){
                    arr[i] = 5;
                }
                else if(s[i]=='X'){
                    arr[i] = 10;
                }
                else if(s[i]=='L'){
                    arr[i] = 50;
                }
                else if(s[i]=='C'){
                    arr[i] = 100;
                }
                else if(s[i]=='D'){
                    arr[i] = 500;
                }
                else{
                    arr[i] = 1000;
                }
            }
            
            int digit=0;
            for(int i=0; i<=13; i++){
                if(arr[i]<arr[i+1]){
                    digit -= arr[i];
                }
                else{
                    digit += arr[i];
                }
            }
            digit += arr[14];
            return digit;
        }
    };