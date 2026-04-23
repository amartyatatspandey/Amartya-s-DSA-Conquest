#include<iostream>
using namespace std;

int lcmbrute(int a, int b);
int max(int a, int b);
int lcmeuclid(int a, int b);
int gcd(int a, int b);

int main(){
int a, b;
    cout<<"Enter numbers";
    cin>>a>>b;
    cout<<"Lcm of these numbers is:"<<lcmbrute(a,b)<<endl;
}



/*BRUTE FORCE LCM*/
int lcmbrute(int a, int b){
int x=max(a,b);

while((x%a!=0)||(x%b!=0)){

x=x+1;

}
    
return x;
}
int lcmeuclid(int a, int b){

int lcm= a*b/gcd(a,b);
return lcm;
}




int max(int a, int b){
int max;
if(a==b){
    max=a;
}
if(a>b){
max=a;
} else{ max=b;}

return max;
}


int gcd(int a, int b){
    if(b==0){

        return a;
    }
    return gcd(b,a%b);
} 

