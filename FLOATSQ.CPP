
#include<iostream.h>
float sqr(float inval);
float glsqr(void);
float z;
main()
{
	float x,y;
	for(int index=0;index<=7;index++)
		{
			x=index;
			y=sqr(x);
			cout<<"The square of "<<index<<" is "<<y<<"\n";
		}
	cout<<"\n\n";
	for(index=0;index<=7;index++)
		{
			z=index;
			y=glsqr();
			cout<<"The square of "<<index<<" is "<<y<<"\n";
		}
	return 0;
}
///////////////////////////SQR FUNCTION/////////////////////////////////////
float sqr(float inval)
{
	float square;
	square=inval*inval;
	return square;
}
//////////////////////////GLSQR FUNCTION////////////////////////////////////
float glsqr(void)
{
	return z*z;
}
