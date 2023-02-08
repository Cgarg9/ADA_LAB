#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <stack>

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < size - 1)
        {
            top += 1;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow\n";
        }
    }

    void pop(int element)
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack overflow\n";
        }
    }

    int peek(int element)
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty\n";
        }
    }
    bool isEmpty()
    {
        if (top < 0)
        {
            return true;
        }
        return false;
    }
};
void reverse(vector<int> &v, int i, int j)
{
    if (i >= j)
    {
        return;
    }
    swap(v[i], v[j]);
    reverse(v, i + 1, j - 1);
}

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    reverse(v, 0, v.size() - 1);
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    return 0;
}
