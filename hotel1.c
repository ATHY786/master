#include<stdio.h>
void main()
{
int sum=0,d,x,p,b,y,a,w,o,u,q;
char A,B,ch;
printf("\nWelcome\n");
printf("A. Vegetarian\n");
printf("B. Non-Vegetarian\n");
scanf("%c",&ch);
switch(ch){
case 'A':
printf("1. Dinner\n\n");
printf("2. Breakfast\n\n");
scanf("%d",&d);
if(d==1){
do{
printf("1. Rs.320 Paneer Maasala\n\n");
p=320;
printf("2. Rs.240 Paneer Bhurji\n\n");
b=240;
printf("3. Rs.420 Paneer Angara\n\n");
a=420;
scanf("\n%d",&x);
if(x==1){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+p)*q;
}
else if(x==2){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+b)*q;
}
else if(x==3){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+a)*q;
}
else 
{
printf("\nGive proper input\n");
break;
}
printf("\n1. Again\n");
printf("\n2. To order\n");
scanf("\n%d",&y);
}while(y==1);
}


if(d==2){
do{
printf("\n\n1. Rs.300 Paneer Tika\n\n");
p=300;
printf("\n2. Rs. 480 Paneer Kabab\n\n");
b=480;
printf("\n3. Rs. 190 Paneer Katlet\n\n");
a=190;
scanf("%d",&x);
if(x==1){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+p)*q;
}
else if(x==2){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+b)*q;
}
else if(x==3){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+a)*q;
}
else
{
printf("\nGive proper input\n");
break;
}
printf("\n1. Again want something to order\n\n");
printf("\n2. To order\n\n");
scanf("%d",&o);
}while(o==1);
}
break;


case 'B':
printf("\n1. Dinner\n");
printf("\n2. Breakfast\n");
scanf("%d",&w);
if(w==1){
do{
printf("\nWhat do You want in Dinner\n");
printf("\n1. Rs.520 Chicken Maasala\n");
p=520;
printf("\n2. Rs.540 Chicken Handi\n");
b=540;
printf("\n3. Rs.560 Chicken Mastani\n");
a=560;
scanf("%d",&x);
if(x==1){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+p)*q;
}
else if(x==2){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+b)*q;
}
else if(x==3){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+a)*q;
}
else
{
printf("\nGive proper input\n");
break;
}
printf("\n1. Again want something to order\n");
printf("\n2. To order\n");
scanf("%d",&y);
}while(y==1);
break;
}

if(w==2){
do{
printf("\nWhat do you want in breakfast\n");
printf("\n1. Rs.440 Chicken Lollipop\n");
p=440;
printf("\n2. Rs. 480 Chiken Kabab\n");
b=480;
printf("\n3. Rs. 445 Chicken Tiki\n");
a=445;
scanf("%d",&u);
if(u==1){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+p)*q;
}
else if(u==2){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+b)*q;
}
else if(u==3){
printf("Enter number of plates");
scanf("%d",&q);
sum=(sum+a)*q;
}
else
{
printf("\nGive proper input\n");
break;
}
printf("1. Again want something to order\n");
printf("2. To order\n");
scanf("%d",&y);
}while(y==1);
}
break;
}
sum=sum;
printf("\nThank You\n");
printf("\nYour order will come in 10 minutes\n");
printf("your Bill is\n");
printf("\nRs%d+100\n",sum);
printf("Inclusive of all taxes i.e Rs.100\n\n");
sum=sum+100;
printf("Your final bill is Rs.%d",sum);
printf("\n\n\n\n");
}


