#include<iostream>
using namespace std;

/* 桶排序 又称基数排序 属于分配式排序 桶子法bucket bin-（sort）
稳定性排序 
O(Nlog(m) r基数 m堆数一般 r=10
实现：二维数组
*/
int findmax(int arr[],int arrSize){
    int max=0;
    for(int i=1;i<arrSize;i++){
        if(arr[i]>arr[max])
            max=i;
    }
    return arr[max];
}
void bucketSort(int arr[],int arrSize){
    
    int max=findmax(arr,arrSize);
    int bucket[100][10];
       
   for(int i=1;max/i>0;i*=10){
       for(int j=0;j<arrSize;j++){
           for(int k=0;k<10;k++){
                  bucket[j][k]=0;
               }
           } 
       for(int j=0;j<arrSize;j++)
      {   
          int m=arr[j]/i;
          int n=m%10;
          bucket[j][n]=arr[j];
      }
       int p=0;
       for(int j=0;j<10;j++){
           for(int k=0;k<arrSize;k++){
               if(bucket[k][j]!=0){
                   arr[p++]=bucket[k][j];
               }
           }
       }
    }

}

int main()
{ 
  
  const int arraySize=12;
  int a[] = {131, 62, 613, 7, 3, 611, 42, 91, 30, 13, 51, 1432};
  bucketSort(a,arraySize);
  for (int i = 0; i < arraySize; i++)
    cout << a[i] << " ";;
    
  return 0;
} 
