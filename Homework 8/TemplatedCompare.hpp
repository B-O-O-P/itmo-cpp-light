
template<typename T, typename R>
bool compare(const T& first, const T& second, R (T::*method)() const) {
    return (first.*method)() < (second.*method)();
};