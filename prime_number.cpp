#include<bits/stdc++.h>
using namespace std;
class print{
public:
	// int fun(int n ){
	// 	int num=2;
	// 	if(n>num){
	// 		fun(num)=fun(num-1)+fun(num-2);
	// 		fun(num+1);
	// 	}
	// 	cout<<fun(num)<<endl;
	// }
	int fact(int n){
		if(n==1){
			return 1;
		}
		else{
			return n*fact(n-1);
		}
	}
	int comb(int n,int r){
		int t1,t2,t3;
		t1=fact(n);
		t2=fact(r);
		t3=fact(n-r);
		return t1/(t2*t3);
	}

};
  
int main (){
	int n,r;
	cin>>n>>r;
	print p1;
	cout<<p1.comb(n,r)<<endl;

};