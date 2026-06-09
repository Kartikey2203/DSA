class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        if(hand.size() % groupSize) return false;

        map<int,int> mp;

        for(int x : hand)
            mp[x]++;

        for(auto [card, cnt] : mp) {

            if(cnt == 0) continue;

            for(int i = 0; i < groupSize; i++) {

                if(mp[card + i] < cnt)
                    return false;

                mp[card + i] -= cnt;
            }
        }

        return true;
    }
};