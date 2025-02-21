//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> JobSequencing(vector<int> &id, vector<int> &d, vector<int> &p) {
        int n = id.size();
        
        // Store jobs as {profit, deadline} and sort by profit (descending)
        vector<pair<int, int>> vt(n);
        for (int i = 0; i < n; i++) {
            vt[i] = {p[i], d[i]};
        }
        sort(vt.rbegin(), vt.rend()); // Sorting in descending order of profit

        // Max deadline determines the size of the scheduling array
        int max_deadline = *max_element(d.begin(), d.end());
        vector<int> slot(max_deadline + 1, -1);

        int countJobs = 0, totalProfit = 0;

        for (int i = 0; i < n; i++) {
            int profit = vt[i].first;
            int deadline = vt[i].second;

            // Find a free slot for this job (from deadline to 1)
            for (int j = deadline; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = i; // Assign job
                    countJobs++;
                    totalProfit += profit;
                    break;
                }
            }
        }

        return {countJobs, totalProfit};
    }
};

//{ Driver Code Starts.

// } Driver Code Ends



//{ Driver Code Starts.
//            Driver program to test methods
int main() {
    int t;
    // testcases
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> jobIDs, deadlines, profits;
        string temp;
        getline(cin, temp);
        istringstream ss1(temp);
        int x;
        while (ss1 >> x)
            jobIDs.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss3(temp);
        while (ss3 >> x)
            profits.push_back(x);

        int n = jobIDs.size();

        Solution obj;
        vector<int> ans = obj.JobSequencing(jobIDs, deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends