class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sw) {
        int n = stu.size();
        queue<int> sc;
        for(int i = 0 ; i<n ; ++i){
            sc.push(stu[i]);
        }
        int r=0 , i = 0;
        while(sc.size() && r<sc.size()){
            if(sc.front() == sw[i]){
                sc.pop();
                i++;
                r=0;
            } else {
                int choice = sc.front();
                sc.pop();
                sc.push(choice);
                r++;
            }
        }
        return sc.size();
    }
};