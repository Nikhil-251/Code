class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size(),c=0;
        int start=0,end=n-1;
        while(start<=end){
            if(people[start]+people[end]<=limit){
                start+=1;
                end-=1;
                c+=1;
            }
            else if(people[start]+people[end]>limit){
                end-=1;
                c+=1;
            }
        }
        return c;
    }
};