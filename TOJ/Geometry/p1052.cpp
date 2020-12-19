#include<bits/stdc++.h>
#define CERO 1e-8
#define INF 1e100
#define MAX 210
using namespace std;
typedef long long ll;

struct point{
	ll x,y;
};
point p[MAX];

int pointLine(int n){
	ll r, t;
	double m[MAX];
	r = 0;
	for(int i=1; i<n; i++){
		if(r+2 >n-i) break;
		for(int j=i+1; j<=n; j++){
			if(p[i].x != p[j].x){
				m[j] = ((double) (p[i].y - p[j].y)/(p[i].x - p[j].x));
			}else{
				m[j] = INF;
			}
		}
		for(int j=i+1; j<n; j++){
			t = 0;
			for(int k=j+1; k<=n; k++){
				if(fabs(m[j]-m[k])<CERO){
					t++;
				}
			}
			if(t>r) r=t;
		}
		
	}
	return r + 2;
}

int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>> p[i].x >>p[i].y;

	cout<<pointLine(n)<<'\n';

	return 0;
}