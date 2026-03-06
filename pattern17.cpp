#include<bits/stdc++.h>
using namespace std;

int main()
{ int n,row,col;
  cin>>n;
  for(row=1;row<=n;row++)
     {
        for(col=1;col<=n;col++)
        {   
            if((col==1 && row==1) || (col==n && row==n) ||(col==1&& row ==n)|| (col==n&&row==1))
            {
                cout<<"*";

            }
           if ((col==1&&row!=1&&row!=n)||(col==n&&row!=n&&row!=1))
            {
                cout<<"|";
            }
            if((row==1&&col!=1&&col!=n)||(row==n&&col!=n&&col!=1))
            {
                cout<<"-";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;

     }



    return 0;

}