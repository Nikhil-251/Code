class Solution {
public:
    vector <int> inttoarr(int x){
        vector <int> resultArray;
        while (true){
            resultArray.insert(resultArray.begin(), x%10);
            x /= 10;
            if(x == 0)
                return resultArray;
            }
        }
    
    int minimumSum(int num) {
        vector<int>temp = inttoarr(num);
        sort(temp.begin(),temp.end());
        int sum = 0;
        int l = 0,r = temp.size()-1;
        while(l<r){
            sum += 10 * temp[l] + temp[r];
            l++;
            r--;
        }
        return sum;
    }
};