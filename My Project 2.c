//#include<stdio.h>
//int main()
//{
//int a,b,c,d,e;
/*printf("Enter The Base and Height: ",b ,h);
  scanf("%d %d",&b,&h);

  a = .5 * b * h;

printf("%d",a);*/

/*scanf("%d %d",&a,&b);
c = ++a - b;
printf("a= %d, b= %d, c= %d\n",a,b,c);
d = b++ +a;
printf("a= %d, b= %d, d= %d",a,b,d);*/

/*printf("Enter Two Numbers: ");
scanf("%d %d",&a,&b);
c = (a > b)?a:b;

printf("Result is %d", c);*/


/*printf("Enter Two Numbers: ");
    scanf("%d",&a);
  c = (a % 2)?printf("odd"):printf("even");

    printf(" Number is %d\n", c);


// printf("%d", 9-(12/(3+3)*2)-1);

getch();
}*/

/*#include<math.h>
    int main()
    {
        int a,b,c,d;
        a = sqrt(16);
        b = pow(8,2);
        c = ceil(16.5);
        d = floor(15.5);
        printf("a= %d\nb= %d\nc= %d\nd= %d",a,b,c,d);
        getch();

    }*/
/* #include<stdio.h>
 int main(){

int a,b,c;
 float d;
 scanf("%d %d %d",&a, &b,&c);
 d = (a+b+c)/3 ;
 printf("%.2f",d);


 float a,b,c,d,e,f,g;
 scanf("%f %f",&a, &b);
d = 1500.00;
e= a*200.00;
f=  a * b* 0.2;

 g = d+e+f ;
 printf("%.2f",g);

getch();
}

#include<stdio.h>
int main(){

int a,b,c;
printf("Enter The Number: ");
scanf("%d",&a);
if(a%2==0) {
 printf("The Number Is Even");
}
else {
 printf("The Number Is odd");
}
return 0;

}

#include<stdio.h>
int main(){

int a,b,c;
printf("Enter The Number: ");
scanf("%d",&a);
if( a >= 0) {
 printf("The Number Is Positive");
}
else {
 printf("The Number Is Negative");
}
return 0;

}

#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter The Numbers: ");
    scanf("%d %d",&a,&b);
    if( a != b)
    {
        printf("a & b isn't Equal\n");
        if( a > b)
        {

            printf("a is big Number\n");
        }
        else
        {
            printf("b is big number\n");
        }
    }
    else
    {
        printf("a & b is equal\n");
    }
    return 0;

}

#include<stdio.h>
int main(){

int a,b,c;
printf("Enter The Number: ");
scanf("%d %d %d",&a,&b,&c);
if( a < b && a < c) {
    printf("%d is small number", a);
}
else if ( b < c) {
    printf("%d is small number",b);
}

else {
    printf("%d Is small number",c);
}
return 0;

}

#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter The year: ");
    scanf("%d",&a);
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("%d year is leap year", a);
    }
    else
    {
        printf("%d year is not leap year",a);
    }
    return 0;

}

#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    printf("Enter The Number: ");
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);

    f =((a + b + c + d + e)/500) * 100 ;

    if( f >= 90)
    {
        printf("Grade A",a);
    }
    else if ( f>=80)
    {
        printf("Grade B",b);
    }
    else if ( f >= 70)
    {
        printf("Grade C",c);
    }
    else if (f>= 60)
    {
        printf("Grade D",d);
    }
    else if (f>=50)
    {
        printf("Grade E",e);
    }
    else
    {
        printf("Grade F");
    }
    return 0;

}

#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("Enter two numbers\n");
    scanf("%f %f", &a,&b);

    printf("Enter operators\n");
    scanf(" %c",&op);

    switch (op)
    {


    case ' +' :
        printf("%.1f + %.1f=%.1f\n",a,b,a+b);
        break;

    case ' -' :
        printf("%.1f - %.1f= %.1f\n",a,b,a-b);
        break;
    case ' *' :
        printf("%.1f * %.1f=%.lf\n",a,b,a*b);
        break;

    case ' /' :
        printf("%.1f / %.1f=%.1f\n",a,b,a/b);
        break;
    default:
        printf("The operator is wrong");

    }


    return 0;

}
*/
#include<stdio.h>
int main(){
         float bill,unit;
         scanf("%f", &unit);

bill =(100 *  0.5);
bill = 100 + .65(unit - 200);
bill = 230 + .80(unit - 400);
bill = 390 + 1.0 (unit - 600);
printf("%f", bill);
return 0;
}

