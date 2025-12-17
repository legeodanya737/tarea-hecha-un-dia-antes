#include <iostream>

#define forsito(i,s,n) for(int i=int(s);i<int(n);i++)

using lint=long long;
using namespace std;

int main()
{
    lint n,q,sum=0,aux;
    cin>>n>>q;
    lint queries[n+1];
    queries[0]=0;
    forsito(i,0,n)
    {
        cin>>aux;
        sum+=aux;
        queries[i+1]=sum;
    }
    forsito(i,0,q)
    {
        cin>>aux>>n;
        cout<<queries[n]-queries[aux-1]<<endl;
    }
    return 0;
}
