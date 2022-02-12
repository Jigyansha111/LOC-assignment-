#include <stdio.h>
 
int main()
{
	//prgrm to enter radius and determine diameter, circumference and area
  float r,d,c,a;
  printf("enter radius of the circle\n");
  scanf("%f",&r);
  d=2*r;
  printf("diameter of the Circle is %f \n",d);
  c=2*3.14*r;
  printf("circumference of the Circle is %f \n",c);
  a=3.14*r*r;
  printf("area of the Circle is %f \n",a);
	return 0;
}
 
