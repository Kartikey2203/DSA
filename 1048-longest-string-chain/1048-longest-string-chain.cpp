class Solution {
public:
    bool Pre(string& a,string& b){
        int bs=b.size();
        int as=a.size();
        if(bs-as!=1)
            return false;
            int temp=0;
            int i=0,j=0;
            while(i<as && j<bs){
                if(a[i]==b[j]) {
                    i++;
                    j++;
                }
                else
                 if(a[i]!=b[j] && temp==1){
                    j++;
                    temp++;
                }
                else
                return false;
            }
            return true;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](string a,string b){
            return a.size()<b.size();
        });
        int maxi=1,temp=0;
        vector<int> chain(words.size(),1);
        for(int i=0; i<words.size(); i++){
            temp=0;
            for(int j=0; j<i; j++){
                if(Pre(words[j],words[i])){
                    chain[i]=max(chain[i],chain[j]+1);
                }
            }
                    maxi=max(maxi,chain[i]);
        }
        return maxi;
    }
};