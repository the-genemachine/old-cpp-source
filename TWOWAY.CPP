
#include<iostream.h>
fixup(int nuts,int *fruit);
main()
{
	int pecans=100,apples=101;

	cout<<"The starting values are "<<pecans<<" and "<<apples<<"\n";

	fixup(pecans,&apples);

	cout<<"The ending values are "<<pecans<<" and "<<apples<<"\n";

	return 0;
}
//////////////////////////fixup(pecans,&apples)/////////////////////////////
fixup(int nuts,int *fruit)
{
	cout<<"The values are "<<nuts<<" and "<<*fruit<<"\n";
	nuts=135;
	*fruit=172;
	cout<<"The values are "<<nuts<<" and "<<*fruit<<"\n";

	return 0;
}
