class Solution {
    static class Node{
        int x;
        int y;
        int dist;
        Node(int x,int y,int dist){
            this.x=x;
            this.y=y;
            this.dist=dist;
        }
    }
    public int shortestPathBinaryMatrix(int[][] grid) {
        int row = grid.length,col=grid[0].length;
        if(grid[0][0]==1 || grid[row-1][col-1]==1){
            return -1;
        }
        
        int[][]dir = {{0,1},{1,0},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
        Queue<Node>q = new LinkedList<>();
        q.add(new Node(0,0,1));
        grid[0][0]=1;
        while(!q.isEmpty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                Node temp = q.poll();
                int x  = temp.x;
                int y = temp.y;
                int cost = temp.dist;
                if(x==row-1 && y==col-1){
                    return cost;
                }
                
                for(int[] way:dir){
                    int nx = x + way[0];
                    int ny = y + way[1];
                    if(nx>=0 && nx<row && ny>=0 && ny<col && grid[nx][ny]==0){
                        q.add(new Node(nx,ny,cost+1));
                        grid[nx][ny]=1;
                    }
                }
            }
        }
        return -1;
    }
}