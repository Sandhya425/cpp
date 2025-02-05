#include<iostream>
using namespace std;
int main(){
   // int num1,num2,num3;
   // cout<<"enter two number";
   // cin>>num1>>num2>>num3;
   // cout<<num1*num2*num3<<endl;
   //cout<<num1+num2;
   //int num1,num2;
   //cin>>num1>>num2;
  // cout<<num1/num2;
  // cout<<num1%num2;
 //// int n1,r=12;
  //cout<<"area of circle is"<<22/7*r*r;
  //int n,n2;
  //cin>>n>>n2;
  //cout<<n-n2;
  //int n;
//   cin>>n;
//   if(n%2)
//   cout<<"number is odd";
//   else
//   cout<<"number is even";
// int n;
// cin>>n;
// cout<<"the square of number is"<<n*n;
// int m,n,o,p,q;
// float avg;
// cin>>m>>n>>o>>p>>q;
// avg=m+n+o+p+q/5.0;
// cout<<"average of five number"<<avg;
// int p,r,t;
// int sm;
// cin>>p>>r>>t;
// sm=p*r*t/100;
// cout<<"simple interest"<<sm;
// int a,b,c,d,e,f;
// cin>>a>>b>>c>>d>>e;
// f=a+b+c+d+e/100*1/100;
// cout<<"marks"<<f;
// bool com,com2;
// bool com2;
// com=2>6;
// com2=30==67;
// cout<<com<<"and"<<com2;
// cout<<sizeof(bool
// com=10.43;
// com2=56.00;
// cout<<com/com2;


//  bool log,log1;//unly use of comparison opretor bool 
//  log=56&&54;
//  log1=6||7;
//  cout<<log<<"\n"<<log1;


// int a,discount;
// cin>>a;
// discount=(a*10/100)-a;
// cout<<"the price is"<<discount;
// int distance=240;
// int time=4;
// int speed;
// speed=distance/time;
// cout<<speed<<"km/hr";
// cout<<"speed is"<<(distance*1000)/(hour*60*60)<<"m/s";


// que:wap to convert temperature from celsius to fahrenheight using formula f=9/5*c+32
// float f,c;
// cout<<"enter temperature in degree celsius";
// cin>>c;
// f=9/5*c+32;
// cout<<"temperature in fahrenheight"<<f;

// wap to calculate area of circle and perimeter of circle where r=7;pi=22/7;
// int r=7;
// int pi=22/7;
// int area,perimeter;
// area=22/7*r*r;
// perimeter=2*22/7*r;
// cout<<area<<"\n"<<perimeter;


// wap to cal. the total markes and avg,percentage of student in agiven 5 subj.
// int a,b,c,d,e;
// int total,avg,percentage;
// cin>>a>>b>>c>>e>>d;
// total=a+b+c+e+d;
// avg=a+b+c+d+e/5;
// percentage=total*100;
// cout<<total<<"\n";
// cout<<avg<<"\n";
// cout<<percentage<<"percentage";


// wap to check if the division of two num. rezults in an integer or a float.

#handle case where the user attemt to divide by 0 and print appropriate error massage.
int numerator,denomenetor;
cin>> numerator>>denomenetor;
if(denomenetor==0){
  cout<<"denometer should not be 0 ";
}
else{
  cout<<" the division of the numerator and denomenetor output is ans="<<numerator /denomenetor ;

}

    return 0;
}