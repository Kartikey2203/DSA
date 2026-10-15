class Solution {
    public int countPrimes(int n) {
        Boolean b[]=new Boolean[n];
        Arrays.fill(b,true);
        if(n<=2) return 0;
        b[0]=false;
        b[1]=false;
        for(int i=2; i*i<n; i++){
            if(b[i]){
                for(int j=i*i; j<n; j+=i){
                    if(b[j])
                    b[j]=false;
                }
            }
        }
        int ans=0;
        for(int i=2; i<n; i++){
            if(b[i])
            ans++;
        }
        return ans;
    }
}