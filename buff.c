#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    fgets(buff, sizeof(buff), stdin);  // ✅ Bounds-safe

    // fgets keeps '\n', strip it
    buff[strcspn(buff, "\n")] = '\0';

    if(strcmp(buff, "thegeekstuff") == 0)
    {
        printf("\n Correct Password \n");
        pass = 1;
    }
    else
    {
        printf("\n Wrong Password \n");
    }

    if(pass)
    {
        printf("\n Root privileges given to the user \n");
    }

    return 0;
}
