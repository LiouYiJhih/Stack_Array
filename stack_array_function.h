#define MAX 10

// 計算stack元素數量
int count = 0;
// 紀錄stack狀態，不要列印stack元素
int tagFull = 0;
int tagEmpty = 0;

struct stack{
  int item[MAX];
  int top;
};
// initialize top (index)
void createStack(struct stack *s){
  s->top = -1;
}
// 判斷stack是否為空，若是(true)，相反則否(false)))
int IsEmpty(struct stack *s){
  if(s->top == -1)
  {
    return 1;
  }else{
    return 0;
  }
}
// 判斷stack是否為滿，若是(true)，相反則否(false)))
int IsFull(struct stack *s){
  // index (0 ~ MAX-1)
  if(s->top == MAX -1){
    return 1;
  }else{
    return 0;
  }
}

void push(struct stack *s, int newitem){
  if(IsFull(s)){
    printf("Stack is FULL!\n");
    tagFull = 1;  // Full狀態
  }else{
    s->top++;
    s->item[s->top] = newitem;
    count++;
    tagEmpty = 0; // Not Empty
  }
}

void pop(struct stack *s){
  if(IsEmpty(s)){
    printf("Stack is Empty!\n");
    tagEmpty = 1; // Empty狀態
  }else{
    printf("pop item is %d.\n", s->item[s->top]);
    s->top--;
    count--;
    tagFull = 0;  // Not Full
  }
}

void printfStack(struct stack *s){
  if((tagFull) || (tagEmpty)){
    printf("Stack is unusual!\n");
  }else{
    printf("Stack : ");
    for(int i = 0;i < count; ++i){
      printf("%d\t", s->item[i]);
    }
    printf("\n------------------------\n");
  }
}



