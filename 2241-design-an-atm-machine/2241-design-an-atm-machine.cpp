class ATM {
public:
    long long int deno[5];
    map<int,int>m;
    ATM() {
        for(int i=0;i<5;i++){
            deno[i]=0;
        }
        m[4]=500;
        m[3]=200;
        m[2]=100;
        m[1]=50;
        m[0]=20;
    }
    
    void deposit(vector<int> bc) {
        for(int i=0;i<5;i++){
            deno[i]+=bc[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int>ans(5,0);
        for(int i=4;i>=0;i--)
        {
            if(amount>=m[i]){
                int c=amount/m[i];
                if(c>deno[i])c=deno[i];
                deno[i]-=c;
                amount-=(c*m[i]);
                ans[i]+=c;
            }
        }
        if(amount==0) return ans;
        else{
                for(int i=0;i<5;i++){
                    deno[i]+=ans[i];
                }
                vector<int>ans(1,-1);
                return ans;
            }
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */