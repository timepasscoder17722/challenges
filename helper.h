#include<iostream>
#include<vector>
#ifndef HELPER
#define HELPER

using std::cout;
using std::cin;

template<class T>
void swap(T &value, T &value2){
  if (value != value2) {
    value ^= value2;
    value2 ^= value;
    value ^= value2;
  }
}

template<class T>
void setVec(std::vector<T> &vec, int length){
  std::cout<<"set vector: ";
  for(int i =0; i<length; i++){
    T value; cin>>value;
    vec.push_back(value);
  }
}

template<class T>
void printVec(const std::vector<T> &vec){
  for(T value : vec)
    cout<<value<<' ';
  cout<<'\n';
}

#endif

