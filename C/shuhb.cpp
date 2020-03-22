#include<stdio.h>
struct car
{

int seats;
float price;
char name[50];
};
int main()
{
car mycar[3];
int i;
for(i=0;i<3;i++)
{
printf("\nenter for car[%d]:",i);
scanf("%s%d%.2f",&mycar[i].name,&mycar[i].seats,&mycar[i].price);
}
//printf(" name,seats,price:");

for(i=0;i<3;i++)
{
printf("%s%d%f",mycar[i].name,mycar[i].seats,mycar[i].price);
}
}
