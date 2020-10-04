#include<bits/stdc++.h>
using namespace std;
#define v 9

int minDistance(vector<int> dist,vector<bool> sptSet)
{
 int m=INT_MAX,ix;
 for(int i=0;i<v;i++)
 {
  if(dist[i]<=m && !sptSet[i])
  {
   m=dist[i];
   ix=i;
  }
 }
 return ix;
}
void printSolution(vector<int> dist)
{
 cout<<"Vertex -  Distance from source"<<endl;
 for(int i=0;i<v;i++)
 {
  cout<<i<<"  -  "<<dist[i]<<endl;
 }
}
void dijkstra(int graph[][v],int src)
{
 vector<int> dist(v,INT_MAX);
 vector<bool> sptSet(v,false);
 dist[src]=0;
 int u;
 for(int l=0;l<v-1;l++)
 {
  u=minDistance(dist,sptSet);
  sptSet[u]=true;
  for(int i=0;i<v;i++)
  {
   if(!sptSet[i] && graph[u][i] && dist[u]!=INT_MAX)
   {
    dist[i]=min(dist[i],dist[u]+graph[u][i]);
   }
  }
 } 
 printSolution(dist);
}
int main()
{
  int graph[v][v] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0);
    return 0;
}
