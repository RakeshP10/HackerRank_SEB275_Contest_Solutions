#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int p1=1,p2=2,wait=3,flag=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]!=p1&&arr[i]!=p2)
        {
            flag=1;
            break;
        }
        p1=arr[i];
        p2=wait;
        if(arr[i]==3 )
        {
            wait=3-wait;
            continue;
        }
        if(wait==3)
        {
            wait=3-arr[i];
            continue;
        }
        else
        {
             wait=3;
        }
    }
    if(flag==0)
	{
        cout<<"YES"<<endl;
    }
	else
    {
		cout<<"NO"<<endl;
    }
	return 0;
}