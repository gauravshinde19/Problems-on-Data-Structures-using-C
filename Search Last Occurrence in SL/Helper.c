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
// Function Name : SearchLastOcc
// Description   : It takes First pointer of linked list and one integer as input and return last occurence of that integer in LinkedList
// Input         : Address of First pointer , Integer 
// Output        : Integer
// Author        : Gaurav Mahadev Shinde
// Date          : 4th July 2024
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head, int iNo)
{
    int iCnt = 1;
    int iPos = 0;
    PNODE Temp = Head;

    while (Temp != NULL)
    {
        if (Temp->Data == iNo)
        {
            iPos = iCnt;
        }
        Temp = Temp->next;
        iCnt++;
    }
    if (iPos == 0)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}