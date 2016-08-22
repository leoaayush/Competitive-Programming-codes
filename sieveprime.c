#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int rest(char*,int );
int main()
    {
    char s[100000],d[100000],e[100000];
        int l,n=1,k,i,result,c,t=1;
            char f;
        scanf("%s",s);
    strcpy(d,s);
    l=strlen(s);
    for(i=0;i<l;i++)
        {
            if((int)s[i]>=65&&(int)s[i]<=91)
                            {
                               c=(int)s[i]+32;
                                s[i]=(char)c;
                            }
        }
    for(i=1;i<=l;i++)
        {
        t=t*i;
        }
    for(i=1;i<=t;i++)
        {
        if(n>l-1)
            n=0;
        if(n==0)
            k=l-1;
        else
            k=n-1;
        f=s[n];
        s[n]=s[k];
        s[k]=f;
        n++;
        result=rest(&s[0],l);
        if(result==1)
            {
            printf("YES");
            break;
            }
        else if(i==t)
                {   
            for(i=l-1;i>=0;i--)
                {
                e[i]=d[l-(i+1)];
                
                }
            if(strcmp(e,d)==0){
                    printf("YES");
                    break;
                               }
            else{
                    printf("NO");
                     break;
                }
                }
            else
                continue;
                
    }
    return 0;
    
}
int rest(char*s, int l)
    {
    int z=0,i;
        char str[100000];
        for(i=l-1;i>=0;i--)
        {
        str[i]=s[l-(i+1)];
        }
    if(strcmp(s,str)==0)
                z=1;
    else
                z=0;
    return (z);
}
