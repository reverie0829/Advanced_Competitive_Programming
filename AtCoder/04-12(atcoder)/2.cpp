#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n,count=0;
    //long long a[n];
    cin >> n;
    for (long long i=1; i <= n;i++){
        if(i%3==0||i%5==0){
            
            continue;
        }
        else
            count += i;
    }
    cout << count << endl;
}
