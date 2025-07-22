#include <stdio.h>
#include <string.h>

int main() {
    int money = 1000;
    int total = 0;
    char card[] = "harsha";
    char entered_card[20];
    int password = 1234;
    int entered_pin;
    int count = 3;

    printf("SecureATM\n");

    for (int x = 0; x < count; x++) {
        printf("\nNo. of ATM counts - %d\n", x);

        strcpy(entered_card, "harsha");
        entered_pin = 1234;

        if (strcmp(card, entered_card) == 0 && entered_pin == password) {
            while (total < money) {
                total += 100;
                printf("Money counting - %d\n", total);
            }
            printf("Total amount: %d\n", total);
            total = 0;
        } else {
            printf("Card or password incorrect!\n");
        }
    }


    char Atm_card[] = "card";
    char input_card[20];
    int pin = 1234;
    int input_pin;
    int Money = 1000;
    int Temp = 0;
    int outer = 1;

    strcpy(input_card, "card");
    input_pin = 1234;

    if (strcmp(input_card, Atm_card) == 0 && input_pin == pin) {
        if (outer == 1) {
            while (Temp <= Money) {
                printf("Count: %d  Total Amount: %d\n", Temp, Money);
                Temp += 100;
            }
            printf("Take your money: %d rupee\n", Money);
        } else {
            printf("Only one attempt is possible\n");
        }
    } else if (strcmp(input_card, Atm_card) == 0 || input_pin == pin) {
        printf("Any one value is wrong\n");
    } else {
        printf("Both values are wrong\n");
    }

    printf("\nThank you for using SecureATM C\n");

    return 0;
}
