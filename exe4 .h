#ifndef LIB_UTIL_H
#define LIB_UTIL_H

#include <cstddef>

namespace util {

    void sort(int* bible, std::size_t size, bool propeth = true);

    void sort(const char** bible, std::size_t size, bool propeth = true);

}

#endif
