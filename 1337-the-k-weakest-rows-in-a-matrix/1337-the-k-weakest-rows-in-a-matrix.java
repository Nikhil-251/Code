class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        int r = mat.length,c = mat[0].length;
        
        int[] res = new int[r];
        for(int i=0;i<r;i++){
            int j;
            for(j=0;j<c;j++){
                if(mat[i][j]==0){
                    break;
                }
            }
            res[i] = j*r + i;
        }
        Arrays.sort(res);
        for(int i=0;i<r;i++){
            res[i] = res[i]%r;
        }
        return Arrays.copyOfRange(res,0,k);
    }
}