
#include<iostream.h>
dosome(int list[]);
main()
{
	int matrix[20];

	for(int index=0;index<20;index++) matrix[index]=index+1;

	for(index=0;index<5;index++)
		cout<<"Start matrix["<<index<<"]"<<" = "<<matrix[index]<<"\n";

	dosome(matrix);

	for(index=0;index<5;index++)
		cout<<"Back matrix["<<index<<"]"<<" = "<<matrix[index]<<"\n";

	return 0;
}
///////////////////////////dosome(matrix)//////////////////////////////////
dosome(int list[])
{
	for(int i=0;i<5;i++)
		cout<<"Before matrix["<<i<<"]"<<" = "<<list[i]<<"\n";

	for(i=0;i<20;i++)
		list[i]+=10;

	for(i=0;i<5;i++)
		cout<<"After matrix["<<i<<"]"<<" = "<<list[i]<<"\n";

	return 0;
}					    	