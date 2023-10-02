#include <stdio.h>
#include <stdlib.h>


int size, choice, element;


struct stack {
    int arr[100];
    int top;
} st;


void push(int element);
int pop();
int peek();
void display();


void push(int element) {
    if (st.top == size - 1) {
        printf("\n Stack is Full");
    } else {
        printf("\nEnter a Value: ");
        scanf("%d", &element);
        st.top = st.top + 1;
        st.arr[st.top] = element;
    }
}


int pop() {
    if (st.top == -1) {
        printf("\nStack is Empty");
        return -1; 
    } else {
        int out;
        out = st.arr[st.top];
        st.top--;
        return out;
    }
}

// Peek
int peek() {
    if (st.top == -1) {
        printf("\nStack is Empty");
        return -1; 
    } else {
        return st.arr[st.top];
    }
}


void display() {
    if (st.top == -1) {
        printf("No elements to Display");
    } else {
        int i;
        printf("Elements in the Stack:\n");
        for (i = st.top; i >= 0; --i)
            printf("%d\n", st.arr[i]);
    }
}

int main() {
    st.top = -1;
    printf("Enter a Stack size less than 100: ");
    scanf("%d", &size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(element); 
                break;
            case 2:
                printf("%d", pop());
                break;
            case 3:
                printf("%d", peek());
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\n\t EXIT Point");
                break;
            default:
                printf("\nEnter a correct choice (1,2,3,4,5)");
        }
    } while (choice != 5); 

    return 0;
}
