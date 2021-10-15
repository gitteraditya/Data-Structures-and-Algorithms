#include<iostream>

#include<bits/stdc++.h>

using namespace std;

vector<int> peakelements(vector<int> &arr)
{
    int i,l;
    vector<int> ans;//Returning the resultant vector
    l = arr.size();
    if(l==1)
    {
        ans.push_back(arr[0]);
    }
    else if(l==2)
    {
        if(arr[0]>=arr[1])
        {
            ans.push_back(arr[0]);
        }
        if(arr[0]>arr[1])
        {
            ans.push_back(arr[1]);
        }
    }
    else
    {
        if(arr[0]>arr[1])
        {
            ans.push_back(arr[0]);
        }
        for(i=1;i<=l-2;i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                ans.push_back(arr[i]);
            }
        }
        if(arr[l-1]>arr[l-2])
        {
            ans.push_back(arr[l-1]);
        }
    }
    return ans;
}

void display(vector<int> &arr)
{
    int l,i;
    l = arr.size();
    for(i=0;i<=l-1;i++)
    {
        cout <<arr[i];
    }
}

int main()
{
    vector <int> arr{ 1, 3, 20, 4, 1, 0 };

    vector <int> ans;

    ans = peakelements(arr);

    if(ans.size())
    {
        cout <<"The peak elements are\n\n";
        display(ans);
    }
    else
    {
        cout <<"There are no peak elements\n\n";
        display(ans);
    }

    return 0;

}
