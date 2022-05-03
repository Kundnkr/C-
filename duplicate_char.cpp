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
	string que="pip";
	string copy="3.14";
	for(int i=0;i<que.size()-1;i++){
		if(que[i]=='p'&& que[i+1]=='i'){
			que.replace(i,2,copy);
			// que.erase(que.begin()+i);
			// que.insert(que.begin()+i,'%');
			// que.insert(que.begin()+i+1,'2');
			// que.insert(que.begin()+i+2,'0');


		}
	}
	cout<<que<<endl;

	
	
	


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





