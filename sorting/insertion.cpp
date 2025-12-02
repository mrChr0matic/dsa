#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){
    for(int n : v)  
        cout<<n<<' ';
    cout<<endl;
}

int main(){
    vector<int> arr{4,3,2,5,1};
    int n = arr.size();
    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
            print(arr);
        }
        arr[j+1] = key;
    }
    cout<<endl;
    print(arr);
}


