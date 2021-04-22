#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int side1,side2,side3;
    double s,small_radius,big_radius,triangle_area;
    double sunflower,violets,rose;
    while(scanf("%d %d %d",&side1,&side2,&side3)==3){
    s=(double)(side1+side2+side3)/2.0;
    triangle_area=sqrt( (s*(s-side1)*(s-side2)*(s-side3)) );
    big_radius=(double)(side1*side2*side3)/(double)(triangle_area*4.0);
    small_radius=triangle_area/(double)s;
    rose=pi*(small_radius*small_radius);
    violets=triangle_area-rose;
    sunflower= ((pi*(big_radius*big_radius))-triangle_area);
    printf("%.4lf %.4lf %.4lf\n",sunflower,violets,rose);
    }
    return 0;
}
