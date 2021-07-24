#include<bits/stdc++.h>
using namespace std;


bool tr(int a,int b,int c)
{
  return ((a+b>c)&&(a+c>b)&&(b+c>a));
}
 
bool seg(int a,int b,int c)
{
  return ((a==b+c)||(b==a+c)||(c==a+b));
}
 
int main()
{
  bool normal=false;
  bool deg=false;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  normal=normal|(tr(a,b,c));
  normal=normal|(tr(a,b,d));
  normal=normal|(tr(a,c,d));
  normal=normal|(tr(b,c,d));
 
 
  deg=deg|(seg(a,b,c));
  deg=deg|(seg(a,b,d));
  deg=deg|(seg(a,c,d));
  deg=deg|(seg(b,c,d));
  
  if(normal)
    cout<<"TRIANGLE"<<endl;
  else if(deg)
    cout<<"SEGMENT"<<endl;
  else
    cout<<"IMPOSSIBLE"<<endl;
 
  return 0;
}
