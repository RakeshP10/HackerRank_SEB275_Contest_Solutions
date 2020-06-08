#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,arr[100],cost=0,arr1[100]={0},n1,n2;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<b;i++)
    {
        cin>>n1>>n2;
        if(arr1[n1 - 1] == 0 && arr1[n2 - 1]==0)
        {
            if(arr[n1 - 1] > arr[n2 - 1])
            {
                cost = cost+arr[n2-1];
            }
            else
            {
                cost = cost+arr[n1-1];
            }
            arr1[n1-1]=1;
            arr1[n2-1]=1;
        }
        else
        {
            if(arr1[n2 - 1] == 0 && arr1[n1 - 1] == 1)
            {
                arr1[n2 - 1] = 1;
            }
            else
            {
                arr1[n1-1] = 1;
            }

        }

    }
    for(int i=0;i<a;i++)
    {
        if(arr1[i] == 0)
        {
            cost = cost+arr[i];
        }
    }

    cout<<cost;
    return 0;
}
