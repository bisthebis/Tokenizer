#ifndef MATHTOKENIZER_H
#define MATHTOKENIZER_H

#include <QString>
#include <QRegularExpression>
#include <QPair>

class MathTokenizer
{
    public:
        MathTokenizer();
        static QPair<bool, int> isNumber(const QString& src);

};

#endif // MATHTOKENIZER_H
