#define MAX 10

// 為了印出stack內容
int count = 0;

struct stack{
  int item[MAX];
  int top;
};

void createEmptyStack(struct stack *s){
  s->top = -1;
}
// if trun is 1 
int IsEmpty(struct stack *s){
  if(s->top == -1)
  {
    return 1;
  }else{
    return 0;
  }
}
// if trun is 1
int IsFull(struct stack *s){
  if(s->top == MAX -1){
    return 1;
  }else{
    return 0;
  }
}

void push(struct stack *s, int newitem){
  if(IsFull(s)){
    printf("Stack is FULL!\n");
  }else{
    s->top++;
    s->item[s->top] = newitem;
  }
  count++;
}

void pop(struct stack *s){
  if(IsEmpty(s)){
    printf("Stack is Empty!\n");
  }else{
    printf("pop item is %d\n", s->item[s->top]);
    s->top--;
  }
  count--;
}

void printfStack(struct stack *s){
  
  if(IsEmpty(s)){
    printf("Stack is Empty!\n");
  }
  if(IsFull(s)){
    printf("Stack is FULL!\n");
  }
  
  printf("Stack : ");
  for(int i = 0;i < count; ++i){
    printf("%d\t", s->item[i]);
  }
  printf("\n");
}



