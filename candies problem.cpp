#include<bits/stdc++.h>
using namespace std;

int main(){
	multiset<long long> m;
	int k,n;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int candies;
		cin>>candies;
		m.insert(candies);	
	}
	int sum=0;
	for(int j=n;j>n-k;j--){
		auto it =(--m.end());
		int last_it=*it;
		sum=sum+last_it;
		m.erase(it);
		m.insert(last_it/2);
	}
	cout<<sum<<endl;
	// return sum;
};