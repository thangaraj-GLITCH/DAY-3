#include<iostream>
using namespace std;
int main()
{
int a[50],c=0,i,n,c1,n1,j,k,b[10],re=0,r,max;
float mean=0,median=0;
cout<<"\nenter the no of elements in an array : ";
cin>>n;
for(i=0;i<n;i++){
cout<<"\nenter the element "<<i+1<<" : ";
cin>>a[i];
mean+=a[i];
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
cout<<"\nmean : "<<mean/n;
if(n%2!=0){
n1=n/2;
cout<<"\nmedian : "<<a[n1+1]<<"\n";
}
else{
n1=n/2;
median=(a[n1]+a[n1-1])/2;
cout<<"\nmedian : "<<median;
}
for(i=0;i<n;i++){
max=0;
for(j=i+1;j<n;j++){
if(a[i]==a[j])
max++;
}
if(max>=1){
if(c<max){
c=max;
c1=a[i];
}
}
}
cout<<"\nmode : "<<c1;
return 0;
}
