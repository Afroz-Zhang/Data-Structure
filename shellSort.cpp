#include<iostream>
using namespace std;
  //非稳定排序——插排改进版
void shellSort(int arr[],int size){
    for(int gap=size/2; gap>0; gap/=2){
        for(int i=gap;i<size;i++){
            int j=i;
            int temp=arr[j];
        
        while(j-gap>=0 && arr[j-gap]>temp){
            arr[j]=arr[j-gap];
            j=j-gap;
        }
       arr[j]=temp;
       }
    }
}
  
int main()
{
  const int size=12;
  int a[] = {1, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  shellSort(a,size);
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";

  return 0;
} 



