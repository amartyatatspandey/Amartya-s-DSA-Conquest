#include<iostream>
#include<cmath>
using namespace std;
void primechecker(int n);
 int main(){


    
int a;
    cout<<"Enter the number";
    cin>>a;
    primechecker(a);
}
 

void primechecker(int n){
int flag=1;
if(n==1){
    cout<<"Unique number";
}
if(n==2||n==3){flag=1;}
if(n%2==0){flag=0;}


for(int i=3;i<sqrt(n);i++){

    if(n%i==0){
        flag=0;
    }
}

if(flag==1){cout<<"Prime number";}
if(flag==0){cout<<"composite number";}




}

