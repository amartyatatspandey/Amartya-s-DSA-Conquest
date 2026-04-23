#include<iostream>
#include<cmath>
using namespace std;

void alldivisors(int n);

int main(){
    int n;
    alldivisors(n);
}


void alldivisors(int n){

for(int i=1;i<=sqrt(n);i++){

    if(n%i==0){

if(n/i==i){
    cout<<" "<<i<<" ";
}
else{
    cout<<" "<<i<<" ";
}

    }
}


}
