#include<iostream>
using namespace std;
void min();
int main(){
    min();
    return 0;}
//    int array[]={1,3,4,5,6};
//    int max=array[0];
//    int n=sizeof(array)/4;
//    for(int i=0;i<n;i++){
//     if(max<array[i]){
//         max=array[i];}
//    }
//    cout<<max;
void min(){
int array[]={1,3,4,5,6};
int min=array[0];
int n=sizeof(array)/4;
for(int i=0;i<n;i++){
 if(min>array[i]){
     min=array[i];}
}
cout<<min;
}