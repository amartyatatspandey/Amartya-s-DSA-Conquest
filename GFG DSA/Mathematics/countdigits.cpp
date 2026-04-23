#include<iostream>
using namespace std;

int countdigit(int n);

int main(){
int n;
cout<<"Enter the number";
cin>> n;
 int ans = countdigit(n);
 cout<<"The number of digits are:"<< ans << endl;
 return 0;
}


int countdigit(int n){
 if(n==0)
 return 1;
 int count=0;
while(n!=0){
n=n/10;
count++;}

return count;
}
 
 


