#include<iostream>

#include<bits/stdc++.h>

using namespace std;

void bubblesort(vector<int> &arr)
{
    int i,j,temp,l;
    l = arr.size();
    for(i=0;i<=l-2;i++)
    {
        for(j=i+1;j<=l-1;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return;
}

void kthsmallest(vector<int> &arr, int n)
{
    int i,p=1,l=arr.size();
    if(n==1)
    {
        cout <<arr[0];
    }
    else
    {
        for(i=0;i<=l-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                p++;
            }
            if(p==n)
            {
                cout << arr[i+1] << " is the " <<n <<"th minimum number";

                break;
            }
        }
    }
    return;
}

void display(vector<int> &arr)
{
    int l,i;
    l = arr.size();
    for(i=0;i<=l-1;i++)
    {
        cout <<arr[i] <<""<<" ";
    }
    cout <<endl<<endl;
}

int main()
{
    int k=2;
    vector <int> arr{4, 3, 4, 3, 20, 15} ;
    cout << "The Original Array is\n\n";
    display(arr);
    bubblesort(arr);
    cout <<"The Sorted Array is\n\n";
    display(arr);
    kthsmallest(arr,k);
    cout <<endl<<endl;
    return 0;

}
