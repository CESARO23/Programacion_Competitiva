#include<bits/stdc++.h>
using namespace std;
vector<double> B;
void pre_calculo(){
	double ans, angle = 180.0;
	for(int n=3; n<=360; n++){
		ans = (angle * (n-2))/n;
		B.push_back(ans);
	}
}
int main(){
	int t, a;
	pre_calculo();
	cin>>t;
	vector<double>:: iterator it;
	while(t--){
		cin>> a;
		it = find(B.begin(), B.end(), a);
		if(it!=B.end()) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}