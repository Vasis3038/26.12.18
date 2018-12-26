//Реализуйте метод секущих вычисления корня уравнения.


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double func(double A)
  {
    return 1*A*A+3*A-18;
  }

double searchb (double a, double b, double c)
 {
    while(fabs(b-a)>c)
        {
        a=b-(b-a)*func(b)/(func(b)-func(a));
        b=a+(a-b)*func(a)/(func(a)-func(b));
        }
    return b;
}
int main()
{
    double A1,A2,c;

    scanf("%d",&A1);
    scanf("%d",&A2);
    scanf("%d",&c);

    return 0;
}
