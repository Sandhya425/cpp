#include<iostream>
using namespace std;
void s(int,int,int,int,int,int);
void s(int arr1[],int arr2[],int arr3[],int len1,int len2,int len3){
    for(int i=0;i<len1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<len2;i++){
        arr3[len1+i]=arr2[i];
    }
}
void output(int arr3[],int len3){
    for(int i=0;i<len3;i++)
    cout<<arr3[i]<<" ";
}
int main(){
    int arr1[5]={1,2,3,4,6};
    int len1=sizeof(arr1)/4;
    int arr2[5]={2,4,5,5,6};
    int len2=sizeof(arr2)/4;
    int len3=len1+len2;
    int arr3[len3]={};
    //int len3=len1+len2;
    s(arr1,arr2,arr3,len1,len2,len3);
    output(arr3,len3);
        return 0;
    }