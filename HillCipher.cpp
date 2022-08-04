#include<bits/stdc++.h>
using namespace std;

void getkeymatrix(string key,int keymatrix[][3])
{
	int k=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			keymatrix[i][j] = (key[k])%65;
			k++;
		}
	}
}

void encrypt(int ciphermatrix[][1],int keymatrix[][3],int messagevector[][1])
{
	int x,i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			ciphermatrix[i][j]=0;
			for(x=0;x<3;x++)
			{
				ciphermatrix[i][j]+=keymatrix[i][x]*messagevector[x][j];
			}
			ciphermatrix[i][j]=ciphermatrix[i][j]%26;
		}
	}
}

void HillCipher(string message,string key)
{
	int keymatrix[3][3];
	getkeymatrix(key,keymatrix);
	int messagevector[3][1];
	for(int i=0;i<3;i++)
	{
		messagevector[i][0]=(message[i])%65;
	}
	int ciphermatrix[3][1];
	
	encrypt(ciphermatrix,keymatrix,messagevector);
	string ciphertext;
	for(int i=0;i<3;i++)
	{
		ciphertext+=ciphermatrix[i][0]+65;
	}
	cout<<"ciphertext"<<ciphertext;
}


int main()
{
	string message;
	cin>>message;
	string key;
	cin>>key;
	HillCipher(message,key);
	return 0;
}
