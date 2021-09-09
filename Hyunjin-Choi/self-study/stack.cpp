#include <stdio.h>
#include <string>

int push(int val);
int pop(int *val);

#define MAX_SIZE 100

typedef struct{
    int array[MAX_SIZE];
    int top;
}STACK;

/*
init : 초기화
is_full, is_empty : 스택 사이즈 체크
push : 최상단 요소 입력
pop : 최상단 요소 리턴
peek : 최상단 요소 확인
*/

void init(STACK *s){
   s->top = -1;
}

int is_empty(STACK *s){
    return (s->top == -1);
}

int is_full(STACK *s){
    return (s->top == MAX_SIZE);
}

void push(STACK *s, int item){
    if(is_full(s)){
        fprintf(stderr, "[push] : index is out of bounds");
        return;
    }
    else s->array[++(s->top)] = item;
}

int pop(STACK *s){
    if(is_empty(s)){
        fprintf(stderr, "[pop] :index is out of bounds");
        exit(1);
    }
    else return s->array[(s->top)--];
}

int peek(STACK *s){
    if(is_empty(s)){
        fprintf(stderr, "[peek] :index is out of bounds");
        exit(1);
    }
    else return s->array[s->top];
}

int main(){
    STACK s;
    int item = 1, num;
    init(&s);

    for(int i = 0; i < MAX_SIZE; i++){
        push(&s, i);
    }

    for(int i = 0; i < MAX_SIZE; i++){
        printf("%d ", pop(&s));
        if((i + 1) % 10 == 0) printf("\n");
    }
}