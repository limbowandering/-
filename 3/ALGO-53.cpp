#include <iostream>
#include <algorithm>

using namespace std;

bool cmp1(int a,int b){return a < b;}
bool cmp2(int a,int b){return a > b;}

int sum(int* a,int* b, int n){
  int tmp = 0;
  for(int i = 0; i < n; i++){
    tmp += a[i] * b[i];
  }
  return tmp;
}

int main(){
  int T;
  cin >> T;
  int *res = new int[T];
  int n;
  for(int i = 0; i < T; i++){
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
    }
    for(int j = 0; j < n; j++){
      cin >> b[j];
    }
    sort(a,a+n,cmp1);
    sort(b,b+n,cmp2);
    res[i] = sum(a,b,n);
  }
  for(int i = 0; i < T; i++){
    cout << res[i] << endl;
  }
  return 0;
}