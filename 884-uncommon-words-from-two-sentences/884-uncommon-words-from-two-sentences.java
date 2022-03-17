class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String[] arr1 = s1.split(" ");
        Map<String,Integer>map1 = new HashMap<>();
        
        for(int i=0;i<arr1.length;i++){
            String current = arr1[i];
            if(map1.get(current)==null){
                map1.put(current,1);
            }
            else{
                map1.put(current,map1.get(current)+1);
            }
        }
        
        String[] arr2 = s2.split(" ");
        Map<String,Integer>map2 = new HashMap<>();
        
        for(int i=0;i<arr2.length;i++){
            String current = arr2[i];
            if(map2.get(current)==null){
                map2.put(current,1);
            }
            else{
                map2.put(current,map2.get(current)+1);
            }
        }
        
        List<String>list = new ArrayList<String>();
        
        for(Map.Entry<String,Integer> entry : map1.entrySet()){
            String w = entry.getKey();
            Integer f = entry.getValue();
            if(f==1){
                if(map2.get(w)==null){
                    list.add(w);
                }
            }
        }
        
        for(Map.Entry<String,Integer> entry : map2.entrySet()){
            String w = entry.getKey();
            Integer f = entry.getValue();
            if(f==1){
                if(map1.get(w)==null){
                    list.add(w);
                }
            }
        }
        
        String[] array = list.toArray(new String[0]);
        return array;
    }
}