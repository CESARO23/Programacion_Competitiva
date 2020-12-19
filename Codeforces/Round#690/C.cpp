#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> dp;
	vector<vector<int> > ss;
	int v[] = {9,8,7,6,5,4,3,2,1}; 
	int sum;
	int mask = (1<<10)-1;
	for(int m=mask; m>0; m--){
		sum = 0;
		vector<int>num;
		for(int i=0; i<9; i++){
			if(m & 1<<i){
				num.push_back(v[i]);
				sum += v[i];
			}	
		}
		ss.push_back(num);
		dp.push_back(sum);
	}

	int t, x;
	cin>>t;
	while(t--){
		cin>>x;
		vector<int>::iterator it;
		bool van=false;
		int menor = INT_MAX;
		for(int i=0; i<dp.size(); i++){
			if(dp[i] == x){
				int pos = i;
				van = true;
				int num =0;
				int a =1;
				for(int j=0 ; j<ss[pos].size(); j++){
					num +=  (ss[pos][j]*a);
					a*=10;
				}
				menor = min (menor, num);
			}
		}
		if(van){
			cout<<menor<<'\n';
		}
		else{
			cout<<-1<<'\n';
		}
	}

	return 0;
}
