#include <bits/stdc++.h>
#define inf 9999999
using namespace std;

typedef int weight;
typedef vector<weight> array;
typedef vector<array> matrix;

void backward_traverse(int v, int s, int r, matrix &g,
		       vector<int> &no, vector< vector<int> > &comp,
		       vector<int> &prev, vector<weight> &mcost,
		       vector<int> &mark, weight &cost, bool &found) {
  const int n = g.size();
  if (mark[v]) {
    vector<int> temp = no;
    found = true;
    do {
      cost += mcost[v];
      v = prev[v];
      if (v != s) {
        while (comp[v].size() > 0) {
          no[comp[v].back()] = s;
          comp[s].push_back(comp[v].back());
          comp[v].pop_back();
        }
      }
    } while (v != s);
    for (int j = 0; j < n; ++j)
      if (j != r && no[j] == s)
        for (int i = 0; i < n; ++i)
          if (no[i] != s && g[i][j] < inf)
            g[i][j] -= mcost[ temp[j] ];
  }
  mark[v] = true;
  for (int i = 0; i < n; ++i)
    if (no[i] != no[v] && prev[ no[i] ] == v)
      if (!mark[ no[i] ] || i == s)
        backward_traverse(i, s, r, g,
			  no, comp, prev, mcost, mark, cost, found);
}

weight minimum_spanning_arborescence(int r, matrix &g) {
  const int n = g.size();
  
  vector<int> no(n);
  vector< vector<int> > comp(n);
  for (int i = 0; i < n; ++i) {
    no[i] = i;
    comp[i].push_back(i);
  }
  weight cost = 0;
  while (1) {
    vector<int> prev(n, -1);
    vector<weight> mcost(n, inf);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (j == r) continue;
        if (no[i] != no[j] && g[i][j] < inf) {
          if (g[i][j] < mcost[ no[j] ]) {
            mcost[ no[j] ] = g[i][j];
            prev[ no[j] ] = no[i];
          }
        }
      }
    }
    bool stop = true;
    vector<int> mark(n);
    for (int i = 0; i < n; ++i) {
      if (i == r || mark[i] || comp[i].size() == 0) continue;
      bool found = false;
      backward_traverse(i, i, r, g,
			no, comp, prev, mcost, mark, cost, found);
      if (found) stop = false;
    }
    if (stop) {
      for (int i = 0; i < n; ++i)
        if (prev[i] >= 0)
          cost += mcost[i];
      return cost;
    }
  }
}

int main(){
  int s,t,w,n;
  for(;;){
    cin>>n;
    if(n==0) break;
    matrix g(n+1);
    for(int i=0;i<=n;i++){
      g[i].resize(n+1);
      g[i][0]=inf;
    }
    for(int i=1;i<=n;i++)
      for(int j=0;j<=n;j++)
	cin>>g[j][i];
    printf("%d\n",minimum_spanning_arborescence(0,g));
  }
}
