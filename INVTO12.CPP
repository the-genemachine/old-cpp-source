
//	Program that counts from 1 to 12, prints count and it's inversion to
//  5 decimal places

#include<iostream.h>
#include<iomanip.h>
main()
{
	float inv;

  cout<<"Count"<<setw(15)<<"Inversion\n";
	for(int cnt=1;cnt<=12;cnt++)
		{
    	inv=1/float(cnt);
			cout<<setprecision(5);
			cout<<cnt<<setiosflags(ios::showpoint|ios::right)<<setw(15)<<inv<<endl;
		}
	return 0;
}