// Copyright 2026 Ksenia Kh

#ifndef LIB_MULTISTACK_MULTISTACK_H_
#define LIB_MULTISTACK_MULTISTACK_H_

#include <iostream>

template <class T>
class MultiStack {
    size_t _count;
    size_t _size;
    size_t val;
    T* _data;
    size_t* _L;
    size_t* _R;
    size_t* _top;

public:
    MultiStack(size_t size, size_t count);
    MultiStack(const MultiStack& other);
    ~MultiStack();

    void push(size_t number, const T& element);
    T pop(size_t number);
    T& top(size_t number);

    bool is_emphy() const noexcept;
    bool is_full() const noexcept;

    bool is_emphy(size_t) const noexcept;
    bool is_full(size_t) const noexcept;

    void reset_memory(size_t size) noexcept;
};

#endif  // LIB_MULTISTACK_MULTISTACK_H_