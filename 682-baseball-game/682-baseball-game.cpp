class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="x"){
                while(st.size()>0){
                    st.pop();
                }
            }
            else if(ops[i]=="+"){
                int t1 = st.top();st.pop();
                int t2 = st.top();
                int t3 = t1+t2;
                st.push(t1);
                st.push(t3);
            }
            else if(ops[i]=="D"){
                int temp = st.top() * 2;
                st.push(temp);
            }
            else if(ops[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};