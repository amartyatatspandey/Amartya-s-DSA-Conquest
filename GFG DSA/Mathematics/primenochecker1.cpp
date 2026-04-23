#include<iostream>
#include<cmath>

using namespace std;

void primechecker(int a);

int main(){
int a;
    cout<<"Enter the number";
    cin>>a;
    primechecker(a);
}

void primechecker(int a){
int flag=1;
if(a==1){
    flag=0;
}
for(int i=2;i<a;i++){
    if(a%i==0){flag=0;}
}
if (flag==0){cout<<"This is NOT a prime number";}
if (flag==1){cout<<"This is a prime number";}
}


/*for(int i=2;i<a;i++){
if(a%i==0)
    cout<<"Not a prime";
    else{cout<<"PRIME";}
THIS WILL PRINT PRIME MULTIPLE TIMES, 
we should have a character which flags itself as
and then we interpret that and we can print anything
}
/*void primechecker(int a){

int b=a-1;
int c=a+1;
if(a==2||a==3){

    cout<<"This is a prime number";
if((b%6)==0||c%6==0){

    cout<<"This is a prime number";
}
else{cout<<"Not a prime number";}
}*/