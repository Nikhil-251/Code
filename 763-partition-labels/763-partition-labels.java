class Solution {
    public List<Integer> partitionLabels(String s) {
        List<Integer>ans = new ArrayList<>();
        int [] endindex = new int[26];
        for(int i=0;i<s.length();i++){
            endindex[s.charAt(i)-'a'] = i;
        }
        
        int i=0;
        while(i<s.length()){
            char starchar = s.charAt(i);
            int terminalindex = endindex[starchar-'a'];
            for(int j=0;j<=terminalindex;j++){
                terminalindex = Math.max(terminalindex,endindex[s.charAt(j)-'a']);
            }
            ans.add(terminalindex-i+1);
            i = terminalindex + 1;
        }
        return ans;
    }
}