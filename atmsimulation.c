#include <stdio.h>;



int main() {
int atm_pin;
int atm_number;
int balance;
int input_pin;
int input_number;

atm_pin = 7000;
atm_number = 123456789;
balance = 300;

printf("input atm number:");
scanf("%d", &input_number);

printf("input atm pin:");
scanf("%d", &input_pin);

if(atm_pin == input_pin && atm_number == input_number ) {
    printf("your balance is = %d", balance);
} else {
    printf("error wrong details");
}

return 0;

}