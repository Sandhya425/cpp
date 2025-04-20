#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,6,3,8};
    int f,index=-1;
    cin>>f;
    for(int i=0;i<5;i++){
        if(arr[i]==f){
           index=i;
           cout<<f;
          break;
        }
    }
    cout<<"index number is="<<index;
    return 0;
}