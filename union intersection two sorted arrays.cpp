#include<iostream>

#include<bits/stdc++.h>

using namespace std;

void unionintersec(vector<int> a,vector<int> b,vector<int> &unio,vector<int> &inters)
{
    int i,l,r,l1,l2;
    l = 0;
    r = 0;
    l1 = a.size();

    l2 = b.size();

    while(l<l1 && r<l2)
    {
        if(a[l]>b[r])
        {
            unio.push_back(b[r]);
            r++;
        }
        else if(a[l]<b[r])
        {
            unio.push_back(a[l]);
            l++;
        }
        else
        {
            unio.push_back(a[l]);
            inters.push_back(a[l]);
            l++;
            r++;
        }
    }
    if(l==l1)
    {
        for(i=r;i<=l2-1;i++)
        {
            unio.push_back(a[i]);
        }
    }
    else if(r==l2)
    {
        for(i=l;i<=l1-1;i++)
        {
            unio.push_back(a[i]);
        }
    }
    return;
}


void display(vector <int> a)
{
    int i;
    for(i=0;i<=a.size()-1;i++)
    {
        cout <<a[i]<<""<<" ";
    }
    cout << endl;
}

int main()
{
    vector <int> a{1, 2, 4, 5, 6};
    vector <int> b{2, 3, 5, 7};
    vector <int> unio;
    vector <int> inters;

    unionintersec(a,b,unio,inters);
    display(a);
    display(b);
    cout << endl;
    display(unio);
    display(inters);
    return 0;
}
