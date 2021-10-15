#include<iostream>

#include<bits/stdc++.h>

using namespace std;

vector<int> reversearray(vector<int> &arr)
{
    int i,lef,ri,l,t;
    vector <int> ans;
    l = arr.size();
    lef = 0;
    ri = l-1;
    while(lef!=ri+1 && lef!=ri)
    {
        t = arr[lef];
        arr[lef] = arr[ri];
        arr[ri] = t;
        lef++;
        ri--;
    }
    return ans;
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

    vector <int> rev;//Reverse Array

    rev = reversearray(arr);

    cout << "The Reverse of an array is\n\n";
    display(arr);
    return 0;

}

