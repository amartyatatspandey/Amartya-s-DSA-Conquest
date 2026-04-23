#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

void print_selected_array(vector<int>s,vector<int>f,int n);
int main(){}

void print_selected_array(vector<int>s,vector<int>f,int n){

//assuming the array we have been provided is sorted by finish time

// we need 2 variables one to check whats going on 
/*i keeps hold of where we already are and j iterates trhough rest of the activities checking when they start for us and shi
*/

int i=0;
 cout<<" "<<i;
for(int j=1;j<n;j++){

if(s[j]>=f[i]){
    cout<<" "<<j;
    i=j;//here we now selected j so we make that the current activity and then move n
}



}







}


