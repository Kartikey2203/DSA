class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
      priority_queue<int> pq;
      for(int i=0; i<tasks.size(); i++){
        freq[tasks[i]-'A']++;
      }
      for(int f:freq){
        if(f>0){
            pq.push(f);
        }
      }
      int cnt=n+1,t=0;
      while(!pq.empty()){
        int seg=0;
        vector<int>st;
        for(int i=1; i<=cnt && !pq.empty(); i++){
            int top=pq.top();
            pq.pop();
            top--;
            st.push_back(top);
            seg++;
        }
        for(auto a:st){
         if(a>0)
            pq.push(a);
        }
        if(pq.empty()){
            t+=seg;
        }
        else{
            t+=n+1;
        }
      }
      return t;
    }
};