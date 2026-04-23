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

if(n==1){
    cout<<"unique number";
}
while(n%2==0){
cout<<" "<<n<<" ";
    n=n/2;


}
while(n%3==0){
    cout<<" "<<n<<" ";
    n=n/3;
}
for( int i=5;i<sqrt(n);i=i+6){
    while(n%i==0){
        cout<<" "<<i<<" ";
        n=n/i;
    }
    while(n%(i+2)==0){
        cout<<" "<<i+2<<" ";
        n=n/i+2;
    }
}

if(n>3){

    cout<<" "<<n<<" ";
}





}
