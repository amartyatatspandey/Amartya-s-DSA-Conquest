#include<iostream>
using namespace std; 
 int gcd(int a,int b);

 int main(){
int a,b;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
     cout<<"The GCD is:"<< gcd(a,b)<<endl;
 }


 int gcd(int a,int b){
if(b==0){

    return a;
}
return gcd(b, a%b);
 }


