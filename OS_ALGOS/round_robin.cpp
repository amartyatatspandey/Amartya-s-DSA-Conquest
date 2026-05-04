#include<iostream>
#include<algorithm>>

using namespace std;

struct process{

int at,wt,tat,ct,rt,bt;

};


int main(){
int n;
cout<<"Enter Number of processes"<<endl;
cin>>n;
int q;
int time=0, min_remaining_time= INT_MAX;
int complete=0;
vector<process> p(n);

cout<<"enter time quantum"<<endl;
cin>> q;

for(int i=0;i<n;i++){
    cout<<"Enter arrival time and burst time"<<endl;
cin>> p[i].at>>p[i].bt;
}

while(complete<n){

for(int i=0;i<n;i++){

if(p[i].rt>q){


    time= time+q;
    p[i].rt= p[i].rt-q; //proccess didnt finish time quantum is up
}

else{ // if proccess finishes on time

    time=time+ p[i].rt;
    p[i].rt=0;
    complete++;
}


}




}



















}


