#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr(202,0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int j=0;j<202;j++){
            if(arr[j]>=1){
                ans.push_back(j);
            }
        }
        for(int m=0;m<ans.size();m++){
        	cout<<ans[m]<<" ";
        }
    }
};


int main (){
		Solution s1;
		vector<int> nums={0,0,1,1,1,2,2,3,3,4};
		s1.removeDuplicates(nums);
	


}
	// string que="pipi";
	// string ans="";
	// string str="3.14";
	// int pos=que.find("pi");
	// que.erase(que.begin()+pos);
	// que.erase(que.begin()+pos);
	// que.insert(pos,str);
	
	// cout<<pos<<endl;
	// cout<<que<<endl;


// string que="xpix";
	// string str="3.14";
	// for(int i=0;i<3;i++){
	// 	if(que[i]=='p' && que[i+1]=='i'){
	// 		que.erase(que.begin()+i);
	// 		que.erase(que.begin()+(i));
	// 		// que.insert(que.begin()+i,str);
	// 	}
	// }
	// cout<<que<<endl;

 // int removeDuplicates(vector<int>& nums) {
 //        

 //        return count;



// int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		int num;
// 		cin>>num;
// 		arr[i]=num;
// 	}
// 	for(int j=0;j<n;j++){
// 		if(arr[j]>n-2){
// 			cout<<"input must be in range 0 to "<<n-2<<endl;
// 			return 0;
// 		}
// 	}
// 	int sum=(n-2)*(n-1)/2;
// 	int t_sum=0;
// 	for(int k=0;k<n;k++){
// 		t_sum+=arr[k];
// 	}
// 	int ans=t_sum-sum;
// 	cout<<ans<<endl;

