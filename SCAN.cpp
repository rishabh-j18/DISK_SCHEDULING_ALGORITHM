#include<iostream>
using namespace std;
int main(){
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
    for (int i = 0; i < num - 1; i++) // applying Bubble Sort
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (req[j] > req[j + 1])
            {
                swap(req[j], req[j + 1]); // Swap() function to swap adjacent elements
            }
        }
    }
    cout<<"Enter Direction toward which head will move "<<endl;
    cout<<"(Enter left or right)"<<endl;
    string dir;
    cin>>dir;
    if(dir=="left" || dir=="Left" || dir=="LEFT"){
        cout<<"Moving from Right to Left"<<endl;
        seek_op=abs(head_init-0)+abs(req[num-1]-0);
        cout<<"Total Number of Seek Operations  :"<<seek_op<<endl;
        cout<<"Seek Sequence is :"<<endl;
        for(int i=num-1;i>=0;i--){
            if(req[i]<head_init &&req[i]>=0)
            {
                cout<<req[i]<<endl;
            }
        }
        cout<<0<<endl;
        for(int i=0;i<num;i++){
            if(req[i]>head_init &&req[i]<=199)
            {
                cout<<req[i]<<endl;
            }
        }
    }
    else if(dir=="right" || dir=="Right" || dir=="RIGHT"){
        cout<<"Moving from Left to Right"<<endl;
        seek_op=abs(head_init-199)+abs(req[0]-199);
        cout<<"Total Number of Seek Operations  :"<<seek_op<<endl;
        cout<<"Seek Sequence is :"<<endl;
        for(int i=0;i<num;i++){
            if(req[i]>head_init &&req[i]<=199)
            {
                cout<<req[i]<<endl;
            }
        }
        cout<<199<<endl;
        for(int i=num-1;i>=0;i--){
            if(req[i]<head_init &&req[i]>=0)
            {
                cout<<req[i]<<endl;
            }
        }
    }
    

    

}