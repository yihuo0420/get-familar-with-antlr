#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define PLACEHOLDER(NodeTypeName)                  \
    template <typename T, auto member = &T::visit> \
    struct NodeTypeName                            \
    {                                              \
        std::string type = #NodeTypeName;          \
        using PlaceholderType = std::invoke_result_t<decltype(member), T>;

#define plus(x) return x * x;