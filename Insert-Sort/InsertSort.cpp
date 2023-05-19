#include <iostream>
#include <algorithm>
using namespace std;

void iSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
	
    cout << "Enter array size";
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
	iSort(arr,n);
	
	for(auto x: arr)
	    cout<<x<<" ";
}