#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("myfile.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    char s1[105], s2[105];
    int cases = 0;
    while(scanf("%s %s", s1, s2) == 2) {
        if(cases)   puts("");
        cases++;
        printf("%s (to %s)\n", s1, s2);
        int len = strlen(s1);
        if(len < 2 || (strcmp(s1+len-2, "ar") && strcmp(s1+len-2, "er")
            && strcmp(s1+len-2, "ir"))) {
            puts("Unknown conjugation");
            continue;
        }
        int tv = s1[len-2];
        s1[len-2] = '\0';
        printf("eu        %so\n", s1);
        if(tv == 'i')
            printf("tu        %ses\n", s1);
        else
            printf("tu        %s%cs\n", s1, tv);
        if(tv == 'i')
            printf("ele/ela   %se\n", s1);
        else
            printf("ele/ela   %s%c\n", s1, tv);
        printf("n%cs       %s%cmos\n", 243, s1, tv);
        if(tv == 'i')
            printf("v%cs       %s%cs\n", 243, s1, tv);
        else
            printf("v%cs       %s%cis\n", 243, s1, tv);
        if(tv == 'i')
            printf("eles/elas %sem\n", s1);
        else
            printf("eles/elas %s%cm\n", s1, tv);

    }
    return 0;
}