class Solution {
public:
 int jump(vector<int>& nums) {
    int n=nums.size()-1;
    if(n==0)
    return 0;
        int last=0,nxt=0;
        int jmp=0;
        for(int i=0; i<nums.size(); i++){
             nxt=max(nxt,i+nums[i]);
            if(i==last){
                last=nxt;
                jmp++;
          if(nxt>=n)
             return jmp;
            }

        }
        return jmp;
   
        
    }
};