#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int len = n*2 - 1;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            cout<<n-min<<" ";
        }
       cout<<endl;
    }
    return 0;
}