#ifndef _236360_1_
#define _236360_1_

#include <string>

namespace output
{
    extern const std::string rules[];

    /**
     * Function to print the rule of which we made "reduce" for.
     *
     * @param ruleno The serial number of the rule.
     */
    void printProductionRule(const int ruleno);

    /**
     * Function to print when an a lexical error occures.
     *
     * @param lineno Line number of the error in the code.
     */

    void errorLex(const int lineno);
    /**
     * Function to print when an a syntax error occures.
     *
     * @param lineno Line number of the error in the code.
     */
    void errorSyn(const int lineno);
};

#endif // _236360_1_
