#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={1,2,3,4,5};
	int n=arr.size();
	int ans;
	for(int i=0,j=n-1;i<n/2;i++,j--){
		ans=arr[j];
		arr[j]=arr[i];
		arr[i]=ans;
		// swap(arr[i],arr[j]); we can also use swap function to reverse the array;
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<' ';
	}
}