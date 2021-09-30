// Bipartite Graph
// ---------------
// You can divide all the vertices of graph in 2 sets
// such that all edges of the graph are from set1 to set2

// Two Coloring


/// How  to flip colors between 1 and 2 ?
// Use 3-color
//   3-2 = 1    and   3-1 = 2

#include <iostream>
#include <vector>
using namespace std;

bool dfs_helper(vector<int> graph[], int node, int visited[], int parent, int color){
	// come to node and assign the color
	visited[node] = color;    // 1 or 2 -- both means visited
	for(auto nbr: graph[node]){
		// Many possibilities
		if(visited[nbr] == 0){
			int subprob = dfs_helper(graph, nbr, visited, node, 3-color);
			if(subprob == false){
				return false;
			}
		}
		else if(nbr != parent and color == visited[nbr]){
			return false;
		}
	}
	return true;	
}

// Yes or No, whether graph is Bipartite or Not
bool dfs(vector<int> graph[], int N){
	// Visited array states :
	// 0 -> Not visited
	// 1 -> Color 1
	// 2 -> Color 2
	int visited[N];
	for(int i=0; i<=N; i++){
		visited[i] = 0;
	}
	
	int color = 1;
	int ans = dfs_helper(graph,0,visited,-1, color);

	for(int i=0; i<N; i++){
		cout << i << "->" << visited[i] << "\n";
	}

	return ans;
}

int main(){

	int N, M;
	cin >> N >> M;

	vector<int> graph[N];
	
	while(M--){
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}	

	// By DFS, coloring the nodes at each step 
	// Current node -> color 1
	// Neighbouring nodes -> color 2
	if(dfs(graph, N)){
		cout << "Yes, its bipartite..\n";
	}
	else{
		cout << "No, its not bipartite..\n";
	}
}
