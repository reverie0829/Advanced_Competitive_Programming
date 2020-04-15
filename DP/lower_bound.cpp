#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int array[] = {1, 13, 14, 25, 33, 43, 51, 53, 64, 72, 84, 93, 95, 96, 97};
    cout << lower_bound(array, array + 15, 33) - array << endl;
    cout << upper_bound(array, array + 15, 33) - array - 1 << endl;
    cout << array[lower_bound(array, array + 15, 33) - array] << endl;
    cout << array[upper_bound(array, array + 15, 33) - array - 1] << endl;
}