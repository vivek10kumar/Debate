#include<iostream>
using namespace std;
int pair_sum(int arr[],int n,int targetsum)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==targetsum)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n,targetsum;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter targetsum:";
    cin>>targetsum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int ans=pair_sum( arr, n,targetsum);
    cout<<ans<<endl;
}
