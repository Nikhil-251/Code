class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
         vector<vector<pair<int,int>>>adj;
        for(int i=0;i<points.size();i++){
            vector<pair<int,int>>temp;
            for(int j=0;j<points.size();j++){
                int dist=0;
                if(i!=j){
                     dist=abs(points[j][0]-points[i][0])+abs(points[j][1]-points[i][1]);
                }
                temp.push_back({j,dist});
            }
            adj.push_back(temp);
        }
		
        int V=points.size();
        vector<int> key(V,INT_MAX);
        vector<bool> mstSet(V,false);
		key[0] = 0;
		
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            mstSet[u] = true;
            for(auto ele : adj[u]){
                int v = ele.first;
                int w = ele.second;
                if(mstSet[v] == false && w < key[v]){               
                    key[v] = w;
                    pq.push({w,v});
                }
            }
        }
        long long sum = 0;
        for(int i=0;i<V;i++){
            sum+=key[i];
        }
        return sum;
    }
};