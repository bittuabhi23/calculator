#include<stdio.h>
#include<math.h>
int sum()
{
int sum=0,a,n,i=0;                   
printf("How many numbers u want to add :");                 
scanf("%d",&n);
for(;i<n;i++)
{
	printf("Enter %d number",i+1);               
	scanf("%d",&a);
	sum+=a;
}
printf("Sum  %d",sum);
return 0;
}



int sub()
{
int sub,b,l=0,s=0;
printf("How many number u want to substract  :");
scanf("%d",&b);
for(;l<b;l++)
{  	
	printf("Enter %d number",l+1);
	if(l==0)
	scanf("%d",&sub);	                         
	else	
	scanf("%d",&s);
	sub-=s;
}
printf("sub %d ",sub);
return 0;
}



int mult()
{
int mult=1,c,k=0,m;
printf("How many number u want to Multiplication  :");
scanf("%d",&c);
for(;k<c;k++)
{  
           printf("Enter %d number",k+1);               
	   scanf("%d",&m);
	   mult*=m;
}
printf("multiplication %d ",mult);
return 0;
}


int div()
{
int d,j=0,n=1,div;
printf("How many number u want to Division :");
scanf("%d",&d);
for(;j<d;j++)
{  
           printf("Enter %d number",j+1); 
	if(j==0)
	scanf("%d",&div);
	else              
	   scanf("%d",&n);
	   div/=n;
}
printf("Divide %d ",div);
return 0;
}

int power()
{
int base,expo;
int pow=1;
printf("enter the base: ");
scanf("%d",&base);
printf("enter expo ");
scanf("%d",&expo);
while(expo!=0)
{
pow*=base;
--expo;
}
printf("power %d ",pow);
return 0;
}


int main()
{
int ch;
printf("1.Sum");
printf("\n2.substract");
printf("\n3.Multiplication");
printf("\n4.Divide");
printf("\n5.power :");
printf("\nEnter your choice");
scanf("%d",&ch);
while(ch<6)
{
	switch(ch)
	{
		case 1 :sum();
        	break;
		case 2 :sub();
		break;
		case 3 :mult();
		break;
		case 4 :div();
		break;
		case 5: power();
		break;
}
	printf("Enter ur choice");
	scanf("%d",&ch);
}
}


