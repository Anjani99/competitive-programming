// Author : Prathamesh Chavan
#include<stdio.h>
int weekday(char a,char b);
long int valid(long int d,long int m);
int main()
{
 char a[20];
 char b[20];
 int c[10];
 long int day,year,i,x,y,p,month,n;
 gets(a);
 gets(b);
 p=weekday(a[0],a[1]);
 c[0]=b[0]-'0';
 c[1]=b[1]-'0';
 c[2]=b[6]-'0';
 c[3]=b[7]-'0';
 c[4]=b[8]-'0';
 c[5]=b[9]-'0';
 c[6]=b[3]-'0';
 c[7]=b[4]='0';
 day=c[0]*10+c[1];
 year=c[2]*1000+c[3]*100+c[4]*10+c[5];
 month=c[3]*10+c[4];
 x=year/4;
 y=year*356+x+y;
 n=valid(day,month);
 if(a[0]==NULL||b[0]==NULL)
 {
  n=0;
 }
 if(n==1)
 {
 if(y%4==0||p==1||p==7)
 {
 printf("0");
 }
 else
 {
 printf("%ld",day);
}
}
else
{
printf("invalid input");
}
return 0;
}
 int weekday(char a,char b)
 {
  if(a=='s'||a=='S'&&b=='u'||b=='U')
  return 1;
  else if(a=='m'||a=='M'&&b=='o'||b=='O')
  {
  return 2;
  }
  else if(a=='t'||a=='T'&&b=='u'||b=='U')
  {
  return 3;
  }
  else if(a=='w'||a=='W')
  {
  return 4;
  }
  else if(a=='t'||a=='T'&&b=='h'||b=='H')
  {
  return 5;
  }
  else if(a=='f'||a=='F')
  {
  return 6;
  }
  else
  {
  return 7;
  }
 }
 long int valid( long int d,long int m)
 {
  if(d<=29&&m==02||d<=30&&m==04||d<=30&&m==06||d<=30&&m==9||d<=30&&m==11||d<=31&&m==1||d<=31&&m==3||d<=31&&m==5||d<=31&&m==7||d<=31&&m==8||d<=31&&m==10||d<=31&&m==12)
  return 1;
 }
