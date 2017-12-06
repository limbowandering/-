#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int *arr = new int[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int max = arr[0], s = 0;
  for(int i = 1; i < n; i++){
    if(max < arr[i]) {
      max = arr[i];
      s = i;
    }
  }
  cout << max << " " << s;
  delete[] arr;
  return 0;
}