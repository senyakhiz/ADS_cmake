// Copyright 2026 Ksenia Kh

#ifndef LIB_QUEUE_QUEUE_H_
#define LIB_QUEUE_QUEUE_H_

template <class T>
class Queue {
    size_t _size;
    T* _data;
    size_t _front;
    size_t _back;
 public:
     Queue(size_t size);
     Queue(const Queue& other);
     ~Queue();

     size_t size();
     T& front();

     bool is_full();
     bool is_emphy();

     void push(const T&);
     T pop();
};
#endif  // LIB_QUEUE_QUEUE_H_
