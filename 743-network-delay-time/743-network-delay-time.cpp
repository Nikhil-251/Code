class Solution {
    struct node{
        int dst;
        int wt;
    };
    struct qnode{
        int vertex;
        int dist;
    };
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
        unordered_map<int,vector<node*>>adj;
        for(int i=0;i<times.size();i++){
            node *newnode = new node;
            newnode->dst = times[i][1];
            newnode->wt = times[i][2];
            adj[times[i][0]].push_back(newnode);
        }
        
        qnode *qn = new qnode;
        qn->vertex = k;
        qn->dist = 0;
        queue<qnode*>q;
        q.push(qn);
        
        vector<int>distance(N+1,INT_MAX);
        distance[k]=0;
        int time =0;
        
        while(!q.empty()){
            qnode *curr = q.front();
            q.pop();
            for(auto it:adj[curr->vertex]){
                qnode *temp = new qnode;
                temp->vertex = it->dst;
                temp->dist = it->wt + curr->dist;
                if(distance[temp->vertex]>temp->dist){
                    q.push(temp);
                    distance[temp->vertex] = it->wt + curr->dist;
                }
            }
            
        }
        
        for(int i=1;i<=N;i++){
            if(distance[i]==INT_MAX){
                return -1;
            }
            time = max(time,distance[i]);
        }
        return time;
    }
};