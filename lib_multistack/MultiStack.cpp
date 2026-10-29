// Copyright 2026 Ksenia Kh

#include "../lib_multistack/MultiStack.h"

template <class T>
MultiStack<T>::MultiStack(size_t count, size_t size) : _count(0), _size(size) {
    _data = new T[_size];
    _top = new T[_count];
    _L = new T[_count];
    _R = new T[_count];
}

template <class T>
MultiStack<T>::MultiStack(const MultiStack& other) : _count(other.count), _size(other._size), {
    _data = new T[_size];
    _top = new T[_count];
    _L = new T[_count];
    _R = new T[_count];
    for (size_t i = 0; i < _size; ++i) {
        _data[i] = other._data[i];
        _top[i] = other._top[i];
        _L[i] = other._L[i];
        _R[i] = other._R[i];
    }
}

template <class T>
MultiStack<T>::~MultiStack() {
    delete[] _data;
    delete[] _top;
    delete[] _L;
    delete[] _R;
}

template <class T>
void MultiStack<T>::push(size_t number, const T& element) {
    if (is_full()) {
        reset();
    }
    size_t len = _size / _count;
    _top[number]++;
    _data[_top[number] = element;
    _val++;
}

template <class T>
T MultiStack<T>::pop(size_t number) {
    _top[number]--;
    _val--;
};

template <class T>
T& MultiStack<T>::top(size_t number) {
    return _data[_top[number]]
};

template <class T>
bool MultiStack<T>::is_emphy() const noexcept {
    return _val = 0;
};

template <class T>
bool MultiStack<T>::is_full() const noexcept {
    return _val == _size;
};

template <class T>
bool MultiStack<T>::is_emphy(size_t number) const noexcept {
    return _top[number] < _L[number];
};

template <class T>
bool MultiStack<T>::is_full(size_t number) const noexcept {
    return _top[number] > _R[number];
};

template <class T>
void MultiStack<T>::reset(size_t size) noexcept {
    
};