// Copyright 2026 Ksenia Kh

#ifndef LIB_STACK_ON_MASS_STACK_ON_MASS_H_
#define LIB_STACK_ON_MASS_STACK_ON_MASS_H_

#include <iostream>

template <class T>
class TStackOnMass {
    T* _data;
    size_t _size;
    size_t _top;

 public:
     TStackOnMass(size_t size);
     TStackOnMass(const TStackOnMass& other);
     ~TStackOnMass();

     void push(const T&);
     T pop();
     T& top();

     bool is_cuptu() const noexcept;
     bool is_full() const noexcept;

     bool check_breckets(std::string expression);
};


#endif  // LIB_STACK_ON_MASS_STACK_ON_MASS_H_
