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

void display(vector<int> &arr)
{
    int l,i;
    l = arr.size();
    for(i=0;i<=l-1;i++)
    {
        cout <<arr[i] <<""<<" ";
    }
    cout <<endl;
}

int main()
{
    vector <int> arr{ 1, 3, 20, 4};

    cout << "The Array is\n\n";
    display(arr);
    bubblesort(arr);

    cout << "The Sorted Array is is\n\n";
    display(arr);
    return 0;

}
