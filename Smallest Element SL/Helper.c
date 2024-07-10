#include "Header.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : InsertFirst
// Description   : It takes address of First pointer of linked list and one integer and insert that integer in the linked list 
// Input         : Address of First pointer , Integer 
// Output        : None
// Author        : Gaurav Mahadev Shinde
// Date          : 4th July 2024
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Minimum
// Description   : It takes value of First pointer of linked list and return smallest element of the LinkedList
// Input         : Value of First pointer
// Output        : Integer
// Author        : Gaurav Mahadev Shinde
// Date          : 4th July 2024
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->next;
    }

    return iMin;
}
