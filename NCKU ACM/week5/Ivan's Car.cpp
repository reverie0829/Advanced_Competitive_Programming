#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

#define MAXN 10005
#define INF 0x3f3f3f3f

struct node
{
    int w, to;//w是上下坡方向，to是路指向哪個城市
};

int N, M;
int s, e;
int i;
vector<node>mp[MAXN];//因爲直接開mp[MAXN][MAXN]太大會超內存，所以用vector來存連通的城市
int visit[MAXN];//記錄是否到達過此城市
int dist[MAXN];//記錄到達每個城市換過的齒輪數
int w[MAXN];//記錄到達每個城市時正在上坡還是下坡

void solve()//類似bfs
{
    queue<int>q;
    visit[s] = 1;
    int Size = mp[s].size();//Size代表某個城鎮有幾條路通往其他城鎮
    for(i = 0; i < Size; i++)
    {
        int to = mp[s][i].to;
        int ww = mp[s][i].w;
        visit[to] = 1;
        dist[to] = 0;//第一次不需要換齒輪
        w[to] = ww;//到達to城鎮時車的上下坡方向
        q.push(to);
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        visit[u] = 0;
        Size = mp[u].size();
        for(i = 0; i < Size; i++)
        {
            int to = mp[u][i].to;
            int add = mp[u][i].w == w[u] ? 0 : 1;//假如車輛方向改變就要多換一次齒輪，反之不必換齒輪
            w[to] = mp[u][i].w;//記錄到達to城鎮時車的方向
            if(dist[to] > dist[u] + add)//如果有換齒輪更少的選擇，就更新dist
            {
                dist[to] = dist[u] + add;
                if(!visit[to])//如果to城鎮沒有被訪問過，就進隊列
                {
                    visit[to] = 1;
                    q.push(to);
                }
            }
        }
    }
}

int main()
{
    while(~scanf("%d %d", &N, &M))
    {
        for(i = 0; i < M; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            node temp;//假如從u到v的方向是1，就讓v到u的方向爲-1
            temp.w = 1, temp.to = v;
            mp[u].push_back(temp);
            temp.w = -1, temp.to = u;
            mp[v].push_back(temp);
        }
        memset(visit, 0, sizeof(visit));
        memset(dist, INF, sizeof(dist));
        scanf("%d %d", &s, &e);
        solve();
        printf("%d\n", dist[e]);
    }
}