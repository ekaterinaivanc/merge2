#ifndef MERGE2_H
#define MERGE2_H

#include <cstddef>

template< class T >
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c, size_t capacity) {
  if (sa + sb > capacity) {
    return nullptr;
  }
  T* temp = new T[sa + sb];
  size_t i = 0;
  size_t j = 0;
  size_t id = 0;
  try {
    while (i < sa && j < sb) {
      if (a[i] < b[j]) {
        temp[id++] = a[i++];
      }
      else {
        temp[id++] = b[j++];
      }
    }
    while (i < sa) {
        temp[id++] = a[i++];
    }
    while (j < sb) {
        temp[id++] = b[j++];
    }
    for (size_t k = 0; k < id; ++k) {
      c[k] = temp[k];
    }
    delete[] temp;
    return c + id;
  } catch (...) {
      delete[] temp;
      throw;
  }
}

#endif
