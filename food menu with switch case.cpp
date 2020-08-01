#include<stdio.h>

int main()
{
    printf("Food Menu :\n");
	printf("1. Pizza\n-Price 450 rs\n2. Panipuri(golgappe)\n-Price 20 rs\n3. French Fries(peri peri)\n-Price 120 rs\n4. Burger\n-Price 100 rs\n5. Marshmallows\n-Price 60 rs\n\n");
	printf("Please choose your order from the menu :\n");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("You ordered pizza\n-Price 450 rs");
			break;
		case 2 :
			printf("You ordered Panipuri\n-Price 20 rs");
			break;
		case 3 :
			printf("You ordered French Fries(peri peri)\n-Price 120 rs");
			break;
		case 4 :
		    printf("You ordered Burger\n-Price 100 rs");
		    break;
		case 5 :
			printf("You ordered Marshmallows\n-Price 60 rs");
			break;
		Default :
			printf("invalid choice,please enter the valid number.");
			}
}
