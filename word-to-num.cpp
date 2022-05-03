#include <bits/stdc++.h>


using namespace std;



/*
 * Complete the 'getPhoneNumber' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string getPhoneNumber(string s) {
    vector<string> temp={"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> words;
    vector<int>ans;
    string word="";
    int i;
    for(i =0;i<s.size();i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else{
            words.push_back(word);
            word="";
        }
    }
    for(int j=i;j<s.size();j++){
    	word+=s[j];
    }
    words.push_back(word);
    for(int j=0;j<words.size();j++){
        auto pos= find(temp.begin(),temp.end(),words[j]);
        if(pos!=temp.end()){
            ans.push_back(pos-temp.begin());
        }
        else if(words[j]=="double"){
            pos=find(temp.begin(),temp.end(),words[j+1]);
            ans.push_back(pos-temp.begin());
        }
        else if(words[j]=="tripple"){
            pos=find(temp.begin(),temp.end(),words[j+1]);
            ans.push_back(pos-temp.begin());
            ans.push_back(pos-temp.begin());
        }
        
    }
    string ans_final="";
    for(int k=0;k<ans.size();k++){
        ans_final+=to_string(ans[k]);
    }
    cout<<ans_final<<endl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = getPhoneNumber(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
