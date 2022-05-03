#include<bits/stdc++.h>
using namespace std;
int partition(int Arr[],int l,int h){
	int pivot=Arr[l];
	int i=l;
	int j=h;
	while(j>i){
		do{
			i++;
		}while(pivot>=Arr[i]);
		do{
			j--;
		}while(pivot<Arr[j]);
		swap(Arr[i],Arr[j]);
	}
	swap(pivot,Arr[j]);
	return j;
	
}
void quickSort(int Arr[],int l,int h){
	if(l>h){
		return;
	}
		
		int j=partition(Arr,l,h);
		quickSort(Arr,l,j);
		quickSort(Arr,j+1,h);

	
}


int main(){
	int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
 
    quickSort(arr, 0, n-1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    cout<<m<<endl;
 
    return 0;

}