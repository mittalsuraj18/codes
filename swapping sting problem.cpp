//# codes
//solved codes of problems
#include<bits/stdc++.h>
using namespace std;
int find_unique(string s1){
	map<char,int> m1;
	for(int i=0;i<s1.length();i++){
		if(m1.count(s1[i])==0){
			m1[s1[i]]=1;
		}
	}
	return m1.size();
}
int findmin(string s1,string s2,int pos){
	if(pos>=s1.length())
		return max(find_unique(s1),find_unique(s2));
	string temp1,temp2;
	temp1=s1;
	temp2=s2;
	char temp;
	temp=temp1[pos];
	temp1[pos]=temp2[pos];
	temp2[pos]=temp;
	int n1=min(max(find_unique(temp1),find_unique(temp2)),max(find_unique(s1),find_unique(s2)));
	return min(n1,min(findmin(s1,s2,pos+1),findmin(temp1,temp2,pos+1)));
}
int calci(string &s1,string &s2){
	return findmin(s1,s2,0);
}
int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	cout<<endl;
	//cout<<find_unique(s2);
	cout<<calci(s1,s2);
	return 0;
}
