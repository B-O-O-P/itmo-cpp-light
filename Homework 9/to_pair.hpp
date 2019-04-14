#include <tuple>

template<size_t I, size_t J, class...Args>
auto to_pair(const std::tuple<Args...> t) -> decltype(std::make_pair(std::get<I>(t), std::get<J>(t))) {
    return std::make_pair(std::get<I>(t), std::get<J>(t));
};