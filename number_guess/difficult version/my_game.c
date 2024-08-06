#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

int main() {
    char willu;
    do
    {
    int num, ok, attempts = 0, guess, calculator;
    printf("Hi this is a number guessing game !");
    do{
    system("cls");
    printf("\nIn what range of numbers you want to play: \ninput 1 for - 1 - 10\ninput 2 for - 1 - 100\ninput 3 for - 1 - 1000\nyour input: ");
    scanf("%d", &ok);
    switch (ok)
    {
    case 1:
        ok = 10;
        break;
    case 2:
        ok = 100;
        break;
    case 3: 
        ok = 1000;
        break;
    default:
        ok = -1;
    }
    } while (ok == -1);

    srand(time(0));
    num = rand() % ok + 1;

    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if(guess > num){
            calculator = guess - num;
            if(calculator > 20){
                printf("TOO HIGH");
                Sleep(500);
            }
            else if(calculator < 20 && calculator > 10){
                printf("CLOSE BUT HIGH");
                Sleep(500);
            }
            else if(calculator <= 10) {
                printf("ur really CLOSE!");
                Sleep(500);
            }
            system("cls");
        }
        if(num > guess){
            calculator = num - guess;
            if(calculator > 20){
                printf("TOO LOW");
                Sleep(500);
            }
            else if(calculator < 20 && calculator > 10){
                printf("CLOSE BUT LOW");
                Sleep(500);
            }
            else if(calculator <= 10) {
                printf("ur really CLOSE!");
                Sleep(500);
            }
            system("cls");
        }
        
        // system("cls");
    }while(guess != num);
    system("cls");
    printf("You won with: %d attempts.\nNumber : %d\n",num, attempts);
    Sleep(2000);
    printf("Do you Want to play again[y/n]: ");
    scanf(" %c", &willu);
    } while (willu != 'n');
    printf("\nEnter to exit..");
    getch();

return 0;
}