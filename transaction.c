#include <stdio.h>
#include <stdlib.h>

//Functions Declaration

void initializeAccount(void){
	
	accountBalance = 0.0;
}

void addGift(float giftAmount){
	accountBalance += giftAmount;
	printf("\nCongratulations!! A gift of $%.2f has been added to your account\n", giftAmount);
}

void askCustomer(void){
	printf("\nNext transaction please...\n");
	printf("\nEnter amount to credit (positive) or debit (negative):");
	scanf("%f", &amount);
}

void getBalance(void){
	printf("\nThe current balance in the account is: $%.2f\n", accountBalance);
}

void updateAccount(float amount){
	accountBalance += amount;
	printf("\nThe account was updated with $%.2f\n", amount);
	getBalance();
}

void thankYou(void){
	printf("-----Thank you-----");
}
