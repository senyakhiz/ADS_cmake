// Copyright 2026 Ksenia Kh

#ifndef LIB_VECTOR_MEMDATA_H_
#define LIB_VECTOR_MEMDATA_H_

#include <initializer_list>

#define MEM_STEP 15

size_t calculate_capacity(size_t size);

template <typename T> class Vector;

template <typename T> class MemData {
    T* _data;
    size_t _size;
    size_t _capacity;

public:
    explicit MemData(size_t size = 0);
    MemData(std::initializer_list<T> arr);
    MemData(const T* arr, size_t size);
    MemData(const MemData& other);
    MemData(MemData&& other) noexcept;
    ~MemData();

    bool is_empty() const noexcept;
    bool is_full() const noexcept;

    size_t size() const noexcept;
    size_t capacity() const noexcept;
    const T* const data() const noexcept;

    void set_memory(size_t size) noexcept;
    void reset_memory(size_t size, size_t start_index = 0) noexcept;
    void clear_memory() noexcept;

    MemData& operator=(const MemData& other) noexcept;
    MemData& operator=(MemData&& other) noexcept;

    void set_size_for_test(size_t new_size);

    template <typename U> friend class Vector;
};

#endif  // LIB_VECTOR_MEMDATA_H_