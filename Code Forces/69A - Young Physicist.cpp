#include <bits/stdc++.h>
using namespace std;

class _vector
{
    public:
        int a, b, c;
};

_vector operator + (_vector n1, _vector n2)
{
    _vector obj;
    
    obj.a = n1.a + n2.a;
    obj.b = n1.b + n2.b;
    obj.c = n1.c + n2.c;
    
    return obj;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    _vector vector_sum, temp;
    
    int n;
    cin>>n;
    cin>>vector_sum.a>>vector_sum.b>>vector_sum.c;
    
    n--;
    while(n--)
    {
        cin>>temp.a>>temp.b>>temp.c;
        vector_sum = vector_sum + temp;
    }
    if(vector_sum.a==0 && vector_sum.b==0 && vector_sum.c==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
