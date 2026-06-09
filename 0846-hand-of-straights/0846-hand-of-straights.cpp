class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize){
            return false;
        }
        map<int,int> mp;
        for(int i:hand){
            mp[i]++;
        }
        for(auto [num,cnt]:mp){
                if(mp[num]==0){
                    continue ;
                }
            for(int i=0; i<groupSize; i++){
                if(cnt>mp[num+i]){
                    return false;
                }
                mp[num+i]-=cnt;
            }
        }
        return true;
    }
};