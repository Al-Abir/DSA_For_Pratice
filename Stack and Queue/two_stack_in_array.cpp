#include <iostream>
using namespace std;

class twoStacks {
    int *arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int data) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = data;
        } else {
            cout << "Stack 1 is Overflow\n";
            exit(1);
        }
    }

    void push2(int data) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = data;
        } else {
            cout << "Stack 2 is Overflow\n";
            exit(1);
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int popped = arr[top1];
            top1--;
            return popped;
        } else {
            cout << "Stack 1 is Empty\n";
            exit(1);
        }
    }

    int pop2() {
        if (top2 < size) {
            int popped = arr[top2];
            top2++;
            return popped;
        } else {
            cout << "Stack 2 is Empty\n";
            exit(1);
        }
    }
};

int main() {
    twoStacks ts(5);

    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Popped element from stack1 is " << ts.pop1() << endl;
    cout << "Popped element from stack2 is " << ts.pop2() << endl;

    return 0;
}
