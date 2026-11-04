// Copyright 2026 Ksenia Kh

#ifndef LIB_VECTOR_VECTOR_H_
#define LIB_VECTOR_VECTOR_H_

#include <algorithm>
#include <cstddef>
#include "../lib_vector/memdata.h"

template <typename T>
class Vector {
    MemData<T> _mem;
    size_t _front;
    size_t _back;

 public:
    explicit Vector(size_t size = 0);
    Vector(std::initializer_list<T> arr);
    Vector(T* arr, size_t size);
    Vector(const Vector& other);
    Vector(Vector&& other) noexcept;
    ~Vector() = default;

    bool is_empty() const noexcept;
    bool is_full() const noexcept;

    size_t size() const noexcept;
    size_t capacity() const noexcept;
    T front() const;
    T back() const;

    T& front();
    T& back();

    size_t get_real_index(size_t front, size_t pos, size_t capacity);
    void resize_and_rearrange();

    void push_front(const T&) noexcept;
    void push_back(const T&) noexcept;
    void insert(const T&, size_t);

    bool should_shrink() const noexcept;
    void shrink_to_fit() noexcept;

    void pop_front();
    void pop_back();
    void erase(size_t);

    Vector& operator=(const Vector& other) noexcept;
    Vector& operator=(Vector&& other) noexcept;

    T operator[](size_t index) const noexcept;
    T& operator[](size_t index) noexcept;

    void push_front(const std::initializer_list<T>& values);
    void push_back(const std::initializer_list<T>& values);
    void pop_front(size_t count);
    void pop_back(size_t count);

    template <typename U> friend void sort(Vector<U>& vec);
    template <typename U> friend void shuffle(Vector<U>& vec);

    template <typename U>
    friend std::ostream& operator<<(std::ostream&, const Vector<U>&);
    template <typename U>
    friend std::istream& operator>>(std::istream&, Vector<U>&);
};

#endif  // LIB_VECTOR_VECTOR_H_
