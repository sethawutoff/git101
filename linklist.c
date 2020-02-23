//6210450784 Sethawut Pornsiripiyakul
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}list;

void swap(list *x, list *y)
{
    int z = x->data;
    x->data = y->data;
    y->data = z;
}

int main() 
{
    int input,count;
    list *head = NULL, *second = NULL, *tmp, *first,*prev = NULL;
    while(scanf("%d",&input) == 1){
        if (input == -1){
            break;
        }
        else if (input >= 0){
            if (head == NULL){
                head = second =(list *)malloc(sizeof(list));
            }
            else{
                second->next = (list *)malloc(sizeof(list));
                second = second->next;
            }
            second->data = input;
            second->next = NULL;
            count = 1;
            while(count){
                count = 0;
                first = head;
                while (first->next != prev)
                {
                    if (first->data > first->next->data)
                    {
                        swap(first,first->next);
                        count = 1;
                    }
                    first = first->next; 
                }
                prev = first;
            }
            prev = NULL;
        }
    }
    for(tmp = head;tmp;tmp = tmp->next){
        printf("%d\n",tmp->data);
    }
}