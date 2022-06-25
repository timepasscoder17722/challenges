#include<iostream>
#include<vector>

#ifndef INSERTIONSORT
#define INSERTIONSORT

using std::cout;
using std::cin;

template<class T>
void insertionsort(std::vector<T> &vec){
  for(T i=0; i<vec.size()-1; i++){
    if(vec[i] > vec[i+1]){
      for(T j=i+1; j>0; j--){
        if(vec[j] < vec[j-1])
          swap(vec[j], vec[j-1]);
        else
          break;
      }
    }
  }
}

#endif
