#include <stdio.h>
#include <stdlib.h>
typedef struct mouse
{
    int cost;
    char port[5];
}mouse;

int cmpfunc(const void *x,const void *y)
{
    return((mouse *)x)->cost - ((mouse *)y)->cost;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int m,i;
    mouse m_arr[300001];
    scanf("%d",&m);
    for(i=0;i<m;i++)
       scanf("%d %s",&(m_arr[i].cost),m_arr[i].port);
    qsort(m_arr,m,sizeof(mouse),cmpfunc);
    unsigned long long total_sum=0;
    int total_cnt=0;
    for(i=0;i<m;i++)
    {
        if(a+b+c==0) break;
        if(m_arr[i].port[0]=='U')
        {
            if(a)
            {
                a--;
                total_sum+=m_arr[i].cost;
                total_cnt++;
            }
            else if(c)
            {2
                c--;
                total_sum+=m_arr[i].cost;
                total_cnt++;
            }
        }
        else
        {
            if (b)
            {
                b--;
                total_sum+=m_arr[i].cost;
                total_cnt++;
            }
            else if(c)
            {
                c--;
                total_sum+=m_arr[i].cost;
                total_cnt++;
            }
        }
    }
    printf("%d %lld",total_cnt,total_sum);

	return 0;
}


