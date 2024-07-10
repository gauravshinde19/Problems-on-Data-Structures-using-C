/*
    Write a program which find the smallest element from singly linear linked list.
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
    InsertFirst(&First, 5);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    iRet = Minimum(First);

    printf("Smallest element from LinkedList : \n%d\n", iRet);

    return 0;
}
