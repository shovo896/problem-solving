# include<stdio.h>
#include<stdlib.h>
int main(){
    char s[3],t[3];
    scanf("%s %s",s,t);
    
    int s1 = s[0] - 'A';
    int s2 = s[1] - 'A';
    int t1 = t[0] - 'A';
    int t2 = t[1] - 'A';

    int d1 = abs(s1-t1);
    int d2 = abs(s2-t2);

    if (d1 >2 )d1= 5 -d1 ;
    if (d2 >2 )d2= 5 -d2;

    if (d1==d2)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}