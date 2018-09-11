#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
 
using namespace std;
 
void dfs(int cur, vector<vector <int> > & adj, vector<bool> & was, int & count){
    if(!was[cur]){
        was[cur] = true;
        count++;
        for(int i = 0; i < adj[cur].size(); i++){
            dfs(adj[cur][i], adj, was, count);
        }
    }
}
 
int getCount(int start, vector<vector <int> > & adj){
    vector<bool> was(adj.size(), false);
    int count = 0;
    dfs(start, adj, was, count);
    return count;
}
 
int main() {
    int n;
    cin >> n;
    int start;
    
    start = 0;
    vector<vector <int> > adj(n, vector<int>());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp;
            cin >> temp;
            if(temp == 1){
                adj[i].push_back(j);
            }
        }
    }
    if  (getCount(start, adj) == n){
        cout << 1;
    } else {
        cout << 0;
    }
        ;
    return 0;
}