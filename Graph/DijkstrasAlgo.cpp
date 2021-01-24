//Type1  T-0(V^2)
vector<int> dijkstra(vector<int> graph[],int V,int src)
{
    vector<int>dist(v,INT_MAX);
    dist[src]=0;
    vector<bool> fin(v,false): //finalized
    for(int count=0;count<v-1;count++)
    {
        int u=-1;
        for(int i=0;i<v;i++)
        if(!fin[i]&&(u==-1||dist[i]<dist[u]))
        u=i;
        fin[i]=true;
        for(int v=o;v<V;v++)
        if(graph[u][v]!=0 && fin[v]==false)
        dist[v]=min(dist[v],dist[u]+graph[u][v]);
    }
    return dist;
}