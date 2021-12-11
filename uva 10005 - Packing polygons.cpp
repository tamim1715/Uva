#include <stdio.h>
#include <math.h>
#define sqr(A) ((A)*(A))
main()
{
long n, i,xp,yp,x,y;
double r, xc, yc;

while (scanf ("%d\n",&n))
{
if (n==0) break;
scanf ("%ld %ld\n",&x,&y);
for (xc=x,yc=y,i=1;i<n;i++) {
scanf ("%ld %ld\n",&xp,&yp);
xc+=xp; yc+=yp;
}
xc/=n; yc/=n;
scanf ("%lf\n",&r);
if (sqrt (sqr(xc-x) + sqr(yc-y)) <= r)
printf ("The polygon can be packed in the circle.\n");
else
printf ("There is no way of packing that polygon.\n");
}
}
