#include<iostream>
using namespace std;

void selectSort(int a[],int arraySize){//不稳定排序，将前n个数中最大值与第n个数交换，n--
    for(int j=0;j<arraySize-1;j++){
        int max=0;
        int temp;
        int flag=0;
        for(int i=0;i<arraySize-j;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            flag=i;
        }
    }
    temp=a[arraySize-1-j];
    a[arraySize-1-j]=a[flag];
    a[flag]=temp;
    }
}

int main()
{ 
  const int arraySize=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  selectSort(a,arraySize);
  for (int i = 0; i < arraySize; i++)
    cout << a[i] << " ";

  return 0;
} 