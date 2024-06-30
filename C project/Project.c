#include<stdio.h>
int main(){
	int choice, quantity;
    float price;

    printf("SWAGGERS ICE-CREAM STORE\n ");
    printf("Welcome to the Ice cream parlor!\n");
    printf("What would you like to order?\n");
    printf("1. Vanilla ice cream\n");
    printf("2. Chocolate ice cream\n");
    printf("3. Strawberry ice cream\n");
    printf("4. Keser-pista ice cream\n");
    printf("5. Shahi-Gulab ice cream\n");
    printf("6. Kulfi\n");
    printf("7. Butter-scotch ice cream\n");
    printf("Enter your choice (1-4)\n-->");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            price = 35.00;
            printf("You have selected vanilla ice cream.\n");
            break;
        case 2:
            price = 50.00;
            printf("You have selected chocolate ice cream.\n");
            break;
        case 3:
            price = 70.00;
            printf("You have selected strawberry ice cream.\n");
            break;
        case 4:
            price = 150.00;
            printf("You have selected Keser-pista ice cream.\n");
            break;
        case 5:
            price = 120.00;
            printf("You have selected Shahi-Gulab ice cream.\n");
            break;
        case 6:
            price = 40.00;
            printf("You have selected Kulfi.\n");
            break;
        case 7:
        	price =80.00;
        	printf("you have selected butter scotch ice cream.\n");
        	break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("How many scoops would you like?\n-->");
    scanf("%d", &quantity);

    float total_price = price * quantity;
    printf("Your total bill is Rs%.2f. Thank you for visiting Our Ice cream parlor!\n", total_price);
    printf("THANK YOU,VISIT AGAIN FOR YOUR LOVING ICE-CREAM TO ONE AND ONLY SWAGGERS ICE-CREAM STORE\n");
    return 0;
}