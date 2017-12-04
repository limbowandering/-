#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int t[6] = {0,0,0,0,0,0};
  double point[6] = {2.5,2.5,2.0,2.5,3.0,3.0};
  string name[6] = {"Linux","嵌入式","算法","电子商务","Web开发","软件需求"};
  double score = 0;
  int count = 0;
  int i;
  for(t[0] = 0;t[0] < 2; t[0]++){
    for(t[1] = 0;t[1] < 2; t[1]++){
      for(t[2] = 0;t[2] < 2; t[2]++){
        for(t[3] = 0;t[3] < 2; t[3]++){
          for(t[4] = 0;t[4] < 2; t[4]++){
            for(t[5] = 0;t[5] < 2; t[5]++){

              for(i = 0; i < 6; i++){
                score += t[i]*point[i];
              }

              if(score >= 10.5){
                cout << count++ << " ";
                for(i = 0; i < 6; i++){
                  if(t[i]){
                    cout << name[i] << " ";
                  }
                }
                cout << endl;
              }

              score = 0;
            }
          }
        }
      }
    }
  }
  return 0;
}