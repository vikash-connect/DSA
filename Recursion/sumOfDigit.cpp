class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int last;
        int sum = 0;
        while(n>0){
            last=n%10;
            sum=sum+last;
            n = n/10;
        }
        return sum;
    }
};