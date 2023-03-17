#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct user
{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};
int main()

{
    system("cls");
    system("color 3");
    struct user usr;
    FILE *fp;
    char filename[50], phone[50], pword[50];
    char cont = 'y';
    int opt, choice;

    printf("=====BANKING AUTHENTICATION SYSTEM====");
    printf("\n\nWhat do you want to do?\n");
    printf("\n1.Register an account ");
    printf("\n2.Login to account\n");
    printf("\nYour choice:\t");

    scanf("%d", &opt);
    if (opt == 1)
    {

        printf("Enter your account no:\t");
        scanf("%s", usr.ac);
        printf("Enter your phone no:\t");
        scanf("%s", usr.phone);
        printf("Enter your password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;
        strcpy(filename, usr.phone);
        fp = fopen(strcpy(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp);
        if (fwrite != 0)
        {
            printf("\n Account is successfully created");
        }
        else
        {
            printf("\n Something went wrong please try again later");
        }
        fclose(fp);
    }
    if (opt == 2)
    {
        printf("\nPhone Number:\t");
        scanf("%s", phone);
        printf("Password:\t");
        scanf("%s", pword);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".dat"), "r");
        if (fp = NULL)
        {
            printf("\n Account is not registered.");
        }
        else
        {
            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);
            if (!strcmp(pword, usr.password))
            {
                while (cont == 'y')
                {
                    printf("\nPress 1 for balance inquiry");
                    printf("\nPress 1 for depositing cash");
                    printf("\nPress 1 for online transfer");
                    printf("\nPress 1 for password change");

                    printf("\n Do you want to continue the transaction('Y/N')");
                    scanf("%s", &cont);
                }
            }
            else
            {
                printf("\nInvalid password");
            }
        }
    }

    return 0;
}