#include<bits/stdc++.h>
using namespace std;
#define pci     pair<char,int>

bool compare( pair<char,int> a, pair<char,int> b)
{
    return a.second < b.second;
}

int main()
{
    string a,b;
    int n,i;
    cin>>n;
    while(n--)
    {
        map<char , int> m1, m2;
        cin>>a>>b;
        for(i=0; i<a.length(); i++)if( isalpha( a[i] ) ) m1[ a[i] ]++;
        for(i=0; i<b.length(); i++)if( isalpha( b[i] ) ) m2[ b[i] ]++;
        vector< pair<char,int> >mapcopy1( m1.begin(), m1.end() );
        vector< pair<char,int> >mapcopy2( m2.begin(), m2.end() );
        sort( mapcopy1.begin(), mapcopy1.end(), compare);
        sort( mapcopy2.begin(), mapcopy2.end(), compare);
        map<char, char> newMap;
        for(i=0; i<mapcopy1.size(); i++) newMap[ mapcopy2[i].first ] = mapcopy1[i].first;
        for(i=0; i<b.size(); i++) if( isalpha(b[i]) ) b[i] = newMap[ b[i] ];
        cout<<b<<endl;
        if(n)cout<<endl;
    }
    return 0;
}

