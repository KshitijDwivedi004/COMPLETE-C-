// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int fact(int a){
    if(a<=1){
        return 1;}
        return a*fact(a-1);
    }

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{int x;
	cin>>x;
	  cout<<fact(x);
	
	return 0;
}




