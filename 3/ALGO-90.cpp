#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  if(n > 0){
    int *a = new int[n];
    int b, count = 1, tmp = 1;
    cin >> a[0];
    b = a[0];
    for(int i = 1; i < n; i++){
      cin >> a[i];
      if(a[i] == a[i - 1]){
        tmp++;
        if(tmp > count){
          count = tmp;
          b = a[i];
        }
      }else{
        tmp = 1;
      }
    }
    cout << b;
    delete[] a;
  }
  return 0;
}