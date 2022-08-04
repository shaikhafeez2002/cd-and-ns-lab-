#include <bits/stdc++.h>

using namespace std;


main() {

	string str;
	int n;
	string str1,str2 = "";
	cout<<"Enter the text to be encrypted: ";
	getline(cin,str);
	int i=0;
	while(i<str.length()){
	
		str1 += str[i];
		if(i < str.length()) {
			str2 += str[i+1];
			i = i+2;
		}
	}
	
	string ans=str1+str2;
	remove(ans.begin(),ans.end(),' ');
	cout<<"Encrypted Cipher text: "<<ans<<endl;


    return 0;
}
