#include "mathtokenizer.h"

MathTokenizer::MathTokenizer()
{

}

QPair<bool, int> MathTokenizer::isNumber(const QString &src)
{
    static QRegularExpression regex("^\\s*([0-9]+)\\s*$");
    auto match = regex.match(src);
    if (!match.hasMatch())
        return QPair<bool, int>(false, 0);
    else
        return QPair<bool, int>(true, match.captured().toInt());
}

QPair<bool, QString> MathTokenizer::isSymbol(const QString &src)
{
    static QRegularExpression regex("^([a-zA-Z_\\+\\-\\*\\/=\\?]+)$");
    auto match = regex.match(src);
    if (!match.hasMatch())
        return QPair<bool, QString> (false, "");
    else
        return QPair<bool, QString> (true, match.captured());
}
