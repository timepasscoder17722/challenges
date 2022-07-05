#pragma once
#include<iostream>
#include<vector>
#include"helper.h"

template<class T>
int partition(std::vector<T> &vec, int low, int high){
  int i = low;
  for(int j=i; j<high; j++){
    if(vec[j] < vec[high]){
      swap(vec[i++], vec[j]);
    }
  }
  swap(vec[i], vec[high]);
  return i;
}

template<class T>
void quicksort(std::vector<T> &vec, int low, int high){
  if (low < high){
    int index = partition(vec, low, high);
    quicksort(vec, low, index-1);
    quicksort(vec, index+1, high);
  }
}

