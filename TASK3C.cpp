#include<bits/stdc++.h>
#include<vector>

using namespace std;

//Logic:Basically we need to find number of prime numbers less than n
//Answer is summation of 1 to numberofprimes(count)
int main()
{
	long  n;
	long long count=0;
	cin>>n;
	vector <bool> prime(n+1,true);
	for (int p=2; p*p<=n; p++) 
    { 

        if (prime[p] == true) 
        {	
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        }
    }
	for(int i=2;i<n;i++) 
	{
		if(prime[i]==true)
		count++;
	}
    cout<<(count*(count+1)/2);
	
}
