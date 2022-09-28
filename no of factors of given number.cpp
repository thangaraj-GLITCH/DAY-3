#include<iostream>
using namespace std;
int main()
{
int n,i,j,k;
cout<<"\nenter the number : ";
cin>>n;
for(i=1;i<n;i++){
if(n%i==0){
k++;
}
}
cout<<"\nnumber of factors : "<<k;
return 0;
}
