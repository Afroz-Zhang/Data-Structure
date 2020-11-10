#include<iostream>
using namespace std;

void insertionSort(int a[],int ArraySize){//将一个数插到一个**排好序**的数组中
  
  for(int i=1;i<ArraySize;i++){
    int temp=a[i];
    int j=i-1;
    for(j;j>=0&&a[j]>temp;j--){//关键点：运行完j-1,交换时要+1
      a[j+1]=a[j];
  }
    a[j+1]=temp;
  }

}

int main()
{ 
  const int arraysize=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  insertionSort(a,arraysize);
  for (int i = 0; i < arraysize; i++)
    cout << a[i] << " ";

  return 0;
} 
