#include <stdio.h>
#include <stdlib.h>
 
/* A utility function to calculate area of triangle formed by (x1, y1), 
   (x2, y2) and (x3, y3) */
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
 
/* A function to check whether point P(x, y) lies inside the triangle formed 
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
int isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{   
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);
 
   /* Calculate area of triangle PBC */  
   float A1 = area (x, y, x2, y2, x3, y3);
 
   /* Calculate area of triangle PAC */  
   float A2 = area (x1, y1, x, y, x3, y3);
 
   /* Calculate area of triangle PAB */   
   float A3 = area (x1, y1, x2, y2, x, y);
   
   /* Check if sum of A1, A2 and A3 is same as A */
   if (A == A1 + A2 + A3)
	return 1;
	else
	return 0;
	
}
 
/* Driver program to test above function */
int main()
{
   /* Let us check whether the point P(10, 15) lies inside the triangle 
      formed by A(0, 0), B(20, 0) and C(10, 30) */
   int x1,y1,x2,y2,x3,y3;
   scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
if((x1==x2 && x1==x3)||(y1==y2)&&(y1==y3))
	printf("No");
else
{	   
	   

	

if(isInside(x1,y1,x2,y2,x3,y3,0,0))
     printf ("Yes");
   else
     printf ("No");
 }
   return 0;
}
