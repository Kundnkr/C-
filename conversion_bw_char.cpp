#include<bits/stdc++.h>
using namespace std;
char tolow(char c){
	if(c>='a' && c<'z'){
		return c;
	}
	else{
		c=c-'A'+'a';
		return c;
	}
}
char toup(char c){
	if(c>='A' && c<='Z'){
		return c;
	}
	else{
		c=c-'a'+'A';
		return c;
	}
}


int main(){
	string temp;
	cin>>temp;
	int small=0;
	int large =0;
	for(int i=0;i<temp.size();i++){
		if(temp[i]>='a' && temp[i]<'z'){
			small++;
		}
		else{
			large++;
		}
	}
	string ans="";
	for(int i=0;i<temp.size();i++){
		if(small>large){
			ans+=tolow(temp[i]);
		}
		else if(large>small){
			ans+=toup(temp[i]);
		}
		else if(large==small){
			ans+=tolow(temp[i]);
		}
	}
	
	cout<<ans;
}