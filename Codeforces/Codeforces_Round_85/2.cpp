#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long p[10000];
    int number;
    cin >> number;
    while(number--){
        int n;
        long long x;
        cin >> n >> x;
        long long p[n];
        for (int i = 0; i < n;i++){
            cin >> p[i];
            p[i] = p[i] - x;
        }
        long long count = 0, output = 0;
        sort(p, p + n);
        for (int i = n - 1; i >= 0;i--)
        {
            count = count + p[i];
            if(count<0)
                break;
            output++;
        }
        cout << output << endl;
    }
}