
#include<iostream.h>
#include<iomanip.h>
inline add(int index)
	{	int sum=index+10;
		return sum;	}

char name1[]="First Program Title";
float func1(int value);
void func2(int array1[],float array2[]);

main()
{
	int stuff[12];
	float weird[12];
	static char name2[]="Second Program Title";

	for(int index=0;index<12;index++)
		{
			stuff[index]=add(index);
			weird[index]=func1(index);
		}
	cout<<"\t\t"<<name1<<"\n";
	cout<<"\t\t"<<name2<<"\n\n";

	func2(stuff,weird);

	return 0;
}
//////////////////////////////func1(index)//////////////////////////////////
float func1(int value)
{
	float evaluation;
	evaluation=12.0*(float(value)+float(7));
	return evaluation;
}
///////////////////////////////func()///////////////////////////////////////
void func2(int array1[],float array2[])
{
	for(int index=0;index<12;index++)
  	{
			cout<<"\t"<<index<<"\t"<<array1[index]<<"\t";
			cout<<setprecision(3)<<setiosflags(ios::showpoint)<<array2[index]<<"\n";
		}
}

