#include <bits/stdc++.h>
using namespace std;
int numIslands(vector<vector<int>>&g){
    int m=g.size();
    if(m==0) return 0;
    int n=g[0].size();
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(g[i][j]==1){
                c++;
                stack<pair<int,int>>s;
                s.push({i,j});
                g[i][j]=0;
                while(!s.empty()){
                    auto p=s.top();s.pop();
                    int x=p.first;
                    int y=p.second;
                    int dx[4]={1,-1,0,0};
                    int dy[4]={0,0,1,-1};
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        if(nx>=0&&nx<m&&ny>=0&&ny<n&&g[nx][ny]==1){
                            s.push({nx,ny});
                            g[nx][ny]=0;
                        }
                    }
                }
            }
        }
    }
    return c;
}
