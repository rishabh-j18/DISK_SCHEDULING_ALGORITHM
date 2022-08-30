#include <iostream>
using namespace std;
int main()
{
    int num, head_init, seek_op = 0;
    cout << "Enter the total number of requests :";
    cin >> num;
    int req[num];
    cout << "\n\nTotal Tracks in Disc are 200" << endl;
    cout << "Enter Requested Track Numbers [Less than 200] " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> req[i];
    }
    cout << "\nEnter Initial Head Position :";
    cin >> head_init;
    int p = head_init;
    int k = head_init, diff = 0;
    while (diff < num)
    {
        for (int i = diff; i < num - 1; i++) // applying Bubble Sort
        {

            for (int j = diff; j < num - i - 1; j++)
            {
                if (abs(k - req[j]) > abs(k - req[j + 1]))
                {
                    swap(req[j], req[j + 1]); // Swap() function to swap adjacent elements
                }
            }
        }
        k = req[diff];
        diff++;
    }
    for (int i = 0; i < num; i++)
    {
        seek_op += abs(p - req[i]);
        p = req[i];
    }
    cout << "Total Seek Time is --->" << seek_op << endl;
    cout << "Request Sequence Followed are" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << req[i] << endl;
    }
    return 0;
}