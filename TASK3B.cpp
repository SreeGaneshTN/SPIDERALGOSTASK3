#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define ll long long

#Logic:Using a Min-heap Priority Queue.Store the brick strength in a min heap priority Queue
#Loop till the queue size is greater than n,take the top element,pop it,again take the top element,pop it and push their sum
#answer will be top of the Queue


int main()
{
	long n,m;
	cin>>m>>n;
	priority_queue <ll,vector<ll>,greater<ll> >br;
	for(int i=0;i<m;i++)
	{
		ll temp;
		cin>>temp;
		br.push(temp);
	}
	
	while(br.size()>n)
	{	
		ll a=br.top();
		br.pop();
		ll b=br.top();
		br.pop();
		br.push(a+b);
	}
	cout<<br.top();
}
