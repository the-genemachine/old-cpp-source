
#include<iostream.h>
main()
{
	int i,j,big[8][8],large[25][12];

	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			big[i][j]=i*j;

	for(i=0;i<25;i++)
		for(j=0;j<12;j++)
			large[i][j]=i+j;

	big[2][6]=large[24][10]*22;
	big[2][2]=5;
	big[big[2][2]][big[2][2]]=177;

	for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
				cout<<"\t"<<big[i][j];
			cout<<"\n";
		}
	return 0;
}
