/*#include<stdio.h>
int main(){
    int i;

for (i = 1; i < 6; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
return 0;
}

#include <stdio.h>

void main()
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <n; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    getch();
}

#include<stdio.h>
void main(){
int i,myNumbers[] = {22,4,55,2,9};

for(i=0;i<5;i++){
printf("%d\t=\t%d\n", i, myNumbers[i]);
}

getch();
}

#include<stdio.h>
void main(){
int i,myNumbers[] = {22,4,55,2,9};

for(i=0;i<5;i++){
printf("%d\t=\t%d\n", i, myNumbers[i]);
}

getch();
}

#include<stdio.h>
void main()
{

    int arr[5];
     int i,sum=0;
    printf("Enter 5 elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    if(arr[i]%2==0)
        sum+=arr[i];
    }
    printf("%d\n",sum);
getch();
}

#include<stdio.h>
void main()
{

    int arr[]={2,3,4,5,6,7,9,8};
     int i,sum=0,s;
    printf("Enter elements: ");
    s= sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",s);
getch();
}


#include<stdio.h>
void main()
{
    int arr[5];
    int i,max;
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max)max=arr[i];
    }
    printf("Maximum element is %d",max);


getch();
}


#include<stdio.h>
void main()
{
    int arr[5];
    int i,min;
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Minimum element is %d",min);


getch();
}

#include<stdio.h>
void main()
{

    int arr[5];
     int i,sum=0;
    printf("Enter 5 elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    if(arr[i]%2==0)
    printf("%d\n",arr[i]);
    }
getch();
}

#include<stdio.h>
void main()
{

    int arr[5];
    int i,j,temp;
    for(int u=0;u<5;u++){
        scanf("%d",&arr[u]);
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}

*/
#include<stdio.h>
void main()
{
int i,j;
    int arr[3][3];
    printf("Enter 9 elements: ");

    for(i=0; i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("The 2d array is\n");

    }
    for(i=0; i<3; i++)
    {
        for(i=0; i<3; i++){
        printf("%d\t",arr[i][j];
        }
    }
    getch();
}















