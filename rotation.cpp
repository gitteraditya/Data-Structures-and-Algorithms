#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b,n,c,temp,j;

    cout << "Enter the size of array" << endl;
    cin >> a;
    cout << endl;
    cout << "Enter the elements of array";

    vector <int> arr;

    for(i=0;i<=a-1;i++)
    {
        cin >> b;
        arr.push_back(b);
    }

    cout << "Before Rotation"<<endl;

    for(i=0;i<=a-1;i++)
    {
        cout <<arr[i]<<endl;
    }

    cout <<"How many times you want to rotate ?"<<endl;

    cin >>c;

    cout << endl;

    for(i=0;i<=c-1;i++)
    {
        temp = arr[0];
        for(j=0;j<=a-2;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[a-1]=temp;
    }
    cout <<"After Rotation"<<endl;

    for(i=0;i<=a-1;i++)
    {
        cout <<arr[i]<<endl;
    }
    return 0;
}
