class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>> li=new ArrayList<>();
        for(int i=0; i<n; i++){
                List<Integer> temp=new ArrayList<>();
            for(int j=0; j<=i; j++){
                if(i==j || j==0){
                    temp.add(1);
                }
                else{
                    temp.add(li.get(i-1).get(j) + li.get(i-1).get(j-1));
                    //  row.add(triangle.get(i - 1).get(j - 1)
                    //          + triangle.get(i - 1).get(j));

                }
            }
                li.add(temp);
        }
        return li;
    }
}