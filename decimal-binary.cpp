#include<bits/stdc++.h>
using namespace std;

int main(){
	long long number=10000000000;
	vector<int> ans;
	while(number!=0){
		ans.push_back(number%2);
		number=number/2;
	}
	for(int i=ans.size()-1;i>=0;i--){
		cout<<ans[i]<<' ';
	}
}
