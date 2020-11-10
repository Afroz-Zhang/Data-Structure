#include<iostream>
using namespace std;

void BubbleSort(int a[],int arraysize){//稳定排序，从第一个数字开始两两比较
     int temp;
     bool ischange=true;
     for(int i=0;i<arraysize-1&&ischange;i++)
     {
      ischange=false;
      for(int j=0;j<arraysize-i-1;j++)
      {
        
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
             ischange=true;
      }
      }
     }
}

int main()
{ 
  const int arraysize=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  BubbleSort(a,arraysize);
  for (int i = 0; i < arraysize; i++)
    cout << a[i] << " ";

  return 0;
} 

