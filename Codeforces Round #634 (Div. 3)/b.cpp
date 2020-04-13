#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
int T;
char output[2010];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    cin >> T;
    while (T--)
    {   
        memset(output, 0, sizeof(output));
        int n, a, b;
        cin >> n >> a >> b;
        int temp=0;
        for(int i=0;i<n;i++){
            if(i<a){
                output[i]='a'+temp;
                if(temp<b-1) temp++;
            }else{
                output[i]=output[i-a];
            }
            cout<<output[i];
        }
        cout<<endl;
    }
    return 0;
}