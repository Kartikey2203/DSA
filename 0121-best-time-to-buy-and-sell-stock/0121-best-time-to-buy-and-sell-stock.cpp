class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=prices[0];
        int pro=0;
        int j=1;
        for(int i=1; i<prices.size(); i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
        else{
            pro=max(pro,(prices[i]-buy));
        }
        }
        return pro;
    }
};