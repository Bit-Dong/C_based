#include <stdio.h>
#include <stdlib.h>
// ������ų���
#define N 5
typedef struct node{
    int data;
    struct node * next;
}NODE;

// ������
NODE *fun(NODE *h){
    NODE *p, *q, *r;

    p=h;
    if(p==NULL){
        return NULL;
    }

    q=p->next;
    p->next=NULL;

    while(q){
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }

    return p;
}

// ��������
NODE *createlist(int a[]){
    NODE *h, *p, *q;
    int i;

    h=NULL;
    for(i=0; i<N; i++){
        q=(NODE *)malloc(sizeof(NODE));
        q->data=a[i];
        q->next=NULL;
        if(h==NULL){
            h=p=q;
        }else{
            p->next=q;
            p=q;
        }
    }
    return h;
}

// �������
void outlist(NODE *h){
    NODE *p;
    p=h;
    if(p==NULL){
        printf("The list is null!\n");
    }else{
        printf("\nHead");
        do
        {
            printf("->%d",p->data);
            p=p->next;
        }while(p!=NULL);
        printf("->End\n");
    }
}

int main()
{
    NODE *head;
    int a[N]={2,4,6,8,10};
    head=createlist(a);
    printf("\nThe original list is:\n");	// ת��ǰ
    outlist(head);
    head=fun(head);
    printf("\nThe list after inverting is:\n");		// ת����
    outlist(head);
    return 0;
}


