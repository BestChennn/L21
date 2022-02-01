#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};
 
double overlap(Rect *a,Rect *b){
	double L1,L2,sum;

	L1 = min((a->x)+(a->w),(b->x)+(b->w)) - max(a->x,b->x);
	L2 = min((a->y),(b->y))  - max((a->y)-(a->h),(b->y)-(b->h));
	sum = L1*L2;
	if(sum<0){
		return 0;
	}else{
		return sum;
	}


}
