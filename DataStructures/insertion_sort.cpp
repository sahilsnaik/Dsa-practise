#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> & arr,int n) {
for(int i = 1;i<=n- 1 ; i ++) {
    int j = i;
    while (j > 0 && arr[j-1] > arr[j]) {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;

        j--;
    }
}
}
int main(){
    vector<int> arr;

    arr.push_back(50);
    arr.push_back(23);
    arr.push_back(41);
    arr.push_back(72);
    arr.push_back(19);
    arr.push_back(2);
    
    insertion_sort(arr,arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<",";
    }
    

    return 0;
} 
