#include<iostream.h>
#include<conio.h>
#include<dos.h>
class integer
{
	private:
		int a,b;
	public:
		integer() {	a=0;b=0;	} // use this to construct when no parms passed
		integer(int A,int B) {	a=A;b=B;	} // use this when parms passed
		void display(char *c); // use pointer when passing string constant
		// overloaded operator to return an object of type integer adding an
		// object of integer to the *this pointer.
		integer operator+(integer o2);
};
void integer::display(char *c)
{
	cout<<"a in "<<c<<" is "<<a<<"\n";
	cout<<"b in "<<c<<" is "<<b<<"\n\n";
}
integer integer::operator+(integer o2)
{
	integer temp;
	temp.a=a+o2.a;
	temp.b=b+o2.b;
	return temp;
}
main()
{
	integer ob1(1,2),ob2(3,4);
	integer objectTotal;
	clrscr();
	ob1.display("ob1");
	ob2.display("ob2");
	objectTotal=ob1+ob2;
	objectTotal.display("objectTotal");
	sleep(5);
	return 0;
}

