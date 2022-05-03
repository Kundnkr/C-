#include<bits/stdc++.h>
using namespace std;
// class replce{
// public:
// 	string fun(string que){
// 		int pos=que.find("pi");
// 		string str="3.14";
// 		if(pos!=-1){
// 			que.erase(que.begin()+pos);
// 			que.erase(que.begin()+pos);
// 			que.insert(pos,str);
// 			fun(que);

// 		}
// 		return que;
// 	}
// };


int main (){
	string que="abaccddddddddddddhfvdcvhdvchgdvctgdcvhvcghfdcdchgvgdcdvddcgdhcvevdtcdvctdycvdhcvdcftdy";
	int arr[123]={0};
	for(int i=0;i<que.size();i++){
		arr[que[i]]++;
	}
	char dupli=0;
	for(int j=1;j<123;j++){
		if(arr[j]>=2){
			dupli=j;
			cout<<dupli<<" are duplicate"<<endl;
		}
	}
	
	


};
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





