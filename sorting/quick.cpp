#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){
    for(int n : v)  
        cout<<n<<' ';
    cout<<endl;
}

int partition(vector<int>& arr, int l, int h){
    int pivot = arr[h];
    int i = l;
    for(int j = l; j<h; j++){
        if(arr[j] < pivot){
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[i], arr[h]);
    return i;
}

void quickSort(vector<int>& arr, int l, int h){
    if(l<h){
        int q = partition(arr, l, h);
        quickSort(arr, l, q-1);
        quickSort(arr, q+1, h);
    }
}

int main(){
    vector<int> arr{4,3,2,5,1,9, 11, 7,-1};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    print(arr);
}


