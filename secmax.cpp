// #include<iostream>
// using namespace std;
// int main(){
    // int arr[5]={3,5,6,2,9};
    // int largest=INT_MIN;
    // int seclarge=INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>largest)
    //         largest=arr[i]; 
    // }
    // cout<<largest;
     

//     int arr[5]={3,5,9,2,9};
//      int largest=INT_MIN;
//      int seclarge=INT_MIN;
//      for(int i=0;i<5;i++){
//            if(arr[i]>largest)
//                 largest=arr[i];
//      }
//      cout<<largest;
//      for(int i=0;i<5;i++){
//         if(largest!=arr[i]){
//             seclarge=max(seclarge,arr[i]);
//         }
//      }
//      cout<<seclarge;
// }


// #include<stdio.h>
// int main(){
//     int arr[]={42,42,42};
//     int len=sizeof(arr)/sizeof(int);
//     int larg=-1;
//      int sec=-1;
//     for(int i=0;i<len;i++){
//         if(arr[i]>larg){
//             larg=arr[i];
//         }}
//     printf("%d\n",larg);
//        for(int i=0;i<len;i++){
//         if(arr[i]<larg&&sec<arr[i]){
//             sec=arr[i];
//         }
//     }
//     printf("%d",sec);
//     }



// #include<stdio.h>
// #include <limits.h>
// int seclarg(int arr[],int n){
//      int larg=-1;
//      int sec=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>larg);
//             larg=arr[i];
//         }
//         else if(arr[i]<larg && sec<arr[i]){
//             sec=arr[i];
//         }
//     }
//       return sec;
//     }
// int main(){
//     int arr[]={42,42,42};
//     int len=sizeof(arr)/sizeof(int);
//     printf("%d",seclarg(arr,len));
//     return 0;
// }

// Smallest and second smallest element in an array
// #include<stdio.h>
// #include <limits.h>
//  int main(){
// int arr[]={23,23,23};
// int n=sizeof(arr)/sizeof(int);
// int small=INT_MAX;
// int secsmall=INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]<small){
//       secsmall=small;
//         small=arr[i];
//     }
//    else if(arr[i]>small && secsmall>arr[i]){
//         secsmall=arr[i];
//     }
// }
//   if (secsmall == INT_MAX) 
//         printf("Second Smallest does not exist\n");
//     else
//         printf("Second Smallest = %d\n", secsmall);
//  }




// //third largest
// #include <stdio.h>
// #include <limits.h>
// int thirdLargest(int arr[],int n) {
    // int first = INT_MIN, second = INT_MIN,
    // third = INT_MIN;
//     int first=-1,second=-1,third=-1;
//     for (int i=0; i<n; i++) {
//         if (arr[i] > first) {
//             third=second;
//             second=first;
//             first = arr[i];
//         }
//         else if (arr[i] > second) {
//             third=second;
//             second = arr[i];
//         }
//         else if (arr[i] > third) {
//             third = arr[i];
//         }
//     } 
//     return (third);
// }
// int main() {
//     int arr[] = {20,2};
//     int n=sizeof(arr)/sizeof(int);
//     printf("%d",thirdLargest(arr,n));
//     return 0;
// }



    