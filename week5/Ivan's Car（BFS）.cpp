// 先用vector存边，up存向上的，down存向下的，然后BFS，用优先队列存状态，
//每次都从队列中取操作数最小的，由于复杂度跟内存问题，需要减枝，当走到一个点，
//看当前的操作数跟上一次的大小，如果小则放入队列，如果相同则看这个点上次的方向与这一次是否相同，
//如果不相同且这个点的这个方向也没有出现过，则放入队列。
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
#define inf 0x3f3f3f3f
#define mod 1000000007
typedef long long ll;
using namespace std;
const int N=10005;
const int M=100005;
vector<int>up[N],down[N];
int n,m;
int a,b;
int step[N],lastdir[N];
bool vis[N][3];
struct man {
    int sum;
    int dir;
    int num;
    bool operator<(man aa)const {
        return sum>aa.sum;
    }
};
priority_queue<man>q;
void init(){
    for(int i=0; i<up[a].size(); i++) {
        man s;
        s.sum=0;
        s.num=up[a][i];
        s.dir=1;q.push(s);vis[a][1]=true;
    }
    for(int i=0; i<down[a].size(); i++) {
        man s;
        s.sum=0;
        s.num=down[a][i];
        s.dir=2;q.push(s);vis[a][2]=true;
    }
}
void bfs() {
    init();
    memset(step,inf,sizeof(step));
    step[a]=0;
    while(!q.empty()){
        man t=q.top();q.pop();
        int tt=t.num;//printf("!!!dir=%d num=%d sum=%d\n",t.dir,t.num,t.sum);
        if(tt==b){
            printf("%d\n",t.sum);
            return;
        }
        for(int i=0;i<up[tt].size();i++){
            man k=t;k.num=up[tt][i];
            if(t.dir==2)k.dir=1,k.sum++;
            if(step[k.num]>k.sum){
                step[k.num]=k.sum;lastdir[k.num]=k.dir;
                q.push(k);
            }
            else if(step[k.num]==k.sum&&lastdir[k.num]!=k.dir&&!vis[k.num][k.dir]){
                lastdir[k.num]=k.dir;
                q.push(k);
            }
        }
        for(int i=0;i<down[tt].size();i++){
            man k=t;k.num=down[tt][i];
            if(t.dir==1)k.dir=2,k.sum++;
            if(step[k.num]>k.sum){
                step[k.num]=k.sum;lastdir[k.num]=k.dir;
                q.push(k);
            }
            else if(step[k.num]==k.sum&&lastdir[k.num]!=k.dir&&!vis[k.num][k.dir]){
                lastdir[k.num]=k.dir;
                q.push(k);
            }
        }
    }
}
int main() {
    memset(vis,false,sizeof(vis));
    scanf("%d%d",&n,&m);
    while(m--) {
        scanf("%d%d",&a,&b);
        up[a].push_back(b);
        down[b].push_back(a);
    }
    scanf("%d%d",&a,&b);
    bfs();
    return 0;
}