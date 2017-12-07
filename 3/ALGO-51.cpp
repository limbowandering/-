#include <iostream>

using namespace std;

bool isPrime(int x){
  for(int i = 2; i * i <= x; i++){
    if(x % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  int cnt = 0;
  int i = 2;
  int res = 1;
  cin >> n;
  if(n == 0){
    cout << 0;
    return 0;
  }
  while(cnt < n){
    if(isPrime(i)){
      res *= i;
      res %= 50000;
      cnt++;
    }
    i++;
  }
  cout << res;
  return 0;
}