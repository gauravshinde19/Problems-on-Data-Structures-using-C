/*
    Write a program which search first occurrence of particular element from singly linear linked list.
    Function should return position at which element is found.
*/

#include "Header.h"

////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : It is entry point function
//
////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    printf("Enter a number that you want to search\n");
    scanf("%d", &iNo);

    iRet = SearchFirstOcc(First, iNo);

    if (iRet == -1)
    {
        printf("No such element present in Linked List\n");
    }
    else
    {
        printf("Element found at position : \n%d\n", iRet);
    }

    return 0;
}
