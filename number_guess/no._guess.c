#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

int main() {
    char willu;
    int howmany, ok;
    system("cls");
    printf("Hi This is a number guessing game!");
    Sleep(3000);
    system("cls");
    do{
    system("cls");
    printf("\n1 = 1 - 10\n2 = 1 - 100\n3 = 1 - 1000");
    printf("\nWith what range of numbers would u like to play: ");
    scanf("%d", &howmany);
    } while (howmany >= 4 || howmany < 1);
    
    switch (howmany)
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
    }
    do
    {
    system("cls");
    int num, geuess, attempts = 0;
    srand(time(0));
    num = rand() % ok + 1;

    do
    {
    system("cls");
    printf("Input your guess: ");
    scanf("%d", &geuess);
    attempts++;

    if (geuess > num) {
        printf("Too high\n");
        Sleep(500);
    }
    else if (geuess < num) {
        printf("Too low\n");
        Sleep(500);
    }
    else{
        printf("Congratulations you guessed the right number in %d attempts.", attempts);
    }
    
    
    } while (geuess != num);

    printf("\nDo you wanna play again [y/n]: ");
    scanf(" %c", &willu);
    } while (willu == 'y');

    printf("\nEnter to exit...");
    getch();
    
    return 0;
}