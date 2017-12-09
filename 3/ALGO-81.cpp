#include <iostream>

using namespace std;

int sum(int arr[], int n){
  int tmp = 0;
  for(int i = 0; i < n; i++){
    tmp += arr[i];
  }
  return tmp;
}

int main(){
  int n;
  cin >> n;
  int *a = new int[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  cout << sum(a, n) << " ";
  cout << sum(a,n)/n << endl;
  return 0;
}