#include <stdio.h>
#include <string.h>
#define size 50

char stack[size];
int top = -1;

void push(char ch) {
  if (top == (size - 1)) {
    printf("Full Stack\n");
    return;
  }
  stack[++top] = ch;
  printf("%c Pushed Successfully !\n", stack[top]);
}

void pop() {
  if (top == -1) {
    printf("Empty-Stack\n");
    return;
  }
  printf("%c popped Successfully !\n", stack[top--]);
}

int main() {

  char input[size];
  printf("Enter the Expression: ");
  scanf("%[^\n]s", input);

  int matching = 1;

  for (int i = 0; i < strlen(input); i++) {
    if (input[i] == '(' || input[i] == '{' || input[i] == '[')
      push(input[i]);
    else if (input[i] == ')' || input[i] == '}' || input[i] == ']') {
      if (top == -1) {
        matching = 0;
        printf("Empty Stack !\n");
        break;
      }
      switch (input[i]) {
      case ')':
        if (stack[top] == '(')
          pop();
        else
          matching = 0;
        break;
      case '}':
        if (stack[top] == '{')
          pop();
        else
          matching = 0;
        break;
      case ']':
        if (stack[top] == '[')
          pop();
        else
          matching = 0;
        break;
      }
    }
  }
  if (top != -1)
    matching = 0; // After loop, the stack should be empty, but if not -1, then
                  // Unmatched!

  if (top == -1 && strlen(input) != 0) {
    printf("Ignoring the normal\n");
    matching = 0;
  }

  if (matching)
    printf("Your Expression is Correct !\n");
  else
    printf("Unmatched Expression\n");
  return 0;
}
