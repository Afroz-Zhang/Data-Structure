#include<iostream>
using namespace std;
/* A,B,C 柱子，A挪到C 一次一盘
大盘子不能在小盘子上
O(2^N)*/
int hanoi(int n,char t1,char temp,char t2){
    
    if(n==1)
    {   
        cout<<t1<<"----->"<<t2<<endl;
        
    }else{
        
        hanoi(n-1,t1,t2,temp);
        cout<<t1<<"----->"<<t2<<endl;
        hanoi(n-1,temp,t1,t2);

    }
}

int main(){
    hanoi(3,'A','B','C');
    return 0;
}