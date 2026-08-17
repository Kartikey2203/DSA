class Solution {
public:
    bool isPowerOfFour(int n) {
         while(n!=4 && n%4==0){
            n=n/4;
            if(n<4)
             return false ;
         }
         if(n==4 || n==1)
         return true;
         return false;
    }
};