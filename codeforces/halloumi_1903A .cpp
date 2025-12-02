#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& boxes, int n, int k){
    if(n==1)
        cout<<"YES";
    else if(k>1)
        cout<<"YES";
    else if(is_sorted(boxes.begin(), boxes.end()))
        cout<<"YES";
    else
        cout<<"NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> boxes(n, 0);
        for(int i = 0; i<n; i++){
            cin>>boxes[i];
        }
        solve(boxes, n, k);
        cout<<endl;
    }
}
