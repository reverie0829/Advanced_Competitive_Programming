#include <iostream>
#include <queue>
#define boost cin.tie(NULL); ios::sync_with_stdio(false);
using namespace std;

long long inversion(deque<int> &que){
  long long result = 0, size = que.size();
  deque<int> l, r;
  
  if(size != 1){
    for(int i = 0; i < size / 2; i++){
      l.push_back(que.front());
      que.pop_front();
    }
    for(int i = size / 2; i < size; i++){
      r.push_back(que.front());
      que.pop_front();
    }
    
    result += inversion(l) + inversion(r);
  }
  
  for(int i = 0; i < size; i++)
    if(!l.empty() && !r.empty() && l.front() > r.front()){
      result += l.size();
      que.push_back(r.front());
      r.pop_front();
    }else if(!l.empty()){
      que.push_back(l.front());
      l.pop_front();
    }else if(!r.empty()){
      que.push_back(r.front());
      r.pop_front();
    }
  
  return result;
}

int main() {
  boost
  
  int n, k, opt = 1;
  
  while(cin >> n && n){
    deque<int> que;
    for(int i = 0; i < n; i++){
      cin >> k;
      que.push_back(k);
    }
    
    cout << "Case #" << opt++ << ": " << inversion(que) << endl;  
  }
  
  return 0;
}