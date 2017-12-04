#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(int a,int b){return a>b;}

int main(){
  int n, m;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  cin >> m;
  vector<int> res(m);
  for(int i = 0; i < m; i++){
    int l,r,k;
    cin >> l >> r >> k;
    int *tmp = new int[n];
    for(int j = 0; j < n; j++){
      tmp[j] = a[j];
    }
    sort(tmp + l - 1, tmp + r, cmp);
    res[i] = tmp[l - 1 + k - 1];
    delete[] tmp;
  }
  for(int i = 0; i < m; i++){
    cout << res[i] << endl;
  }
  return 0;
}
