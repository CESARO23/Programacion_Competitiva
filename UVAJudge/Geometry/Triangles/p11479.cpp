#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int t;
	ll a, b, c;
	cin>>t;
	int i=1;
	while(t--){
		cin>>a >>b >>c;
		ll mayor = max(a, max(b,c));
		ll sum = a+b+c;
		bool est = a>0 && b>0 && c>0;
		string s;
		if(sum-mayor > mayor && est){
			if(a==b && b==c){
				s = "Equilateral";
			}else if(a==b || a == c || b == c){
				s = "Isosceles";
			}else{
				s = "Scalene";
			}
		}else{
			s = "Invalid";
		}
		cout<<"Case "<<i<<": "<<s<<'\n';
		i++;
	}
	return 0;
}