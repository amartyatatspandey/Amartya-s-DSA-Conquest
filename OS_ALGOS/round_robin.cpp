#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct process {
    int at, wt, tat, ct, rt, bt, id;
};

int main() {
    int n;
    cout << "Enter Number of processes: " << endl;
    cin >> n;

    int q;
    int time = 0;
    int complete = 0;
    vector<process> p(n);

    cout << "enter time quantum" << endl;
    cin >> q;

    for (int i = 0; i < n; i = i + 1) {
        cout << "Enter arrival time, burst time, and Process ID: " << endl;
        cin >> p[i].at >> p[i].bt >> p[i].id;
        
        p[i].rt = p[i].bt;
    }

    while (complete < n) {
        bool idle = true; 
        for (int i = 0; i < n; i = i + 1) {
            
            if (p[i].rt > 0 && p[i].at <= time) {
                idle = false;
                if (p[i].rt > q) {
                    time = time + q;
                    p[i].rt = p[i].rt - q; 
                } else {
                    
                    time = time + p[i].rt;
                    p[i].rt = 0;
                    complete = complete + 1;

                    p[i].ct = time; // Completion Time is current time
                    p[i].tat = p[i].ct - p[i].at; // TAT = CT - AT
                    p[i].wt = p[i].tat - p[i].bt; // WT = TAT - BT
                }
            }
        }
        if (idle == true) {
            time = time + 1; // If nobody has arrived, advance time
        }
    }

    float net_tat = 0, net_wt = 0; 

    for (int i = 0; i < n; i = i + 1) {
        
        net_tat = net_tat + p[i].tat;
        net_wt = net_wt + p[i].wt;
    }

    float avg_wt = net_wt / n;
    float avg_tat = net_tat / n;

    cout << "\nPID\tAT\tBT\tWT\tTAT" << endl;
    for (int i = 0; i < n; i = i + 1) {
        cout << p[i].id << "\t" << p[i].at << "\t" << p[i].bt << "\t" << p[i].wt << "\t" << p[i].tat << endl;
    }

    cout << "\nAverage WT: " << avg_wt << "\nAverage TAT: " << avg_tat << endl;

    return 0;
}