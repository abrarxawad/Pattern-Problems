#include<bits/stdc++.h>
using namespace std;

int main()
{ 
   int n,row,col;
   cin>>n;
   for(row=1;row<=n;row++)
   {
    for(col=1;col<=row;col++)

    {
        if (row==col|| row==n||col==1)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
   }


    return 0;

}