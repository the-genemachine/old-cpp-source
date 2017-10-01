
#include<iostream.h>
header(void);
square(int number);
ending(void);
 
int sum;
main()
{
	header();
	for(int index=1;index<=7;index++)
		{
			square(index);
		}
	ending();
	return 0;
}
////////////////////////////////HEADER FUNCTION/////////////////////////////
 header(void)
{
	sum=0;
	cout<<"This is the header for the square program\n\n";
	return 0;
}
///////////////////////////////SQUARE FUNCTION//////////////////////////////
 square(int number)
{
	int numsq;

	numsq=number*number;
	sum+=numsq;
	cout<<"The square of "<<number<<" is "<<numsq<<"\n";
	return 0;
}
///////////////////////////////ENDING FUNCTION//////////////////////////////
 ending(void)
{
	cout<<"\nThe sum of the squares is "<<sum<<"\n";
	return 0;
}