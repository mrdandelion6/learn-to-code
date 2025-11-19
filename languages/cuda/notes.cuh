#ifndef UTILS_CUH
#define UTILS_CUH

#include <algorithm>
#include <random>
#include <sstream>
#include <string>
#include <vector>

// return the first n elments of a vector in string
template <typename T>
std::string vector_head(const std::vector<T> &vec, size_t n = 5) {
    size_t limit = std::min(n, vec.size());
    std::string s = "[";
    for (size_t i = 0; i < limit; ++i) {
        s += std::to_string(vec[i]);
        if (i < limit - 1)
            s += ", ";
    }
    if (vec.size() > n)
        s += ", ...";
    s += "]";
    return s;
}

template <typename T>
std::string print_matrix(const std::vector<T> &vec, size_t m, size_t n) {
    std::ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < m; ++i) {
        oss << "[";
        for (size_t j = 0; j < n; ++j) {
            oss << std::to_string(vec[i * n + j]);
            if (j < n - 1) {
                oss << ", ";
            }
        }
        oss << "]";
        if (i < m - 1) {
            oss << ", ";
        }
    }
    oss << "]";
    return oss.str();
}

// generate random vector
template <typename T> std::vector<T> random_vector(size_t n, T min, T max) {
    static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>,
                  "T must be an integral or floating point type");

    std::random_device rd;
    std::mt19937 gen(rd());

    using dist_type = std::conditional_t<std::is_integral_v<T>,
                                         std::uniform_int_distribution<T>,
                                         std::uniform_real_distribution<T>>;

    dist_type dist(min, max);

    std::vector<T> result(n);
    for (auto &val : result) {
        val = dist(gen);
    }

    return result;
}
#endif // UTILS_CUH
