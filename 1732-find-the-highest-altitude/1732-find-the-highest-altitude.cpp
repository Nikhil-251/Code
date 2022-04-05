class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp=0,max=0;;
        for(int i=0;i<gain.size();i++){
            temp += gain[i];
            if(max<temp){
                max=temp;
            }
        }
        return max;
    }
};