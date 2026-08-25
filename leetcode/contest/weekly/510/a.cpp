// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hrs=stoi(startTime.substr(0,2)),hre=stoi(endTime.substr(0,2));
        int mns=stoi(startTime.substr(3,2)),mne=stoi(endTime.substr(3,2));
        int scs=stoi(startTime.substr(6,2)),sce=stoi(endTime.substr(6,2));
        int ans=0;
        if(sce<scs) {
            sce+=60;
            ans+=(sce-scs);
            mne--;
            if(mne==-1) {
                mne+=60;
                hre--;
            }
        }
        else ans+=(sce-scs);
        if(mne<mns) {
            mne+=60;
            hre--;
            ans+=(mne-mns)*60;
        }
        else ans+=(mne-mns)*60;
        ans+=(hre-hrs)*3600;

        return ans;
    }
};
