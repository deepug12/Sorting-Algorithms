// Selection Sort 0(n^2);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
    	cin>>arr[i];
    }

    for (int i = 0; i < n-1; ++i){

    	for(int j = i+1; j < n; ++j){
    		if(arr[i] > arr[j]){
    			// int temp = arr[j];
    			// arr[j] = arr[i];
    			// arr[i] = temp;

    			//  or 
    			swap(arr[j], arr[i]);
    		}
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<'\n';


}
