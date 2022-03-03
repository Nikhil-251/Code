class Solution {
    public int numberOfArithmeticSlices(int[] nums) {
        int ans=0;
        HashMap <Integer,Integer>[] maps = new HashMap[nums.length];
        
        for(int i=0;i<nums.length;i++){
            maps[i] = new HashMap<>();
        }
        
        for(int i=1;i<maps.length;i++){
            for(int j=0;j<i;j++){
                long cd = (long)nums[i] - (long)nums[j];
                if(cd<=Integer.MIN_VALUE || cd>=Integer.MAX_VALUE){
                    continue;
                }
                
                int apendonj = maps[j].getOrDefault((int)cd,0);
                int apendoni = maps[i].getOrDefault((int)cd,0);
                
                ans += apendonj;
                maps[i].put((int)cd,apendoni + apendonj +1);
            }
        }
        return ans;
    }
}