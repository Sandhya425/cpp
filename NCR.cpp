#include<iostream>
using namespace std;
void yrr();
int main(){
//ncr=n!/r!(n-r)!
// ncr fun();
// return 0;
// }
// void ncr fun(){
//     int n,r;
//     cin>>n>>r;
// for(int i=1;i<=n;i++){
    yrr();
    return 0;
 }
void yrr(){
int arr[5]={1,2,3,4,5};
int len=sizeof(arr);
int flen=len/4;
int n,dec=0;
cin>>n;
for(int i=0;i<flen;i++){
if(n==arr[i]){
    dec=1;//dec++;
}
}
if(dec==1)
 cout<<"found";
 else
 cout<<"not found";

}