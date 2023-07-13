#include <stdio.h>
int main() {
int select;
double h, w, r, a; // h=height, w=width, r=radius, a=area
printf("Choose one option:\n");
printf("1= Square\n");
printf("2= Triangle\n");
printf("3= Circle\n");
printf("Enter your select (1 to 3): ");
scanf("%d", &select);
if (select == 1) {
printf("Enter the square's width: ");
scanf("%lf", &w);
a = w * w;
printf("Square's size: %.2lf\n", a);
} else if (select == 2) {
printf("Enter the triangle's width: ");
scanf("%lf", &w);
printf("Enter the triangle's height: ");
scanf("%lf", &h);
a = 0.5 * w * h;
printf("Triangle's surface area: %.2lf\n", a);
} else if (select == 3) {
printf("Enter the radius of the circle: ");scanf("%lf", &r);
a = 3.14 * r * r;
printf("Area of the circle: %.2lf\n", a);
} else {
printf("Invalid select!\n");
}
return 0;
}