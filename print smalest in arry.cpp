#include<iostream>
using namespace std;
int main()
{
    int arr[100], i, s;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
    cin>>arr[i];
    s = arr[0];
    for(i=1; i<103; i++)
    {
    if(s>arr[i])
    s = arr[i];
    }
    cout<<"\nSmallest Number = "<<s;
    cout<<endl;

}
