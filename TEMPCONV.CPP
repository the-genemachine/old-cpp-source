
#include<iostream.h>
#include<iomanip.h>
main()
{
	int count,farenheight,centigrade;

	cout<<"\t\tCentigrade to Fahrenheight Table\n";
	cout<<"\t\t********************************\n\n";

	for(count=-2;count<=12;count++)
		{ cout<<setiosflags(ios::right);
			centigrade=10*count;
			farenheight=32+(centigrade*9)/5;

			cout<<" C ="<<setw(5)<<centigrade<<" F ="<<setw(5)<<farenheight;
			if(centigrade==0)
				cout<<" Freezing point of water!";
			if(centigrade==100)
				cout<<" Boiling point of water!";
			cout<<"\n";
		}
	return 0;
}
