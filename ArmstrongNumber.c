#include<stdio.h>  
 int main()    
{    
int num,r,add=0,t;    
printf("enter the number=");    
scanf("%d",&n);    
t=num;    
while(n>0)    
{    
r=n%10;    
add=add+(r*r*r);    
num=num/10;    
}    
if(t==add)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
