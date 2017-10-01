#include<iostream.h>
#include<conio.h>
#include<dos.h>
class integer
{
	private:
		int a,b;
	public:
		integer(int A,int B) {	a=A;b=B;	}
		void display(char *c);
};
void integer::display(char *c)
{
	cout<<"a in "<<c<<" is "<<a<<"\n";
	cout<<"b in "<<c<<" is "<<b<<"\n\n";
}
main()
{
	integer ob1(1,2),ob2(3,4);
	integer objectTotal(0,0);
	clrscr();
	ob1.display("ob1");
	ob2.display("ob2");
	sleep(5);
	return 0;
}

