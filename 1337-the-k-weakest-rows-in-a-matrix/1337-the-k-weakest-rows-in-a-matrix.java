class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b)-> a[1]==b[1]?b[0]-a[0]:b[1]-a[1]);
        
        for(int i=0;i<mat.length;i++){
            int j=0;
            while(j<mat[0].length && mat[i][j]==1) j++;
            pq.add(new int[]{i,j});
            if(pq.size()>k){
                pq.poll();
            }
        }
        
        int[] result = new int[k];
        while(k>0){
            result[--k] = pq.poll()[0];
        }
        return result;
    }
}