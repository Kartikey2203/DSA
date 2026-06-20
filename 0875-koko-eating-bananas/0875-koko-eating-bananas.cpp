class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int k=INT_MAX;
        int n=piles.size();
        int low=1;
        int high=piles[n-1];
        while(low<=high){
         int mid=low+(high-low)/2;
            long long eat=0;
            for(int j:piles){
                int sp=ceil((double)j/mid);
                eat+=sp;
            }
            if(eat==h){
                k=min(k,mid);
                high=mid-1;
                // break;
            }
            else
            if(eat>h){
                low=mid+1;
            }
            else{
                k=mid;
                high=mid-1;
            }
        }
        return k;
    }
};