class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0){
            return 1;
        }
        for(int i=1;i<=num;i*=2){
            num ^= i;
        }
        return num;
    }
};