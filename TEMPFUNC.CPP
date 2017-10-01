
#include<iostream.h>
temp(int cent);
main()
{
	cout<<"\t\tCentigrade to Farenheit Conversion Table\n\n";

	for(int count=-2;count<=12;count++)
		{
			temp(count);
		}
	return 0;
}
/////////////////////////////Temp()/////////////////////////////////////////
temp(int cent)
{
	int centigrade,farenheit;

	centigrade=10*cent;
	farenheit=32+(centigrade*9)/5;

	cout<<"\tC= "<<centigrade<<"\tF= "<<farenheit;
	if(centigrade==0)
		{
			cout<<" Freezing point of water!";
		}
	if(centigrade==100)
		{
			cout<<" Boiling point of water!";
		}
	cout<<"\n";
return 0;
}


    	