#include "BadFromString.h"

BadFromString::BadFromString(const std::string& __arg) : runtime_error(__arg) {}
