#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10]={1,4,3,2,5,0,9,6,7,8};
	int min =INT_MAX;
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
	for(int k=0;k<10;k++){
		cout<<arr[k]<<endl;
	}
}