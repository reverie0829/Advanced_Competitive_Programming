#include<bits/stdc++.h>
using namespace std;
#define ll long long

int res[100005];
int p[100005];
int a[100005];

int n;
void solve(int num,int c){
    for(int k=1;p[num]+k*num<=n;k++){
        if(a[p[num]+k*num]>num){
            if(res[a[p[num]+k*num]]==0){
                //存在一种转移到先手赢的情况？不应该让对方赢
                //存在一种转移到先手输的情况，转移过去自己就赢了
                printf("%d can move to %d\n",num,a[p[num]+k*num]);
                res[num]=1;
                return;
            }
        }
    }
    for(int k=1;p[num]-k*num>=1;k++){
        if(a[p[num]-k*num]>num){
            if(res[a[p[num]-k*num]]==0){
                //存在一种转移到先手赢的情况？不应该让对方赢
                //存在一种转移到先手输的情况，转移过去自己就赢了
                printf("%d can move to %d\n",num,a[p[num]-k*num]);
                res[num]=1;
                return;
            }
        }
    }
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        p[a[i]]=i;
    }

    res[n]=0;
    //先手赢=false
    for(int i=n-1;i>=1;i--){
        res[i]=0;
        //一开始假设没办法转移，先手赢=false
        solve(i,'A');
        if(res[i]==0){
            printf("%d cannot move\n",i);
        }
    }

    for(int i=1;i<=n;i++){
        int t=a[i];
        if(res[t]==1){
            printf("A");
        }
        else{
            printf("B");
        }
    }

    printf("\n");
}