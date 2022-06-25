#include<iostream>
#include<vector>
#ifndef HELPER
#define HELPER

using std::cout;
using std::cin;

template<class T>
void swap(T &num, T &num2){
  num ^= num2;
  num2 ^= num;
  num ^= num2;
}

template<class T>
void printVec(const std::vector<T> &vec){
  for(T value : vec)
    cout<<value<<' ';
  cout<<'\n';
}

#endif

