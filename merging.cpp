#include<bits/stdc++.h>
using namespace std;

// merging using merging algorithm;

int merging_Algo(vector<int> v1, vector<int> v2){
	vector<int> ans;
	int min=INT_MIN;
	for(int i=0;i<v1.size();i++){
		ans.push_back(v1[i]);
	}
	for(int j=0;j<v2.size();j++){
		ans.push_back(v2[j]);
	}
	for(int k=0;k<ans.size();k++){
		for(int l=k;l<ans.size();l++){
			if(ans[l]<ans[k]){
				min=ans[k];
				ans[k]=ans[l];
				ans[l]=min;
				// swap(ans[l],ans[k]);// also working;
			}
		}
	}
	for(int m=0;m<ans.size();m++){
		cout<<ans[m]<<" ";
	}
};

//merging using sort function

int merging(vector<int> v1, vector<int> v2){
	vector<int> ans;
	int min=INT_MIN;
	for(int i=0;i<v1.size();i++){
		ans.push_back(v1[i]);
	}
	for(int j=0;j<v2.size();j++){
		ans.push_back(v2[j]);
	}
	sort(ans.begin(),ans.end());
	for(int m=0;m<ans.size();m++){
		cout<<ans[m]<<" ";
	}



}


int main(){
	vector<int> v1={1,5,6,7};
	vector<int> v2={4,8,9,11};
	merging_Algo(v1,v2);
	cout<<"\n";
	merging(v1,v2);
	return 0;

}