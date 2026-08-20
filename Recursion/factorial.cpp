class Solution {
  public:
    long factorial(long n) {
        // code here
        
         if(n == 1 || n<1){
            return 1;
        }
        return n*factorial(n-1);
    }
};