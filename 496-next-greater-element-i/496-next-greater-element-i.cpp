class Solution {
public:
    vector<int> nextgreatestright(vector<int>nums){
        stack<int>st;
        vector<int>ans(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(st.size() > 0 && st.top()<nums[i]){
                st.pop();
            }
            ans[i] = st.size()>0?st.top():-1;
            st.push(nums[i]);
        }
        return ans;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ngr = nextgreatestright(nums2);
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums2.size();i++){
            mp.insert(make_pair(nums2[i],ngr[i]));
        }
 
        vector<int>ans(nums1.size(),-1);
        
        for(int i =0; i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                 ans[i] = mp[nums1[i]];
            }
        }
        return ans;
    }
};