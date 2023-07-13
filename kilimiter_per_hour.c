#include <stdio.h>
int main() {
double s, t, d;//s=speed,t=time,d=distance
printf("The distance you travelled (km): ");
scanf("%lf", &d);
printf("Enter the number of hours spent.: ");
scanf("%lf", &t);
s= d / t;
t= d / s;
d= s * t;
printf("Speed: %.2lf km/h\n", s);
printf("Time taken: %.2lf hours\n", t);
printf("Distance traveled: %.2lf km\n", d);
return 0;
}
