#include<bits/stdc++.h>
using namespace std;
int n,m,k,i,a[210000],c[210000];
long long ans;
pair<int, int>b;
priority_queue<pair<int, int> >q;
int main()
{
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        b.first=a[i];
        b.second=i;
        q.push(b);
    }
    for(i=1; i<=m*k; i++) //目的是讓ans儘可能的大，我們就把前k*m個最大的加到ans裏面
    {
        ans+=q.top().first; //要讓ans儘可能的大，k*m個最大的都加到ans裏面
        c[i]=q.top().second;//依次記錄最大值的位置
        q.pop();
    }
    sort(c+1,c+m*k+1);      //排序的目的是找到合適的位置分割
    cout<<ans<<endl;
    for(i=m; i<=m*k-m; i+=m)//分割，並且循環k-1次
        cout<<c[i]<<" ";
    return 0;
}