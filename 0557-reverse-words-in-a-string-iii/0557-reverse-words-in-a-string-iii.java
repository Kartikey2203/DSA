class Solution {
    public String reverseWords(String x) {
         Scanner sc=new Scanner(System.in);
        // String x=sc.nextLine();
        String st[]=x.split(" ");
       StringBuilder s=new StringBuilder();
        for(int i=0; i<st.length; i++){
            s.append(new StringBuilder(st[i]).reverse());
             if (i < st.length - 1) s.append(' ');
        }
        return s.toString();
        }
    }
// }