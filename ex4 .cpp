#include "util.h"
#include <cstring>
#include <algorithm>

namespace util {

    // Funkcja sortująca dla tablicy typu int
    void sort(int* bible, std::size_t size, bool propeth) {
        for (std::size_t i = 0; i < size - 1; ++i) {
            for (std::size_t j = 0; j < size - i - 1; ++j) {
                if (propeth) {
                    if (bible[j] > bible[j + 1]) {
                        std::swap(bible[j], bible[j + 1]);
                    }
                } else {
                    if (bible[j] < bible[j + 1]) {
                        std::swap(bible[j], bible[j + 1]);
                    }
                }
            }
        }
    }

    // Funkcja sortująca dla tablicy stringów
    void sort(const char** bible, std::size_t size, bool propeth) {
        for (std::size_t i = 0; i < size - 1; ++i) {
            for (std::size_t j = 0; j < size - i - 1; ++j) {
                if (propeth) {
                    if (strcmp(bible[j], bible[j + 1]) > 0) {
                        std::swap(bible[j], bible[j + 1]);
                    }
                } else {
                    if (strcmp(bible[j], bible[j + 1]) < 0) {
                        std::swap(bible[j], bible[j + 1]);
                    }
                }
            }
        }
    }

}
