#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    string s,e,d;
    int key,choice;
    cout<<"Enter the key\n";
    cin>>key;
    cout<<"Enter the message\n";
    cin>>s;
    cout<<"1.Encryption \n 2.Decryption \n\n";
    cin>>choice;
    if(choice==1)
    {
	 for(i=0;i<s.size();i++){
        e+=(s[i]-'A'+key)%26+'A';

    }
      cout<<"\n\nEncrypted message is "<<e<<'\n';
  }
  else if(choice==2)
  {
  	for(i=0;i<s.size();i++)
  	{
  		d+=(s[i]-'A'- key)%26+'A';
  	}
	     cout<<"\n\nDecrypted message is "<<d<<'\n';
  }
    
    return 0;
}
