#include<iostream>
#include<cmath>
using namespace std;

void primefactors(int n);

int main(){
int n;

    cout<<"Enter number";
    cin>>n;
   primefactors(n);
}

void primefactors(int n){

while(n%2==0){

cout<<" 2 ";
n=n/2;

}
for(int i=3;i<=sqrt(n);i=i+2){


while(n%i==0){
    cout<<" "<<i<<" ";
    n=n/i;

}
    /*We keep on editing n so printing at every step*/
}
if(n>2){
    cout<<n;
}


}