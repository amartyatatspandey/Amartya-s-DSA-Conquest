#include<iostream>
#include<algorithm>
using namespace std;

struct process{

    int at,wt,tat,ct,bt;


};


int main(){

int n;


cout<<"enter number of proccesses"<<endl;
cin>>n;
vector<process> p(n);
for(int i=0;i<n;i++){

cout<<"Enter burst time &arrival time"<<endl;

cin>>p[i].bt>>p[i].at;

}

//bubble sorting
for(int i=0;i<n;i++){
   
    for(int j=i+1;j<n;j++){


        if (p[i].bt>p[j].bt){

            swap(p[i],p[j]);
        }
    }
    
    p[0].wt=0;

    for(int i=0;i<n;i++){
    
     p[i+1].wt=p[i].wt +p[i].bt;
     

    }

//similarly now wt calulated and bt know tat=bt +wt
// ct is when completion exactly happened the time stamp through arrival time
// 

}

//once sorted we are through
// remember always that bt will be given hence to calculate tat you need wt also
























}

