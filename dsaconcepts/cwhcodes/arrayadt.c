#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a, int t, int u){
    (*a).totalSize=t;
    a->usedSize=u;
    a->ptr=(int *)malloc(t*sizeof(int));
}

void set(struct myArray *a){
    int q;
    for(int i=0; i< a->usedSize;i++){
        printf("enter num: ");
        scanf("%d",&q);
        (a->ptr)[i]=q;
    }
}

void print(struct myArray *a){
    for(int i=0; i< a->usedSize;i++){
        printf("%d",(a->ptr)[i]);
    }
}

int main(){
    struct myArray grades;
    createArray(&grades, 5, 4);
    set(&grades);
    print(&grades);
}