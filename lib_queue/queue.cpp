// Copyright 2026 Ksenia Kh

#include "../lib_queue/queue.h"

#include <stdexcept>

template <class T>
Queue<T>::Queue(size_t size) :
    _size(size + 1),
    _data(new T[size + 1]),
    _front(0),
    _back(0) {
}

template <class T>
Queue<T>::Queue(const Queue& other) :
    _size(other._size),
    _data(new T[other._size]),
    _front(other._front),
    _back(other._back) {
    for (size_t i = 0; i < _size; ++i) {
        _data[i] = other._data[i];
    }
}

template <class T>
Queue<T>::~Queue() {
    delete[] _data;
}

template <class T>
size_t Queue<T>::size() {
    return (_back - _front + _size) % _size;
}

template <class T>
T& Queue<T>::front() {
    if (is_emphy()) {
        throw std::out_of_range("queue is empty");
    }
    return _data[_front];
}

template <class T>
bool Queue<T>::is_full() {
    return (_back + 1) % _size == _front;
}

template <class T>
bool Queue<T>::is_emphy() {
    return _front == _back;
}

template <class T>
void Queue<T>::push(const T& value) {
    if (is_full()) {
        throw std::overflow_error("queue is full");
    }
    _data[_back] = value;
    _back = (_back + 1) % _size;
}

template <class T>
T Queue<T>::pop() {
    if (is_emphy()) {
        throw std::underflow_error("queue is empty");
    }
    T value = _data[_front];
    _front = (_front + 1) % _size;
    return value;
}
