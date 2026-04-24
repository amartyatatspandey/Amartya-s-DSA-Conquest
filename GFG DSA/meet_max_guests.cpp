#include<iostream>
#include<algorithm>
using namespace std;


/*
Time to understand the problem ourselves
 we have 2 arrays one sgnifies who ever has come the other whoever 
 
 2 arrays and corresponding indexes exit time

 I need to check when max people people are present, Now I need to 
 a count which keeps count and whenever it dips  but what if it dips and then rises
 then I need another array where I keep the number of people set


*/

int max_guest_finder(int arr[], int exit [], int n){

sort(arr,arr+n);
sort(exit,exit+n);

//need to pointers, each in arrival and exit to traverse through and through
// i is the guard of the arrival place
//j is the guard of the place which leaves
int i=0,j=0;

int guest_in=0; // gotta keep track of the guests that come in

int time= arr[0];// the whole coutning begins when the first person comes in
 int max_guests= 0; //the whole point of the question

//n is the number of people so

while(i<n && j<n){

if(arr[i]<=exit[j]){

   guest_in++; 

   time=arr[i];

   i++;
/*
Both i and j are simultaneously moving ahead and in, 
if an arrival occurs we increase guest count
*/
if(guest_in>max_guests){

    max_guests=guest_in;
}   

}

/*else if(arr[i]==exit[j]){

  //nothing happens a person left , a person came guest in remains the same  
} this code here is wron g as the code is sequential we get stuck here 
 and boom we done for
*/
else{
// a person left before an arrival

guest_in--;

j++;

}


}

return max_guests;
}



//driver code

int main(){

int arr[]={1, 2, 9, 5, 5};

int exit[]={4, 5, 12, 9, 12};

int n=sizeof(arr)/sizeof(arr[0]);

int result=max_guest_finder(arr,exit,n);


cout<<" The Max number of guests present at any given time are as follows "<< result<<endl;


return 0;
}




