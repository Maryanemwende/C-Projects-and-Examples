#include "main.h"

/**
 * main - Entry Point
 * Return: 0 on success
*/
int main()
{
    int top, choice;

    printf("ARRAY IMPLEMENTATION OF STACKS IN C\n\n");

    /*top = -1;*/ /*Initializing top to -1 indicates the stack is empty*/

    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice. Choose between 1-4: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push_operation();
            break;
        case 2:
            pop_operation();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;        
        default:
            printf("Invalid choice\n");
            break;
        }
        
    }while(choice != 4);
     
     return (0);
}