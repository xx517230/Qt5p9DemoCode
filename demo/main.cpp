#include <iostream>
#include <QString>
#include <QRegularExpression>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QString str="abc.";
    QString destStr="123 abc1";
    QRegularExpression re;
    re.setPattern(str);

    QRegularExpressionMatch match = re.match(destStr);

    if (match.hasMatch()) {
        QString matched = match.captured(0); // matched == "23 def"
        qDebug()<<matched;//"23 def"
    }
    re.setPattern(R"(^(\d\d)/(\d\d)/(\d\d\d\d)$)");

    match = re.match("08/12/1985");
    if (match.hasMatch()) {
        QString matched = match.captured(0);
        QString day = match.captured(1); // day == "08"
        QString month = match.captured(2); // month == "12"
        QString year = match.captured(3); // year == "1985"
        qDebug()<<matched;
        qDebug()<<day;//"08"
        qDebug()<<month;//"12"
        qDebug()<<year;//"1985"
    }

    // re.setPattern(R"(\w+)");
    // QRegularExpressionMatchIterator i = re.globalMatch("the quick fox");
    // QStringList words;
    // while (i.hasNext()) {
    //     QRegularExpressionMatch match = i.next();
    //     QString word = match.captured(1);
    //     //words << word;
    //     // words contains "the", "quick", "fox"
    //     qDebug()<<word;//"the", "quick", "fox"
    // }
    QRegularExpression re7;
    re7.setPattern("(\\w+)");
    QRegularExpressionMatchIterator i = re7.globalMatch("the quick fox");
    QStringList words;
    while (i.hasNext()) {
        QRegularExpressionMatch match = i.next();
        QString word = match.captured(1);
        //words << word;
        // words contains "the", "quick", "fox"
        qDebug()<<word;//"the", "quick", "fox"
    }

    QRegularExpression re1("abc\\w+X|def");
    QRegularExpressionMatch match2 = re1.match("abcdef", 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch2 = match2.hasMatch(); // true
    bool hasPartialMatch2 = match2.hasPartialMatch(); // false
    QString captured2 = match2.captured(0); // captured == "def"
    qDebug()<<hasMatch2;// true
    qDebug()<<hasPartialMatch2;// false
    qDebug()<<captured2;// "def"

    QRegularExpression re2("abc\\w+X|defY");
    QRegularExpressionMatch match11 = re2.match("abcdef", 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch3 = match11.hasMatch(); // false
    bool hasPartialMatch3 = match11.hasPartialMatch(); // true
    QString captured3 = match11.captured(0); // captured == "abcdef"
    qDebug()<<hasMatch3;// false
    qDebug()<<hasPartialMatch3;// true
    qDebug()<<captured3;// "abcdef"

    QRegularExpression re12("abc|ab");
    QRegularExpressionMatch match12 = re12.match("ab", 0, QRegularExpression::PartialPreferFirstMatch);
    bool hasMatch = match12.hasMatch(); // false
    bool hasPartialMatch = match12.hasPartialMatch(); // true
    qDebug()<<hasMatch;// false
    qDebug()<<hasPartialMatch;// true




    QString string = "Hello World123 456!";
    static QRegularExpression regex(R"(\d+)"); // 正则表达式，匹配单个的"World"
    QString replacement = "Qt";

    string.replace(regex, replacement); // 执行替换操作


    qDebug() << string; // 输出结果将是："Hello Qt!"


}


