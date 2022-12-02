#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(((i+j)%2)==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    //Rhombus pattern

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++) {
            cout <<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

//Number pattern
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
//Palindromic Patterns
for(int i=1;i<=n;i++)
{
    int j;
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    int k=i;

    for(;j<=n;j++)
    {
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++)
    {
        cout<<k++<<" ";
    }
    cout<<endl;
}

    return 0;
}
