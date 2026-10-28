// Copyright 2026 Ksenia Kh

#include <iostream>
#include "../lib_stack_on_mass/stack_on_mass.h"

template <class T>
TStackOnMass<T>::TStackOnMass(size_t size) : _size(size), _top(0) {
    _data = new T[_size];
}

template <class T>
TStackOnMass<T>::TStackOnMass(const TStackOnMass& other) : _size(other._size), _top(other._top) {
    _data = new T[_size];
    for (size_t i = 0; i < _top; ++i) {
        _data[i] = other._data[i];
    }
}

template <class T>
TStackOnMass<T>::~TStackOnMass() {
    delete[] _data;
}

template <class T>
void TStackOnMass<T>::push(const T& value) {
    if (is_full()) {
        throw std::overflow_error("Stack overflow");
    }
    _data[_top++] = value;
}

template <class T>
T TStackOnMass<T>::pop() {
    if (is_empty()) {
        throw std::underflow_error("Stack underflow");
    }
    return _data[--_top];
}

template <class T>
T& TStackOnMass<T>::top() {
    if (is_empty()) {
        throw std::underflow_error("Stack is empty");
    }
    return _data[_top - 1];
}

template <class T>
bool TStackOnMass<T>::is_cuptu() const noexcept {
    return _top == 0;
}

template <class T>
bool TStackOnMass<T>::is_full() const noexcept {
    return _top == _size;
}

template <class T>
bool TStackOnMass<T>::check_breckets(std::string expression) {
    size_t max_size = expression.length() > 0 ? expression.length() : 1;
    TStackOnMass<char> st(max_size);

    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (st.is_cuptu()) {
                return false;
            }
            char top_char = st.pop();
            if ((c == ')' && top_char != '(') ||
                (c == ']' && top_char != '[') ||
                (c == '}' && top_char != '{')) {
                return false;
            }
        }
    }
    return st.is_cuptu();
}

template <class T>
bool check_breckets(std::string expression) {
    
}