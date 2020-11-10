#include<iostream>
using namespace std;
//面试重点
void quickSort(int a[],int arraysize);
void quickSort(int a[], int first, int last);
int partition(int a[], int first, int last);

void quickSort(int a[],int arraysize){
    quickSort(a,0,arraysize-1);
}
void quickSort(int a[], int first, int last){
    if(last>first)
    {
        int pivotIndex = partition(a, first, last);
        quickSort(a, first, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, last);
    }
}
int partition(int a[], int first, int last){
    int pivot=a[first];
    int low=first+1;
    int high=last;

while(high>low){
    while(low<=high&&a[low]<=pivot)
      low++;
    while(low<=high&&a[high]>pivot)
      high--;

    if(high>low)
    {
       int temp=a[low];
        a[low]=a[high];
        a[high]=temp;
    }
}
while(high>first && a[high]>=pivot)
    high--;

if (pivot > a[high])
  {
    a[first] = a[high];
    a[high] = pivot;
    return high;
  }
  else
  {
    return first;
  }

}

int main()
{ 
  const int arraySize=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  quickSort(a,arraySize);
  for (int i = 0; i < arraySize; i++)
    cout << a[i] << " ";

  return 0;
} 
