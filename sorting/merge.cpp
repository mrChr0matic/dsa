#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){
    for(int n : v)  
        cout<<n<<' ';
    cout<<endl;
}

void merge(vector<int>& arr, int st, int mid, int en){
    int n1 = mid-st+1;
    int n2 = en-mid;
    vector<int> L(arr.begin() + st, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + en + 1);
    int i = 0, j = 0;
    int k = st;
    while(i<n1 and j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];
}

void merge_sort(vector<int>& arr, int st, int en){
    if(st>=en)
        return;
    int mid = (st+en)/2;
    merge_sort(arr, st, mid);
    merge_sort(arr, mid+1, en);
    merge(arr, st, mid, en);
}

int main(){
    vector<int> arr{4,3,2,5,1};
    int n = arr.size();
    merge_sort(arr, 0, n-1);
    print(arr);
}


