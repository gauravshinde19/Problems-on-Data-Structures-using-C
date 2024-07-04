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
// Function Name : SearchFirstOcc
// Description   : It takes First pointer of linked list and one integer as input and return first occurence of that integer in LinkedList
// Input         : Address of First pointer , Integer 
// Output        : Integer
// Author        : Gaurav Mahadev Shinde
// Date          : 4th July 2024
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head, int iNo)
{
    PNODE Temp = Head;
    int iCnt = 1;

    while (Temp != NULL)
    {
        if ((Temp->Data) == iNo)
        {
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }
    if (Temp == NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
