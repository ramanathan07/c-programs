#include <stdio.h>
#define size 2
void push ();

void pop ();

void display ();

void
main () 
{
  
int s, c;
  
printf ("\n 1.push");
  
printf ("\n 2.pop");
  
printf ("\n 3.display\n");
  
  do
    {
      
printf ("enter your choice");
      
scanf ("%d", &c);
      
switch (c)
	
	{
	
case 1:
	  
push ();
	  
break;
	
case 2:
	  
pop ();
	  
break;
	
case 3:
	  
printf (" the content of stack are\t");
	  
display ();
	  
break;
	
default:
	  
printf ("invalid choice");
	  
break;
	
}
    
}
  while (c < 4);

 
}


 
int stack[size], top = -1, b, cn;

int c, res;

 
void
push () 
{
  
if (top >= size)
    {
      
printf ("stack is overflow");
      
return;
    
}
  
  else
    
    {
      
printf ("enter the number to pushed\n");
      
scanf ("%d", &b);
      
top++;
      
stack[top] = b;
      
printf ("the number pushed=%d\n", stack[top]);
      
return;
    
}

}


 
void
pop () 
{
  
if (top == -1)
    
    {
      
printf ("stack is underflow");
      
return;
    
}
  
  else
    
    {
      
res = stack[top];
      
top--;
      
printf ("the deleted number is=%d\n", res);
      
return;
    
}

}


 
void
display () 
{
  
int i;
  
if (top == -1)
    
    {
      
printf ("stack is underflow");
      
return;
    
}
  
for (i = top; i >= 0; i--)
    
    {
      
printf ("%d\n", stack[i]);
    
}

}
