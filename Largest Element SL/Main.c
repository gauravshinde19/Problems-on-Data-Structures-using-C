/*
    Write a program which find the largest element from singly linear linked list.
*/

#include "Header.h"

////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : It is entry point function
//
////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 121);
    InsertFirst(&First, 11);

    iRet = Maximum(First);

    printf("Largest element from LinkedList : \n%d\n", iRet);

    return 0;
}
