#include<stdio.h>
int main()
{
unsigned long long int start,end,i,j,tempnum,ams=0,rem;
scanf("%llu",&n);
for(i=start;i<=end;i++)
{
j=i;
while(i>0)
{
rem=i%10;
ams+=rem*rem*rem;
i/=10;
}
if(ams==j)
{
printf("%llu ",i);
}
}


}
