#include<iostream>
using namespace std;
//面试重点

void quickSort(int a[], int first, int last){
    int pivot=a[(first+last)/2];
    int low=first;
    int high=last;
    while(low<=high){
    while(a[low]<pivot)
        low++;
    while(a[high]>pivot)
        high--;
    
    if(low<=high)
    {
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;
        high--;
    }
    }
if(first<high)
    quickSort(a, first,high);
if(low<last)
    quickSort(a,low, last);
}

int main()
{ 
  const int arraySize=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  quickSort(a,0,arraySize-1);
  for (int i = 0; i < arraySize; i++)
    cout << a[i] << " ";;
    
  return 0;
} 