#ifndef __COMMON_DEF_H__
#define __COMMON_DEF_H__

#include <string>
#include <vector>

namespace cyclone::parser
{

    using StringList = std::vector<std::string>;
    class CommonDef
    {
    public:
        static std::string ruleName(int idx);
        static std::string tokenType(int idx);

    private:
        static const StringList ruleNames_;
        static const StringList tokenTypes_;
    };

} // namespace cyclone::parser

#endif // __COMMON_DEF_H__