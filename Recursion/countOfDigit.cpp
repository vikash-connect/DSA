class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count = 0;
        if(n==1){
            return 1;
        }
        else{
            while(n!=0){
                count++;
                n=n/10;
            }
        }
        return count;
    }
};