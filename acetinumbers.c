#include <stdio.h>
#include <math.h>

int factorial(int n);
int isSquare(int num);

int main()
{
  int a,b,c,d;
  for(a=1;a<9;a++)
    {
      for(b=0;b<9;b++)
	{
	  for(c=0;c<9;c++)
	    {
	      for(d=0;d<9;d++)
		{
		  int sum = (int)pow((double)a,(double)factorial(4)) + (int)pow((double)b,(double)factorial(3)) + (int)pow((double)c,(double)factorial(2)) + (int)pow((double)d,(double)factorial(1));
		  int product = (int)pow((double)a,(double)factorial(4)) * (int)pow((double)b,(double)factorial(3)) * (int)pow((double)c,(double)factorial(2)) * (int)pow((double)d,(double)factorial(1));
		  if(isSquare(sum) && isSquare(product))
		    {
		      printf("%d%d%d%d\n",a,b,c,d);
		    }		  
		}
	    }
	}
    }
  return 0;
}

int factorial(int n)
{
  int c;
  int result = 1;
 
  for( c = 1 ; c <= n ; c++ )
    result = result*c;
 
  return ( result );
}

int isSquare(int num)
{
  //square checker
  double root = sqrt(num);
  if(root*root==num)
    {
      return 1;
    }
  return 0;
}
