#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){
    for(int n : v)  
        cout<<n<<' ';
    cout<<endl;
}

int main(){
    vector<int> v{4,3,2,5,1};
    int n = v.size();
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<i<<' '<<j<<endl;
            if (v[j] > v[j + 1]) 
                swap(v[j], v[j + 1]);
            print(v);
        }
    }
    cout<<endl;
    print(v);
}


