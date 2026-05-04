#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cout << "Enter number of processes: "; cin >> n;
    cout << "Enter number of resource types: "; cin >> m;

    int alloc[n][m], max[n][m], need[n][m], avail[m], work[m];
    int finish[n], safe_sequence[n];
    
    // 1. Initialize all processes as NOT finished (0)
    for (int i = 0; i < n; i++) {
        finish[i] = 0;
    }

    cout << "Enter Allocation Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> alloc[i][j];
    }

    cout << "Enter Max Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> max[i][j];
            // 2. Calculate Need Matrix: Need = Max - Allocation
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    cout << "Enter Available Resources:" << endl;
    for (int j = 0; j < m; j++) {
        cin >> avail[j];

        work[j]=avail[j];

    }

int complete=0;

while(complete<n) {
bool found_eligible_proccess=false;

for(int i=0;i<n;i++){

//if proccess is not finished then it can be satisfied technically



if(finish[i]==0){
bool satisfiable= true;

for(int j=0;j<m;j++){
if (need[i][j]>= work[i]){

    bool satisfiable= false;
    break;
}
 if(satisfiable){
   for(int j=0;j<m;j++){
    work[j]=work[j]+alloc[i][j];

 }
 complete++;
 found_eligible_proccess=true;




}


}


}



}
    







}



        