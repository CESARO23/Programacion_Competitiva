#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long a, b, c, sum, mayor;
	while(cin>>a >>b >> c){
		if(a+b+c == 0) break;
		a*=a, b*=b, c*=c;
		mayor = max(a, max(b, c));
		sum = a+b+c;
		if(sum-mayor == mayor)
			cout<<"right\n";
		else
			cout<<"wrong\n";
	}
	return 0;
}