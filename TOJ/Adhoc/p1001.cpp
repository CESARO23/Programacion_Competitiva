#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	double x, root;
	vector<double> v;
	while(cin>>x){
		v.push_back(x);
	}
	int lmt = v.size()-1;
	for(; lmt>=0; lmt--){
		root = sqrt(v[lmt]);
		printf("%.4lf\n", root);
	}
	return 0;
}