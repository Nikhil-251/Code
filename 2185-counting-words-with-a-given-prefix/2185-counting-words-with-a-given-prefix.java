class Solution {
    
    public int prefixCount(String[] words, String pref) {
        int count=0,temp;
        for(int i=0;i<words.length;i++){
            temp=0;
            for(int j=0;j<words[i].length();j++){
                if(pref.charAt(j)!=words[i].charAt(j)){
                    break;
                }
                temp+=1;
                if(temp==pref.length()){
                    count+=1;
                    break;
                }
            }
            }
        return count;
    }
}