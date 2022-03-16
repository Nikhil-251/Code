class Solution {
    public int compress(char[] chars) {
        int left=0,right=0;
        int len = chars.length;
        
        while(right<len){
            int index = right;
            while(right<len && chars[index]==chars[right])
                right+=1;

            int repeats = right - index;
            chars[left] = chars[right-1];
            
            if(repeats==1){
                left+=1;
            }else if(repeats<=9){
                chars[left+1] = (char)(repeats + '0');
                left +=2;
            }else{
                String num = repeats + "";
                for(int i=0;i<num.length();i++)
                    chars[left + 1 + i] = num.charAt(i);
                    
                left += num.length() + 1;
                }
        }
   return left;         
}
}