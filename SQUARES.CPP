
#include<iostream.h>
int squ(int in);
main()
{
	int x,y;
	for(x=0;x<=7;x++)
		{
			y=squ(x);
			cout<<"The square of "<<x<<" is "<<y<<"\n";
		}
	for(x=0;x<=7;x++)
		{
			cout<<"The value of "<<x<<" is "<<squ(x)<<"\n";
		}
	return 0;
}
/////////////////////////////SQU FUNCTION///////////////////////////////////
int squ(int in)
{
	int square;
	square=in*in;
	return square;
}
