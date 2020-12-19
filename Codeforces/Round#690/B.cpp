#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		if(s == "2020"){
			cout<<"YES\n";
			continue;
		}
		bool van = false;
		if( (s.substr(0,2) + s.substr(n-2,2)) == "2020"){
			van = true;
		}else if(s.substr(0,2) == "20"){
			if(s.substr(0,4)  == "2020" || (s.substr(0,3)+s[n-1]) == "2020"){
				van = true;
			}
		}else if(s.substr(n-2,2) == "20"){
			if((s.substr(n-4,4) == "2020") || (s[0] + s.substr(n-3,3)) == "2020"){
				van = true;
			}
		}
		if(van){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
} // 201920