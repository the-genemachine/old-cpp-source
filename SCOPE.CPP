
#include<iostream.h>
void head1(void);
void head2(void);
void head3(void);
int count=100;
main()
{
	head1();
	head2();
	head3();

	for(register int index=8;index>0;index--)
		{
			for(int stuff=0;stuff<=6;stuff++)
				{
					cout<<stuff<<" ";
				}
			cout<<" Index is now "<<index<<"\n";
		}
	return 0;
}
////////////////////////////HEAD1 FUNCTION//////////////////////////////////
int counter;
void head1(void)
{
	int index=23;
	cout<<"The header1 value is "<<index<<"\n";
}
////////////////////////////HEAD2 FUNCTION//////////////////////////////////
void head2(void)
{
	int count=53;
	cout<<"The header2 value is "<<count<<"\n";
  cout<<"Embedded scope resolution operator makes count "<<::count<<"\n";
	counter=77;
}
////////////////////////////HEAD3 FUNCTION//////////////////////////////////
void head3(void)
{
	cout<<"The header3 value is "<<counter<<"\n";
}