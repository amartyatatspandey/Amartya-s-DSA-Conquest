#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void sieve(int n);

int main(){
int n;
cout<<"Enter the number";
cin>>n;
sieve(n);

}



void sieve(int n){

vector<bool>isprime(n+1, true);//n+1 size and all bools are true

for(int p=2;p*p<=n;p++){

    if(isprime[p]==true){
for(int i=p*p;i<=n;i=i+p){
isprime[i]= false;
}
}
}

for(int i=0;i<n+1;i++){
if(isprime[i]==true){

    cout<<i<<" ";
}

}



}