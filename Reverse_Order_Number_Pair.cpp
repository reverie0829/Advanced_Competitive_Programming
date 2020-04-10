#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,f,n) for(int i=f;i<n;i++)
#define N 1000005
#define int long long 
int data[N],tmp[N];
int mergecount(int L,int R){
	if(L+1==R)return 0;
	int count=0,M=(R-L)/2+L;
	count+=mergecount(L,M);
	count+=mergecount(M,R);
	int a=L,b=M,k=L,t=M-1;
	rep2(i,L,M){
		while(t+1<R&&data[i]>data[t+1])t++;
		count+=t-M+1;
	}
	while(a<M||b<R){
		if(a<M&&(b>=R||data[a]<data[b])){
			tmp[k++]=data[a++];
		}else{
			tmp[k++]=data[b++];
		}
	}
	rep2(i,L,R)data[i]=tmp[i];
	return count;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	int n,ans,t=1;
	while(cin>>n&&n){
		rep(i,n)cin>>data[i];
		ans=mergecount(0,n);
		cout<<"Case #"<<t++<<": "<<ans<<"\n";//Case #1: 0
	}
	return 0;
}