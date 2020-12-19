#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[301], b[301];
	int n, t;
	cin>>t;
	while(t--){
		cin>> n;
		for (int i = 1; i <= n; i++)
		{
			cin>>a[i];
		}
		int L = 1, R = n, idx=1;
		while(idx <= n){
			if((idx &1)){
				b[idx] = a[L];
				L++;
			}else{
				b[idx] = a[R];
				R--;
			}
			idx++;
		}
		cout<<b[1];
		for (int i = 2; i <= n; i++)
		{
			cout<<" "<<b[i];
		}
		cout<<'\n';
	}

	return 0;
}