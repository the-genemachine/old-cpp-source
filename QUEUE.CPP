// Filename: queue.cpp
// A simple program containing a queue.

#include<iostream.h>
#include<stdlib.h>
class queue
{
	private:
		int item[10];
		int store_index;
		int retrieve_index;
	public:
  	void init(void);
		void store(int num);
		int retrieve(void);
		void display(void)
		{
			cout<<"\n";
			for(register int t=0;t<10;t++)
      {
				cout<<retrieve()<<"\n";
			}
			exit(0);
    }
};
/*                                                                        */
void queue::init(void)
{
	store_index=0;
	retrieve_index=1;
}
/*																																				*/
void queue::store(int num)
{
	store_index++;
	if(store_index==10)
	{
		cout<<"Queue is full!\n";
		display();
	}
	item[store_index]=num;
}
/*																																				*/
int queue::retrieve(void)
{
	if(retrieve_index==store_index)
	{
		cout<<"No more numbers!\n";
		exit(0);
	}
	retrieve_index++;
	return item[retrieve_index-1];
}
/*                                                                        */
main()
{
	queue q1;
	int n;
  int q,ctr=0;

	q1.init();
	for(;;)
  {
		cout<<"Enter a number-> ";
		cin>>n;
		q1.store(n);
	}

	return 0;
}
