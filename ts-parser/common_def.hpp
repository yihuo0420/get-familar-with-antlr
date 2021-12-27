#ifndef __COMMON_DEF_H__
#define __COMMON_DEF_H__

#include <string>
#include <vector>
#include "enum.h"
#include "common_macro.h"

namespace cyclone::parser
{
    Enum(SourceType,script,module);
    /**
     * NOTE shall be const which conflict with c++ keyword
     * 
     */
    Enum(VariableDeclarationKind,var,let,const_);

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