#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MyCircularDeque
{
public:
    deque<int> dq;
    int n;
    MyCircularDeque(int k)
    {
        n = k;
    }

    bool insertFront(int value)
    {
        if (dq.size() < n)
        {
            dq.push_front(value);
            return 1;
        }
        return 0;
    }

    bool insertLast(int value)
    {
        if (dq.size() < n)
        {
            dq.push_back(value);
            return 1;
        }
        return 0;
    }

    bool deleteFront()
    {
        if (dq.size() > 0)
        {
            dq.pop_front();
            return 1;
        }
        return 0;
    }

    bool deleteLast()
    {
        if (dq.size() > 0)
        {
            dq.pop_back();
            return 1;
        }
        return 0;
    }

    int getFront()
    {
        if (dq.size() > 0)
        {
            return dq.front();
        }
        return -1;
    }

    int getRear()
    {
        if (dq.size() > 0)
        {
            return dq.back();
        }
        return -1;
    }

    bool isEmpty()
    {
        return dq.empty();
    }

    bool isFull()
    {
        return dq.size() == n;
    }
};