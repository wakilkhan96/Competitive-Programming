#include <bits/stdc++.h>

#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define sc               scanf
#define pf               printf
#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define pb(a)            push_back(a)
#define MP               make_pair
#define db               double
#define ll               long long
#define EPS              10E-10
#define ff               first
#define ss               second
#define sqr(x)           (x)*(x)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define VI               vector <int>
#define DBG              pf("Hi\n")
#define MOD              1000000007
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))

using namespace std;
///p∗e−x + q∗sin(x) + r∗cos(x) + s∗tan(x) + t∗x2 + u = 0
/// p, q, r, s, t and u (where 0 ≤ p, r ≤ 20 and −20 ≤ q,s,t ≤ 0

double p, q, r, s, t, u;
double eqn_solution;

double solution(double x)
{
    double ans = 0.0;
    ans += p/exp(x);
    ans += q*sin(x);
    ans += r*cos(x);
    ans += s*tan(x);
    ans += t*x*x;
    ans += u;

    return ans;

}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u )!=EOF)
    {
        double low = 0.0, mid = 0, high = 1.0;

        int steps = 100;
        while( steps-- )
        {
            mid = (low + high)/2.0;

            eqn_solution = solution( mid );

            if( eqn_solution > 0.0) high = mid-.0001;
            else low = mid+.0001;


        }
            cout<<eqn_solution<<endl;
        if( fabs(eqn_solution-0)>0.0001 )printf("No solution\n");
        else printf("%.4lf\n");




    }

    return 0;

}







































