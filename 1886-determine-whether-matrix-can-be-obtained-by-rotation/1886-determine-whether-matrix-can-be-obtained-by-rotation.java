class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        if(checkequal(mat,target)){
            return true;
        }
        for(int i=0;i<3;i++){
            rotate(mat);
            if(checkequal(mat,target))
                return true;
        }
        return false;
    }
    
    public void rotate(int[][]mat){
        int n = mat.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i]);
        }
    }
    
    public void reverse(int[] mat){
        int n = mat.length;
        int start=0,end = n-1;
        while(start<=end){
                int temp = mat[start];
                mat[start] = mat[end];
                mat[end] = temp;
                start+=1;
                end-=1;
        }
    }
    public boolean checkequal(int[][] mat,int[][] target){
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat.length;j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
}