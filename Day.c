#include<stdio.h>
#include<conio.h>

int odd(int n);
void main()
{
    int i=1,date,month,year,odd1=0,odd2=0,odd3,odd4,odd5,mon,k,L,j,m;
    char c,day[10];
    printf("Enter the date on which you had born :");
    scanf("%d %d %d",&date,&month,&year);
    k=(year-1)%400;
    if(k>=300)
    {
        j=k%300;
        odd1+=1;

    }
    else if(k>=200)
    {
        j=k%200;
        odd1+=3;

    }
    else if(k>=100)
   {

        j=k%100;
        odd1+=5;

    }
    else if(k<100)
    {
        j=k;
    }
    L=j+(j/4);
    odd1+=L;
    m=odd1%7;


    //for the calculation of number of odds for the month
    if(month>1 && month<12)
    {
    mon=month-1;
   if(year%4==0)
   {
       if(mon==1)
        odd2+=3;
       else if(mon==2)
       odd2+=4;
       else if(mon==3)
        odd2+=7;
       else if(mon==4)
        odd2+=9;
       else if(mon==5)
        odd2+=12;
       else if(mon==6)
        odd2+=14;
        else if(mon==7)
        odd2+=17;
        else if(mon==8)
        odd2+=20;
        else if(mon==9)
        odd2+=22;
        else if(mon==10)
        odd2+=25;

   }
   else
   {
      if(mon==1)
        odd2+=3;
       else if(mon==2)
       odd2+=3;
       else if(mon==3)
        odd2+=6;
       else if(mon==4)
        odd2+=8;
       else if(mon==5)
        odd2+=11;
       else if(mon==6)
        odd2+=13;
        else if(mon==7)
        odd2+=16;
        else if(mon==8)
        odd2+=19;
        else if(mon==9)
        odd2+=21;
        else if(mon==10)
        odd2+=24;

   }

    }
   else if(month==12)
   {
       if(year%4==0)
        odd2+=27;
       else
        odd2+=26;
   }
    //for calculating the odds of a date

    odd3=odd(date);
    odd4=m+odd2+odd3;

    if(odd(odd4)==0)
    {
       printf("%d/%d/%d is on ",date,month,year);
        printf("Sunday");
    }
    else if(odd(odd4)==1)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Monday");
    }
    else if(odd(odd4)==2)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Tuesday");
    }
    else if(odd(odd4)==3)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Wednesday");
    }
    else if(odd(odd4)==4)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Thursday");
    }
    else if(odd(odd4)==5)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Friday");
    }
    else if(odd(odd4)==6)
    {
        printf("%d/%d/%d is on ",date,month,year);
        printf("Saturday");
    }


}
int odd(int n)
{
    int odd;
    odd=n%7;
    return odd;
}
