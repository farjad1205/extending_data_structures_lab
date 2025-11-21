#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <cassert>
using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> data;

public:
    void push(const T x)
    {
        data.push_back(x);
    }

    void pop()
    {
        data.pop_back();
    }

    T peek()
    {
        return data.back();
    }

    bool isEmpty()
    {
        return data.empty();
    }
};

template <typename U>
class Queue
{
private:
    deque<U> data;

public:
    void enqueue(const U x)
    {
        data.push_back(x);
    }
    void dequeue()
    {
        data.pop_front();
    }
    U front()
    {
        return data.front();
    }
    bool isEmpty()
    {
        return data.empty();
    }
};

template <typename V>
class Deque
{
private:
    deque<V> data;

public:
    void push_front(const V x)
    {
        data.push_front(x);
    }
    void push_back(const V x)
    {
        data.push_back(x);
    }
    void pop_front()
    {
        data.pop_front();
    }
    void pop_back()
    {
        data.pop_back();
    }
    V front()
    {
        return data.front();
    }
    V back()
    {
        return data.back();
    }
    bool isEmpty()
    {
        return data.empty();
    }
};

int main()
{
    Stack<int> s;
    s.push(1);
    assert(s.peek() == 1);
    s.push(2);
    assert(s.peek() == 2);
    s.pop();
    assert(s.peek() == 1);
    assert(!s.isEmpty());
    s.pop();
    assert(s.isEmpty());

    Queue<int> q;
    q.enqueue(10);
    assert(q.front() == 10);
    q.enqueue(20);
    assert(q.front() == 10);
    q.dequeue();
    assert(q.front() == 20);
    q.dequeue();
    assert(q.isEmpty());

    Deque<int> d;
    d.push_front(2);
    assert(d.front() == 2 && d.back() == 2);
    d.push_back(4);
    assert(d.front() == 2 && d.back() == 4);
    d.pop_front();
    assert(d.front() == 4);
    d.pop_back();
    assert(d.isEmpty());

    cout << "light work no reaction" << endl;
    return 0;
}