#include<stdio.h>

int fact(int num)
{
int i, f = 1;
for(i=1;i<=num;i++)
{
    f = f * i;
}
return f;
}

double sin(int n,float angle)
{
    int i;
    double sigma =0;
    for(i=0;i<=n;i++)
    {
        int den = fact(2*i+1);
        sigma = (sigma) + ((pow(-1,i))*(pow(angle,2*i+1))/den);
    }
    return sigma;
}

int main()
{
    int num;
    float angle=0;
    printf("enter n \n");
    scanf("%d",&num);
    printf("enter angle in degrees\n");
    scanf("%f",&angle);
    angle = angle * 0.0174533;
    double sinx = sin(num,angle);
    printf("sin value : %lf",sinx);
    return 0;
}
