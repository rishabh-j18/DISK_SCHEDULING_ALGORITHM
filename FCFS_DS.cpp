#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num,head_init,seek_op=0;
	cout<<"Enter the total number of requests :";
	cin>>num;
	int req[num];
	cout << "\n\nTotal Tracks in Disc are 200" << endl;
	cout<<"Enter Requested Track Numbers [Less than 200] "<<endl;
	for (int i = 0; i < num; i++)
	{
		cin>>req[i];
	}
	cout<<"\nEnter Initial Head Position :";
	cin>>head_init;
	int p=head_init;
	for(int i=0;i<num;i++){
		seek_op+=abs(p-req[i]);
		p=req[i];

	}
	cout<<"Total Seek Time is --->"<<seek_op<<endl;
	cout<<"Request Sequence Followed are"<<endl;
	for (int i = 0; i < num; i++)
	{
		cout<<req[i]<<endl;
	}
	
	
return 0;
}