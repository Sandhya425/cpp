// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={2,4,1,6,3,11};
//     for(int i=0;i<5;i++){
//         int index=i;
//         for(int j=i+1;j<6;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include<iostream>//auxiliry=o(1)//total space compelxty=1+n=o(n)//total time complexty=o(n^2)
// using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter size";
//     cin>>n;
//     cout<<"enter elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++){
//         int index=i;
//         for(int j=i+1;j<6;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




//bubble sort 
// #include<iostream>
// using namespace std;
// int main(){
//  int arr[1000];
//  int n;
//  cout<<"size";
//  cin>>n;
//  cout<<"elements of an array";
//  for(int i=0;i<n;i++){
//     cin>>arr[i];
//  }
//  for(int i=0;i<n-1;i++){//n-2-->3tak chalega
//     bool swapped=0;
//     for(int j=0;j<n-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             swapped=1;
//         }
//     }
//     if (swapped==0){
//         break;
//     }
//  }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }



//insertion sort 
//  #include<iostream>
// using namespace std;
// int main(){
//  int arr[1000];
//  int n;
//  cout<<"size";
//  cin>>n;
//  cout<<"elements of an array";
//  for(int i=0;i<n;i++){
//     cin>>arr[i];
//  }
//  for(int i=1;i<n;i++){
//     for(int j=i;j>0;j--){
//         if(arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//         }
//         else{
//             break;
//         }
//     }
//  }
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//  }
// }


#include<stdio.h>
int main(){
    int arr[]={9,7,3,1,6};
    for(int i=0;i<5-2;i++){
        int index=0;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[index]){
             index=j;
            }
        }
        arr[i]=arr[index];
    }
    for(int i=0;i<5;i++){
    printf("%d",arr[i]);
    }
}