#include<iostream>
using namespace std;

/*最大堆（大根堆）
for完全二叉树来说：
左子树节点位置 m=2n+1（n为父节点位置）
O(nlogn)
父>子*
非稳定排序*/

void heapSort(int arr[],int currentRoot,int size);
void heapify(int arr[],int size);

void heapify(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        heapSort(arr,i,size);
    }
}


void heapSort(int arr[],int currentRoot,int size){

    if(currentRoot<size){
        int leftnode=2*currentRoot+1;
        int rightnode=2*currentRoot+2;

        int max=currentRoot;
    
    if(leftnode<size && arr[max]<arr[leftnode]){
        max=leftnode;
    }

    if(rightnode<size && arr[max]<arr[rightnode]){
        max=rightnode;
    }

    if(max!=currentRoot){
        int temp=arr[max];
        arr[max]=arr[currentRoot];
        arr[currentRoot]=temp;
        
        heapSort(arr,max,size);
        }  
    }
}

int main()
{
    const int arrsize=10;                                                                                                 ;
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    heapify(arr,arrsize);
    for(int i=0; i< arrsize; i++)
        cout<<arr[i]<<"  ";
    int s=arrsize-1;
    for(int i=0;i<arrsize-1;i++)
    {
        int temp=arr[0];
        arr[0]=arr[arrsize-1-i];
        arr[arrsize-1-i]=temp;

        heapSort(arr,0,s);
        s--;
        
    }

    for(int i=0; i< arrsize; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}

