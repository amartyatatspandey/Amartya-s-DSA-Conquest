#include<iostream>
using namespace std;

void palindromechecker(int n);

 int main(){
    int n;
cout<<"Enter the number to check for palindrome";
cin>>n;

palindromechecker(n);


return 0;
 }

 void palindromechecker(int n){
int rev=0;
int temp=n;

while(temp!=0){
    int ld=temp%10;/*This extracts ld*/
    rev=rev*10+ld;/*this uses ld in rev*/
    temp=temp/10;/*This removes the ld*/
    }
if(rev==n){cout<<"This number is a palindrome";}
else {cout<<"Not a palindrome";}
 }