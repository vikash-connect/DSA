class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(p==0){
            return 1;
        }
        else{
            return n*recursivePower(n, p-1);
        }
    }
};
