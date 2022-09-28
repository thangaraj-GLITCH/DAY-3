#include<iostream>
using namespace std;
int main()
{
float n,neg=0,pos=0,n1=0,p1=0;
cout<<"\nenter -1 to exit !!!";
while(n!=-1){
cout<<"\nenter the num : ";
cin>>n;
if(n<-1){
neg+=n;
n1++;
}
else if(n>0){
pos+=n;
p1++;
}
}
cout<<"\npositive average : "<<pos/p1;
cout<<"\nnegative average : "<<neg/n1;
return 0;
}

