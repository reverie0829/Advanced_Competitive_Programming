#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int blood=c,cnt=0;
    while(1){
        c-=b;
        if(c<=0){
            cout<<"Yes"<<endl;
            break;
        }
        a-=d;
        if(a<=0){
            cout <<"No"<<endl;
            break;
        }
    }
}