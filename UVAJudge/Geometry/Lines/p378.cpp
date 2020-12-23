#include<bits/stdc++.h>
#define ZERO 1e-8
#define INF 1e100

#define equal(a,b) (fabs((a)-(b))<ZERO)

using namespace std;

struct point
{
	double x,y;
};

void IntersectingLines(point L1[], point L2[]){
	point r;
	double ma, mb, ans1, ans2;
	if(equal(L1[0].x, L1[1].x)) ma = INF;
	else ma = (L1[1].y - L1[0].y)/(L1[1].x - L1[0].x);

	if(equal(L2[0].x, L2[1].x)) mb = INF;
	else mb = (L2[1].y - L2[0].y)/(L2[1].x - L2[0].x);

	if(equal(ma, mb)){
		ans1 = L1[0].y -ma*L1[0].x;
		ans2 = L2[0].y -mb*L2[0].x;
		if(equal(ans1, ans2))	printf("LINE\n");
		else	printf("NONE\n");
		return ;
	}

	r.x = (ma*L1[0].x - L1[0].y - mb*L2[0].x + L2[0].y )/(ma - mb);

	if(equal(L1[0].x, L1[1].x))	r.x = L1[0].x;
	if(equal(L2[0].x, L2[1].x))	r.x = L2[0].x;

	r.y = ma*(r.x - L1[0].x) + L1[0].y;
	if(equal(L1[0].x, L1[1].x)) r.y = mb*(r.x - L2[0].x) + L2[0].y;
	printf("POINT %.2lf %.2lf\n", r.x, r.y);
	return ; 
}

int main()
{
	point L1[2], L2[2];
	int t;
	scanf("%d", &t);
	printf("INTERSECTING LINES OUTPUT\n");
	while(t--){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", 
			&L1[0].x, &L1[0].y, &L1[1].x, &L1[1].y,
			&L2[0].x, &L2[0].y, &L2[1].x, &L2[1].y);
		IntersectingLines(L1, L2);
	}
	printf("END OF OUTPUT\n");
	return 0;
}