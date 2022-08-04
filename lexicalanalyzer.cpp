#include<bits/stdc++.h>
using namespace std;

//to check delimiter or not returns true or false
bool isDelimiter(char ch)
{
	if(ch== ' ' || ch=='+' || ch=='-' || ch=='*'
	|| ch=='/' || ch==',' || ch==';' || ch=='='
	|| ch=='<' || ch=='>' || ch=='(' || ch==')'
	|| ch=='{' || ch=='}'|| ch=='[' || ch==']')
	return (true);
	return (false);
}

//  returns true if character is an operator
bool isOperator(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/'|| ch=='%'
	   || ch=='<' || ch=='>' || ch=='=')
	   return (true);
	   return (false);
}

//returns true if the string is valid identifier
bool validIdentifier(char* str)
{
	if(str[0] =='0' || str[0]=='1' || str[0]=='2' || str[0]=='3'
	   || str[0]=='4' || str[0]=='5' || str[0]=='6' || str[0]=='7'
	    || str[0]=='8' || str[0]=='9' || isDelimiter(str[0])==true)
	    return (true);
	    return (false);
}

//returns true if the string is valid keyword
bool isKeyword(char* str)
{
	if(!strcmp(str,"if") || !strcmp(str,"else") || !strcmp(str,"while")
	|| !strcmp(str,"do") || !strcmp(str,"case") || !strcmp(str,"break")
	|| !strcmp(str,"continue") || !strcmp(str,"int") || !strcmp(str,"char")
	|| !strcmp(str,"double") || !strcmp(str,"float") || !strcmp(str,"return"
	|| !strcmp(str,"sizeof"))
	return (true);
	return (false);
}

bool isInteger(char* str)
{
	int i,len=strlen(str);
	bool hasDecimal=false;
	if(len == 0)
	return false;
	for(i= ;i<len;i++)
	{
		if(str[i] != '0' && str[i]!='2' && str[i]!='3'
		&& str[i]!='4' && str[i]!='5' && str[i]!='6'
		&& str[i]!='7' && str[i]!='8' && str[i]!='9'
		&& str[i]!='.' || (str[i]== '-' && i>0))
		return (false);
		
		if(str[i]=='.')
		hasDecimal=true;
	}
	return (hasDecimal);
}
//
int main()
{
	//maximum lengthor my string is 100
	string str;
	cout<<"enter the string ";
	cin>>str;
	return 0;
	 
}
