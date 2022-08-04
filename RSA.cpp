#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int ans;
	for(int i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0)
		{
			ans=i;
		}
	}
	return ans;
}

int main()
{
	double p=13;
	double q=11;
	double n=p*q;
	double phi=(p-1)*(q-1);
	double e=7;
	while(e<phi)
	{
		int track=gcd(e,phi);
		if(track==1)
		    break;
		else
		    e++;	
	}
	double d1=1/e;
	double d=fmod(d1,phi);
	double message=9;
	double c=pow(message,e);
	double m=pow(c,d);
	c=fmod(c,n);
	m=fmod(m,n);
	cout<<c<<endl;
	cout<<m;
	return 0;
	
}

