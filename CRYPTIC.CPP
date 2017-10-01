
#include<iostream.h>
main()
{
	int x=0,y=2,z=1025,x2=0,y2=2,z2=1025;
	float a=0.0,b=3.14159,c=-37.234,a2=0.0,b2=3.14159,c2=-37.234;

	x=x+1;
	x++;
	++x;
	z=y++;
	z=++y;
	x2=x2+1;
	x2++;
	++x2;
	z2=y2++;
	z2=++y2;

	y=y-1;
	y--;
	--y;
	y=3;
	z=y--;
	z=--y;
	y2=y2-1;
	y2--;
	--y2;
	y2=3;
	z2=y2--;
	z2=--y2;

	a=(b>=3.0?2.0:10.5);
	if(b>=3.0)
		a=2.0;
	else
		a=10.5;
	c=(a>b?a:b);
	c=(a>b?b:a);
	return 0;
}

