//题意：给定n个城镇以及m条道路，每条道路连接两个城镇，道路有上下两种状态，求起点到终点需要的最少转换状态次数
//思路：令dp[i][0/1]为到达第i个城镇当前是上坡或者下坡的最少转换次数，然后无脑spfa就可以了
#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 10000+7;
int n,m,s,t;
vector<pair<int,int> >e[maxn];
int dp[maxn][2];
int vis[maxn];
void spfa()
{
    queue<int>q;
	for(int i = 0;i<=n;i++)
		for(int j= 0;j<2;j++)
			dp[i][j]=1e9;
	q.push(s);
	dp[s][0]=dp[s][1]=0;
    while(!q.empty())
	{
		int u = q.front();
		q.pop();
		vis[u]=0;
		for(int i = 0;i<e[u].size();i++)
		{
			pair<int,int> t = e[u][i];
			int v = e[u][i].first;
			int w = e[u][i].second;
			if(dp[v][w] > min(dp[u][w],dp[u][w^1]+1))
			{
				dp[v][w]=min(dp[u][w],dp[u][w^1]+1);
				if(!vis[v])
				{
					vis[v]=1;
					q.push(v);
				}
			}
		}
	}
}
int main()
{
    scanf("%d%d",&n,&m);
	for(int i = 1;i<=m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		e[u].push_back(make_pair(v,0));
		e[v].push_back(make_pair(u,1));
	}
    scanf("%d%d",&s,&t);
	spfa();
	printf("%d\n",min(dp[t][1],dp[t][0]));
}