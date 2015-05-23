#include <iostream>
#include <stdio.h>
#include <cstring>
#include <list>

using namespace std;

int flag, count, ans;

class Graph
{
	int V;
	list<int> *adj;
	void DFSUtil(int v,bool visited[]);
public:
	Graph(int V);
	void add_edge(int v,int w);
	void DFS(int v);
	int BFS(int v);
};

Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int>[V];
}

void Graph::add_edge(int v,int w)
{
	//adj[w].push_back(v);
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v,bool visited[])
{
	if (flag == 1) {
		return;
	}

	visited[v]=true;
	//printf("%d ",(v+1));	
	list<int>::iterator i;
	for(i=adj[v].begin();i != adj[v].end(); ++i)
	{
	//	cout <<"hey";
		if(!visited[*i]) {
	//		cout << *i << endl;
			DFSUtil(*i,visited);
		}
		else {
	//		cout << *i << endl;
			flag = 1;
			return;
		}
	}
}

void Graph::DFS(int v)
{
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	DFSUtil(v,visited);
	
}

int Graph::BFS(int v)
{	
	int t;
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	
	list<int> queue;
	
	int dist[V], maxx, nd;
	memset(dist, -1, sizeof(dist));

	visited[v]=true;
	queue.push_back(v);
	dist[v] = 0;

	list<int>::iterator i;

	while(!queue.empty())
	{
		
		v=queue.front();
		queue.pop_front();
		
		for(i=adj[v].begin(); i != adj[v].end(); i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				dist[*i] = dist[v] + 1;
				queue.push_back(*i);
			}
		}
	}
	maxx = dist[0];
	nd = 0;
	for (int i = 0; i < V; i++) {
		if (dist[i] > maxx) {
			maxx = dist[i];
			nd = i;
		}
	}
	ans = dist[nd];
	return nd;
}

int main()
{
	int n1,n2,t,n,j,i,m,k,a,v,c=0,Q, a1, b1;
//	scanf("%d",&t);
	scanf ("%d", &n);
	
	
	
	Graph g(n);

	for (i = 0;i < n - 1; i++) {
		scanf ("%d%d", &a1,&b1);
		g.add_edge(a1 - 1,b1 - 1);
		g.add_edge(b1 - 1, a1 - 1);
	}

	/*if (n != m + 1) {
		printf("NO\n");
		return 0;
	}*/
	// g.DFS(0);
	n1 = g.BFS(0);
	count = 0;
	//cout << n1 << endl;
	n2 = g.BFS(n1);
	/*if (flag == 1) {
		printf("NO\n");
	}
	else {
		if (count == n)
			printf("YES\n");
		else
			printf("NO\n");
	}*/
	printf ("%d\n", ans);
	return 0;
}