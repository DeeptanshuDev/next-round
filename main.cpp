#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(unsigned int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int score = arr[k-1],count=0;

    for(unsigned int i=0;i<n;i++)
    {
      if(arr[i]>score || (arr[i]==score && score>0))
      {
          count++;

      }

    }
    if(count>0)
    {
        cout<<count;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
