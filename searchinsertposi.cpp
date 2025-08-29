
//time complexity=o(log n),space complexity=0(1).{1 2 3 8}target=7
// #include<iostream>
// using namespace std;
// int main (){
//    int arr[1000];
//    int n;
//    cout<<"enter size";
//    cin>>n;
//    cout<<"enter elements";
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int target;
//    cin>>target;
  // int start=0,end=n-1,mid;
//    int index=n;
//    while(start<=end){
//     mid=start+(end-start)/2;
//     if(arr[mid]==target){
//         index=mid;
//         break;
//     }
//     else if(arr[mid]<target){
//         start=mid+1;
//     }
//     else{
//         index=mid;
//         end=mid-1;
//     }
//    }
//    cout<<index;
//    return 0;
// }



// #include<iostream>
// using namespace std;
// int searchinsert(int arr[],int n,int target){
//     int start=0,end=n-1,mid;
//     int index=n;
//     while(start<=end) {
//         mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             index=mid;
//             break;
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else{
//             index=mid;
//             end=mid-1;
//         }
//     }
//     return index;
// }
// int main (){
//    int arr[1000];
//    int n;
//    cout<<"enter size";
//    cin>>n;
//    cout<<"enter elements";
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int target;
//    cin>>target;
//    cout<<searchinsert(arr,n,target);
//    return 0;
// }



// #include<iostream>
//  using namespace std;
//  int searchinsert()
// int main (){
//    int arr[1000];
//    int n;
//    cout<<"enter size";
//    cin>>n;
//    cout<<"enter elements";
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int target;
//    cin>>target;
//    cout<<searchinsert(arr,n,target);
//    return 0;
// }