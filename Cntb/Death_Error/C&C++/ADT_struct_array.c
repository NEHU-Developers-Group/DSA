#include<stdio.h>
#include<stdlib.h>

struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void CreateArray(struct MyArray * a, int tSize, int uSize){

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize * sizeof(int));
}

void ShowArray(struct MyArray * a){

    for(int i = 0;i<(a->used_size);i++){

        printf("%d\n",(a->ptr)[i]);
    }

}

void SetArray(struct MyArray * a){

    for(int i = 0;i<(a->used_size);i++){

        printf("Enter the value %d: ",i+1);
        scanf("%d",&(a->ptr)[i]);
    }
}


int main(){

    struct MyArray marks;
    CreateArray(&marks,10,2);
    SetArray(&marks);
    ShowArray(&marks);

}