#include<bits/stdc++.h>
using namespace std;


//Logic: got input integer as string,found Sum,again converted to string and count++ 
//run a loop untill length of string is 1 and print the count

string ToString(int sum) 
{ 
    string str = ""; 
    while (sum) { 
        str = str + (char)((sum % 10) + '0'); 
        sum = sum / 10; 
    } 
    return str; 
} 


int main()
{
	string s;
	cin>>s;
	long count=0,sum;
	
	while(s.length()>1)
	{	sum=0;
		for(int i=0;i<s.length();i++){
			sum+=s[i]-48;
		}
		s=ToString(sum);
		count++;
	}
	cout<<count;
return 0;
}
