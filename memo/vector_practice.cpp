#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <iterator>
#include <set>
#include <map>

using namespace std;

int main(){
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);

cout<<"ok"<<'\n';
int a;
vector<int> v;

do
{
  //std::cin.tieJ(0);
  cin >> a;
  v.push_back(a);
} while (a);

cout << v.size() << '\n';

v.pop_back();
v.pop_back();

cout << v.size() << '\n';

cout << (v.empty()? "YES" : "NOT EMPTY")<< '\n';

v.resize(4);
v.resize(8, 100);
v.resize(12);

for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
cout << '\n';


v.clear();
cout << "size = " << v.size();
}
