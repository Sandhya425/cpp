#include <iostream>
using namespace std;
void fun();
int main(){
    fun();
    return 0;
}
void fun(){
    int arr[]={3,5,6,7,2};
    int m=sizeof(arr)/4;
    cout<<m<<"\n";
   for(int i=0;i<m;i++)
   cout<<arr[i];
}
// int main(){
    
// }
