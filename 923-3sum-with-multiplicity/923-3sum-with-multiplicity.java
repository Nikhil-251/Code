class Solution {
    public int threeSumMulti(int[] arr, int target) {
        Map<Integer,Long>freqmap = new HashMap<>();
        
        for(Integer el:arr){
            long freq = freqmap.getOrDefault(el,0l);
            freqmap.put(el,freq+1l);
        }
        
        long ans=0;
        for(Integer el1:freqmap.keySet()){
            for(Integer el2:freqmap.keySet()){
                int el3 = target - el1 - el2;
                if(freqmap.containsKey(el3)){
                    long f1 = freqmap.get(el1);
                    long f2 = freqmap.get(el2);
                    long f3 = freqmap.get(el3);
                    
                    if(el1==el2 && el1==el3){
                        ans += (f1 * (f1-1) * (f1-2))/6;
                    }
                    else if(el1==el2 && el1!=el3){
                        ans += ((f1 * (f1-1))/2) * f3;
                    }
                    else if(el1<el2 && el2<el3){
                        ans += f1 * f2 * f3;
                    }
                }
                ans = ans % 1000000007;
            }
        }
        return (int)ans;
    }
}