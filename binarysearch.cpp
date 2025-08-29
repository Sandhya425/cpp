// increasing order 1 2 3 4 5.
//#include<iostream>
// using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter sixe";
//     cin>>n;
//     cout<<"enter elemnts";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start=0,end=n-1,key;
//     cout<<"enter key";
//     cin>>key;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             cout<<mid;
//             break;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;//right side
//         }
//         else{
//           end=mid-1;
//         }
//     }
//     return 0;
// }




//acsending order(increasing order) with function 1 2 3 4 5.
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//           int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//             break;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;//right side.
//         }
//         else{
//             end=mid-1;
//         }
//     }  
//     return -1;
// }
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter sixe";
//     cin>>n;
//     cout<<"enter elemnts";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    int key;
//    cout<<"enter key";
//    cin>>key;
//    cout<<binarysearch(arr,n,key);
//    return 0;
// }


//decreasing order(decsending order) 30,20,10,4,6;
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter sixe";
    cin>>n;
    cout<<"enter elemnts";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,key;
    cout<<"enter key";
    cin>>key;
    // int mid=start+(end-start)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]<key){
            end=mid-1;// left side
        }
        else{
          start=mid+1;//right side
        }
        // mid=start+(end-start)/2;
    }
    return 0;
}




