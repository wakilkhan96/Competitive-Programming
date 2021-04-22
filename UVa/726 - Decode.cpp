#include<bits/stdc++.h>
using namespace std;

#define IOS             ios_base::sync_with_stdio(0);cin.tie(0)
#define LL              long long int
#define ULL             unsigned LL
#define READ(File)      freopen(File, "r", stdin)
#define WRITE(File)     freopen(File, "w", stdout)
#define FOR(i, a, b)    for(int i=a; i<b; i++)
#define REP(i, a, b)    for(int i=a; i>=b; i--)
#define PII             pair<int, int>
#define pb              push_back
#define nl              '\n'



const int inf = 1<<30;
const LL INF  = 1e18;
const int MOD = 1e9+7;
const int MAXN = 300005;

/*** Custom Sorting ***/
bool Compare(const PII &x, const PII &y)
{
    if(x.first == y.first) return x.second<y.second;
    else return x.first>y.first;
}

/** 3D Direction --> x, y, z **/
int dx[] = {-1,  1, 0,  0,  0,  0};
int dy[] = { 0,  0, 1, -1,  0,  0};
int dz[] = { 0,  0, 0,  0,  1, -1};

int main()
{
    IOS;
///    WRITE("output.txt");
    int a[26];
    int b[26];
    FOR(i, 0, 26) a[i] = b[i] = 0;

    string kwn;
    while(getline(cin, kwn)) {
        if(kwn.length()==0)break;
        FOR(i, 0, kwn.length())
        {
            if(kwn[i]>='A' && kwn[i]<='Z') a[kwn[i]-'A']++;
            else if(kwn[i]>='a' && kwn[i]<='z') a[kwn[i]-'a']++;
        }
    }

    string enc;
    vector<string> ans;
    while(getline(cin, enc))
    {
        ans.push_back(enc);
        FOR(j, 0, enc.length())
        {
            if(enc[j]>='A' && enc[j]<='Z') b[enc[j]-'A']++;
            else if(enc[j]>='a' && enc[j]<='z') b[enc[j]-'a']++;
        }
    }

    vector<PII> v1, v2;

    FOR(i, 0, 26)
    {   v1.push_back( make_pair(a[i], i));
        v2.push_back( make_pair(b[i], i));
//        v1.push_back({a[i], i});
//        v2.push_back({b[i], i});
    }

    sort(v1.begin(), v1.end(), Compare);
    sort(v2.begin(), v2.end(), Compare);

    map<int, int> mpc;

    FOR(i, 0, 26)
    {
        mpc[v2[i].second] = v1[i].second;
    }

    FOR(j, 0, ans.size())
    {
        enc = ans[j];
        FOR(i, 0, enc.length())
        {
            if(enc[i]>='A' && enc[i]<='Z') enc[i] = mpc[enc[i] -'A'] + 'A';
            else if(enc[i]>='a' && enc[i]<='z') enc[i] = mpc[enc[i]-'a'] + 'a';
        }
        cout<<enc<<nl;
    }

    return 0;
}
