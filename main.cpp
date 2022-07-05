#include<iostream>
#include<vector>
#include"helper.h"
#include"quicksort.h"

void test(){
  int length; std::cin>>length;
  std::vector<int> vec; setVec(vec, length);
  printVec(vec);
  quicksort(vec, 0, vec.size()-1);
  printVec(vec);
}

int main(){
  int T; std::cin>>T;
  while(T--){
    test();
  }
}
