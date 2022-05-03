#include<bits/stdc++.h>
using namespace std;
class solution {
public:
	int prime(int n){
		if(n<=1){
			return false;
		}
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				return false;
				break;
			}
		}
		return true;
	}
};
// class node{
// public: 
// 	int data;
// 	node* next;
// };

int main(){
	solution s1;
	int n;
	cin>>n;
	vector<int> ans;
	int count=0;
	for(int i=1;i<=n;i++){
		ans.push_back(i);
	}
	while(ans.size()>1){
		for(int j=0;j<ans.size();j++){
		if(s1.prime(ans[j])){
			ans.erase(ans.begin()+j);
		}
	}
		int m=ans.size();
		
		ans.erase(ans.begin(),ans.end());
		for(int k=1;k<=m;k++){
			ans.push_back(k);
		}
			count++;
	}
	cout<<count;
























	// solution s1;
	// // cout<<s1.prime(3);
	// int n;
	// cin>>n;
	// vector<int> nums;
	// for(int i=1;i<=n;i++){
	// 	nums.push_back(i);
	// }
	// for(int j=0;j<nums.size();j++){
	// 	if(s1.prime(nums[j])==1){
	// 		nums.erase(nums.begin()+j);
	// 	}
	// }
	// for(int k=0;k<nums.size();k++){
	// 	cout<<nums[k]<<endl;
	// }
	
	
}