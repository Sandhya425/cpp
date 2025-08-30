#include<iostream>
using namespace std;

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//           for(int j=1;j<=i;j++){
//             if(i%2!=0)
//             cout<<"*";   
//     }
//      cout<<"\n";
// }
// }



// int n;
// int nst=1;
// int nsp=n-1;
// cout<<"enter the numbwr";
// cin>>n;
//  for(int i=1;i<=n;i++){
//        for(int k=1;k<=nsp;k++){
//         cout<<" ";
//        }
//       //  nsp=nsp-1;
//        for(int j=1;j<=nst;j++){
//          cout<<"*";  
//        }
//        nst=nst+2;
//         nsp=nsp-1;
//         cout<<"\n";  
// }
// }


// int n;
// int nst=1;
// cout<<"enter the numbwr";
// cin>>n;
//  for(int i=1;i<=n;i++){
//        for(int j=1;j<=nst;j++){
//          cout<<"*";  
//        }
//        nst=nst+2;
//         cout<<"\n";  
// }
// }



// int n;
// int nsp=3;
// cout<<"enter number";
// cin>>n;
// for(int i=1;i<=n;i++){
//      for(int k=1;k<=nsp;k++){
//       cout<<" ";
//   }
//   nsp=nsp-1;
  
//   for(int j=1;j<=i;j++){
//       cout<<j;
//   }
//   int a=i-1;
//    for(int k=1;k<=i-1;k++){
//       cout<<a;
//       a--;
//   }
 
//   cout<<"\n";
// }
// }



void rotate(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=last;
//     for(int i=0;i<=n;i++){
//     cout<<arr[i];
// }
}
int main(){
int arr[1000];
int n;
cout<<"enetr n";
cin>>n;
cout<<"enetr elements";
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
rotate(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;

}