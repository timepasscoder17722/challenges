#include<iostream>
#include<vector>
#include"helper.h"
#include"insertionsort.h"
using std::cout;
using std::cin;

int main(){
  int n; cin>>n;
  std::vector<int> vec;
  while(n--){
    int value; cin>>value;
    vec.push_back(value);
  }
  printVec(vec);
  insertionsort(vec);
  printVec(vec);
}
