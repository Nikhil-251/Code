class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int left=0,right=ans.size()-1,top=0,down=ans[0].size()-1;
        int dir=0;
        int num=1;
        while(left<=right && top<=down){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    ans[top][i] = num;
                    num+=1;
                }
                top+=1;
                dir=1;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    ans[i][right] = num;
                    num+=1;
                }
                right-=1;
                dir=2;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    ans[down][i] = num;
                    num+=1;
                }
                down-=1;
                dir=3;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    ans[i][left] = num;
                    num+=1;
                }
                left+=1;
                dir=0;
            }
        }
        return ans;
    }
};