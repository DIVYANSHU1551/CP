#include<bits/stdc++.h>     
using namespace std; 

void DFSRec(vector<int> adj[], int s, bool visited[]) 
{ 	
    visited[s]=true;
    cout<< s <<" ";   //3not//
    
    for(int u:adj[s]){
        if(visited[u]==false)
            DFSRec(adj,u,visited);
    }
}

/*3   T-0(V+E)this is for count connected components in an undirected graph int3*/void DFS(vector<int> adj[], int V, int s){
    bool visited[V];  /*3 int count=0;3*/
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		//Code for Disconnected graph will come here
		/*2for(int i=0;i<v;i++)
		if(visited[i]==false)             //{count++};
		DFSRec(adj,i,visited);2*/         //return count;
    DFSRec(adj,s,visited);           
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,1,4);
	addEdge(adj,3,4);

	cout << "Following is Depth First Traversal: "<< endl; 
	DFS(adj,V,0); 

	return 0; 
} 
