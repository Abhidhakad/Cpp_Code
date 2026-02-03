#include <stdio.h>

#define MAX 100

// get Length
int getLength(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
        i++;
    return i;
}

void insertAtFront(char arr[], char ch)
{
    int n = getLength(arr);

    if (n >= MAX - 1)
    {
        printf("String overflow");
        return;
    }

    for (int i = n; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = ch;
}

void insertAtEnd(char arr[], char ch)
{
    int n = getLength(arr);

    if (n >= MAX - 1)
    {
        printf("Memory overflow: \n");
        return;
    }

    arr[n] = ch;
    arr[n + 1] = '\0';
}

// position is 1 based
void insertAtPos(char arr[], char ch, int pos)
{
    int n = getLength(arr);
    if (pos < 0 || pos > n)
    {
        printf("nvalid position\n");
        return;
    }
    if (n >= MAX - 1)
    {
        printf("overflow: Array full\n");
        return;
    }

    for (int i = n; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = ch;

    printArr(arr);
}

void deleteFromFront(char arr[])
{
    int n = getLength(arr);

    if (n == 0)
    {
        printf("Array is Underflow:\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void deleteFromEnd(char arr[])
{
    int n = getLength(arr);
    if (n == 0)
    {
        printf("array underflow\n");
        return;
    }
    arr[n - 1] = '\0';
}

void deleteAtPos(char arr[], int pos)
{
    int n = getLength(arr);
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void updateAtPosition(char arr[], char ch, int pos)
{
    int n = getLength(arr);

    if (pos < 0 || pos >= n)
    {
        printf("Invalid position\n");
        return;
    }
    arr[pos] = ch;
}

void printArr(char arr[])
{
    int n = getLength(arr);
    printf("Current string: %s\n", arr);
}

int main()
{

    char arr[MAX] = "Abhishek";
    int choice, pos;
    char ch;
    do
    {
        printf("\n---- MENU ----\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Front\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Update at Position\n");
        printf("8. Display\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: /* insert front */
            break;
        case 2: /* insert end */
            break;
        case 9:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 9);

    return 0;
}
