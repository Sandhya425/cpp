#include<iostream>
using namespace std;
int main(){
    // int arr[5]={3,5,6,2,9};
    // int largest=INT_MIN;
    // int seclarge=INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>largest)
    //         largest=arr[i]; 
    // }
    // cout<<largest;
     

    int arr[5]={3,5,9,2,9};
     int largest=INT_MIN;
     int seclarge=INT_MIN;
     for(int i=0;i<5;i++){
           if(arr[i]>largest)
                largest=arr[i];
     }
     cout<<largest;
     for(int i=0;i<5;i++){
        if(largest!=arr[i]){
            seclarge=max(seclarge,arr[i]);
        }
     }
     cout<<seclarge;
}