#include <iostream>

using namespace std;

int main(){
  long long n, res;

  cin >> n;
  if(n <= 2){
    res = n;
  }
  else if(n % 2 == 1){
    res = n * (n - 1) * (n - 2);
  }
  else if(n % 3){
    res = n * (n - 1) * (n - 3);
  }
  else{
    res = (n-1)*(n-2)*(n-3);
  }
  cout << res << endl;
  return 0;
}