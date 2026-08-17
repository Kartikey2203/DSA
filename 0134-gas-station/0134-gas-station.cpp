class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int bal=0;
        int costgas=0;
        int totcost=0;
         int start=0;
        for(int i=0; i<gas.size(); i++){
            costgas+=gas[i];
            totcost+=cost[i];
            bal=bal+gas[i]-cost[i];
            if(bal<0){
                start=i+1;
                bal=0;
            } 
        }
          return costgas < totcost ?  -1 : start;
        //   if(costgas<totcost){
        //     return -1;
        //  }
        // return start;
    }
};