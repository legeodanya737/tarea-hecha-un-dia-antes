#include <iostream>
#include <vector>
#include <algorithm>

#define forsito(i,n) for(int i=0;i<int (n);i++)
#define All(c) c.begin(),c.end()

using lint = long long;
using namespace std;

lint mcd(lint a,lint b)
{
    if(b==0)
        return a;
    return mcd(b,a%b);
}
int main()
{
    lint a,b,ant,act,bbb;
    cin>>a>>b;
    vector<lint> aa,bb;
    int i,j;
    forsito(i,a)
    {
        cin>>act;
        aa.push_back(act);
    }
    sort(All(aa));
    forsito(i,b)
    {
        cin>>bbb;
        ant=mcd(aa[0]+bbb,aa[1]+bbb);
        if(aa.size()==1)
                ant=aa[0]+bbb;
        for(j=2;j<a;j++)
        {

            act=mcd(aa[j-1]+bbb,aa[j]+bbb);
            if(ant>act)
            {
                ant=act;
            }
        }
        bb.push_back(ant);
    }
    forsito(i,b)
    {
        cout<<bb[i];
        if(i!=b-1)
            cout<<" ";
    }
    return 0;
}
