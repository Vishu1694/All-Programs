#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};
int main(){
	car c;
	printf("\nEnter the name of car -> ");
	scanf("%s",&c.name);
	printf("\nEnter the seats -> ");
	scanf("%d",&c.seats);
	printf("Enter the price of car -> ");
	scanf("%f",&c.price);
	printf("%s%d%f",c.name,c.seats,c.price);
	return 0;
}
