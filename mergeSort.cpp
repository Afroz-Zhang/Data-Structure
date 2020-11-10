#include<iostream>
using namespace std;

void mergeSort(int arr[],int arraysize);//拆分and合并
void mergeSort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);

void mergeSort(int arr[],int arraysize){
    mergeSort(arr,0,arraysize-1);
}

void mergeSort(int arr[],int low,int high){
    if(low==high)
    {
        return;
    }
    else{
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}

void merge(int arr[],int low,int mid,int high){
    int s1=mid-low+1;
    int s2=high-mid;
    int *firsthalf=new int[s1];
    int *secondhalf=new int[s2];
    
    for(int i=low;i<=mid;i++)
    {
        firsthalf[i-low]=arr[i];
    }
    for(int i=mid+1;i<=high;i++)
    {
        secondhalf[i-mid-1]=arr[i];
    }//向两个数组填充数据

    int i=0,j=0;
    int k=low;
    while(i<s1 && j<s2)
    {
        if(firsthalf[i]<=secondhalf[j])
        {
            arr[k]=firsthalf[i];
            i++;
            k++;
        }
    else{
        arr[k]=secondhalf[j];
        j++;
        k++;
        }//两数组元素比较
   }
   //如果其中一边已经比完放入目标数组
   while(i<s1){
       arr[k]=firsthalf[i];
       k++;
       i++;
   }
   while(j<s2){
       arr[k]=secondhalf[j];
       k++;
       j++;
   }
  delete[] firsthalf;
  delete[] secondhalf;
}

int main()
{ 
  const int arraysize=17;
  int a[] = {1, 4, 8, 1, 24, 78, 6, 6, 7, 3, 6, 4, 9, 3, 3, 1, 2};
  mergeSort(a,arraysize);
  for (int i = 0; i < arraysize; i++)
    cout << a[i] << " ";

  return 0;
} 