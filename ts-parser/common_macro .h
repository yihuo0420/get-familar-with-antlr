#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#include "enum.h"
#define PLACEHOLDER(NodeTypeName)                  \
    template <typename T, auto member = &T::visit> \
    struct NodeTypeName                            \
    {                                              \
        std::string type = #NodeTypeName;          \
        using PlaceholderType = std::invoke_result_t<decltype(member), T>;

#define plus(x) return x * x;
/**
 * NOTE The default limits are 64 constants in an enum and 23 characters for initialized constants 
 * Parameters in one macro definition - C++ standard: 256, Microsoft C++ compiler: 127.
 */
#define Enum(name, ...) BETTER_ENUM(name, short, __VA_ARGS__);
#define Switch(options, enumname) switch (options.uValue())
