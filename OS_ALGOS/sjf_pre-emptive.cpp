#include<iostream>
#include<algorithm>
using namespace std;

struct process{

    int id,at,bt,rt,wt,ct,tat;



};


int main (){

int n;
cout<<"enter number of proccesses"<<endl;
cin>>n;

vector<process> p(n);

for(int i=0;i<n;i++){

cout<<"Enter id, arrival time,burst time"<<endl;

cin>>p[i].id>>p[i].at>>p[i].bt;

p[i].rt=p[i].bt;

}// All entries have been taken

//all initialization has occurred, we need to keep track of total completed proccess and of the current time

int completed=0, current_time=0;

while(completed!=n){

//rn there is a best proccess and once we select that best proccess we run the best proccess

int best_process=-1;//process id can be 0 also so we initalise it like
int min_remaining = INT_MAX; //the minimum remaining time is max and is relaxed whenever we find a lower remiaing time

//1. Now to find the shortest remaining time first and then run it
// iterate through all processes to check

for(int i=0;i<n;i++){
//Conditions for updation:
// if the arrival time of the iteration we are on is less than the current time or equal, its remaining time must be more than 0,
//the remaining time should be less than the min_remaiing time

if(p[i].at<current_time && p[i].rt>0 && p[i].rt<min_remaining){

    best_process=i;
    min_remaining=p[i].rt;
}

//now after updation if no best proccess is found the time must run forward in that specfic case also

if(best_process=-1){

    current_time++;
}
// when all is calculated and done then the best proccess will have zero remaining time

if(p[best_process].rt==0){


    
}


}




}











}