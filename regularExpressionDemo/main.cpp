#include <iostream>
#include <QString>
#include <QRegularExpression>
#include <QtDebug>

void test01()
{
    /*介绍*/
    //创建及声明pattern
    //创建时直接声明pattern
    QRegularExpression re11("a pattern");
    //创建时未声明pattern,使用setPattern方法声明pattern
    QRegularExpression re12;
    re12.setPattern("another pattern");

    //pattern中的字符及转义字符处理, R"()"类似python的r""，不用自己再手动添加'\'
    // matches two digits followed by a space and a word
    QRegularExpression re21("\\d\\d \\w+");
    // matches a backslash
    QRegularExpression re22("\\\\");
    // matches two digits followed by a space and a word
    QRegularExpression re(R"(\d\d \w+)");


    //pattern()方法返回正则的pattern字符串
    QRegularExpression re3("a third pattern");
    QString pattern = re3.pattern(); // pattern == "a third pattern"
    qDebug()<<pattern;//"a third pattern"

    /*pattern选项*/
    //正则中如何让pattern忽略大小写、多行匹配等选择
    // matches "Qt rocks", but also "QT rocks", "QT ROCKS", "qT rOcKs", etc.
    QRegularExpression re41("Qt rocks", QRegularExpression::CaseInsensitiveOption);
    //方式二，通过setPatternOptions方法设置
    QRegularExpression re42("^\\d+$");
    re42.setPatternOptions(QRegularExpression::MultilineOption);
    // re matches any line in the subject string that contains only digits (but at least one)

    //获得正则中pattern忽略大小写、多行匹配等选择配置
    QRegularExpression re43 = QRegularExpression("^two.*words$", QRegularExpression::MultilineOption
                                                                     | QRegularExpression::DotMatchesEverythingOption);
    QRegularExpression::PatternOptions options = re43.patternOptions();
    // options == QRegularExpression::MultilineOption | QRegularExpression::DotMatchesEverythingOption
    qDebug()<<options;//QRegularExpression::PatternOptions("DotMatchesEverythingOption|MultilineOption")
}

void test02()
{
/*匹配类型及匹配选项*/
/*普通匹配*/
    // match two digits followed by a space and a word
    QRegularExpression re1("\\d\\d \\w+");
    QRegularExpressionMatch match1 = re1.match("abc123 def");
    bool hasMatch = match1.hasMatch(); // true
    qDebug()<<hasMatch;// true

    //获得匹配的子字符串
    QRegularExpression re2("\\d\\d \\w+");
    QRegularExpressionMatch match2 = re2.match("abc123 def");
    if (match2.hasMatch()) {
        QString matched = match2.captured(0); // matched == "23 def"
        qDebug()<<matched;//"23 def"
    }
    //获得匹配的子字符串,但是match多了索引选项,从2开始匹配，1被跳过，因为索引为1
    QRegularExpression re3("\\d\\d \\w+");
    QRegularExpressionMatch match3 = re3.match("12 abc 45 def", 1);
    if (match3.hasMatch()) {
        QString matched = match3.captured(0); // matched == "45 def"
        qDebug()<<matched;//"45 def"
    }
    //提取捕获的子字符串 captured(0) 完整子串，captured(1)...等为括号内的字串内容
    QRegularExpression re4("^(\\d\\d)/(\\d\\d)/(\\d\\d\\d\\d)$");
    QRegularExpressionMatch match4 = re4.match("08/12/1985");
    if (match4.hasMatch()) {
        QString day = match4.captured(1); // day == "08"
        QString month = match4.captured(2); // month == "12"
        QString year = match4.captured(3); // year == "1985"
        qDebug()<<day;//"08"
        qDebug()<<month;//"12"
        qDebug()<<year;//"1985"
    }
    //获得完整括号字串的起始结尾索引地址
    QRegularExpression re5("abc(\\d+)def");
    QRegularExpressionMatch match5 = re5.match("XYZabc123defXYZ");
    if (match5.hasMatch()) {
        int startOffset = match5.capturedStart(1); // startOffset == 6 (123)
        int endOffset = match5.capturedEnd(1); // endOffset == 9 (123)
        qDebug()<<startOffset;//"08"
        qDebug()<<endOffset;//"12"
    }

    //对给括号的子串命名，不用数字索引，与上上个对照看
    QRegularExpression re6("^(?<date>\\d\\d)/(?<month>\\d\\d)/(?<year>\\d\\d\\d\\d)$");
    QRegularExpressionMatch match6 = re6.match("08/12/1985");
    if (match6.hasMatch()) {
        QString date = match6.captured("date"); // date == "08"
        QString month = match6.captured("month"); // month == "12"
        QString year = match6.captured("year"); // year == 1985
        qDebug()<<date;//"08"
        qDebug()<<month;//"12"
        qDebug()<<year;//"1985"
    }
/*所有匹配*/
    QRegularExpression re7("(\\w+)");
    QRegularExpressionMatchIterator i = re7.globalMatch("the quick fox");
    QStringList words;
    while (i.hasNext()) {
        QRegularExpressionMatch match = i.next();
        QString word = match.captured(1);
        //words << word;
        // words contains "the", "quick", "fox"
        qDebug()<<word;//"the", "quick", "fox"
    }
// //没搞定，编译异常，后续搞懂了再处理
//     // using a raw string literal, R"(raw_characters)", to be able to use "\w"
//     // without having to escape the backslash as "\\w"
//     QRegularExpression re8(R"(\w+)");
//     QString subject("the quick fox");
//     for (const QRegularExpressionMatch &match : re8.globalMatch(subject)) {
//         //QString word = match.captured(1);
//         //qDebug()<<word;//"the", "quick", "fox"
//         qDebug()<<match;
//     }
}

void test03()
{
/*部分匹配*/
//实时输入检验
    QString pattern("^(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d\\d?, \\d\\d\\d\\d$");
    QRegularExpression re(pattern);

    QString input("Jan 21,");
    QRegularExpressionMatch match0 = re.match(input, 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch = match0.hasMatch(); // false
    bool hasPartialMatch = match0.hasPartialMatch(); // true
    qDebug()<<hasMatch;
    qDebug()<<hasPartialMatch;

    //
    QString input1("Dec 8, 1985");
    QRegularExpressionMatch match1 = re.match(input1, 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch1 = match1.hasMatch(); // true
    bool hasPartialMatch1 = match1.hasPartialMatch(); // false
    qDebug()<<hasMatch1;// true
    qDebug()<<hasPartialMatch1;// false


    QRegularExpression re1("abc\\w+X|def");
    QRegularExpressionMatch match2 = re1.match("abcdef", 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch2 = match2.hasMatch(); // true
    bool hasPartialMatch2 = match2.hasPartialMatch(); // false
    QString captured2 = match2.captured(0); // captured == "def"
    qDebug()<<hasMatch2;// true
    qDebug()<<hasPartialMatch2;// false
    qDebug()<<captured2;// "def"
    //
    QRegularExpression re2("abc\\w+X|defY");
    QRegularExpressionMatch match = re2.match("abcdef", 0, QRegularExpression::PartialPreferCompleteMatch);
    bool hasMatch3 = match.hasMatch(); // false
    bool hasPartialMatch3 = match.hasPartialMatch(); // true
    QString captured3 = match.captured(0); // captured == "abcdef"
    qDebug()<<hasMatch3;// true
    qDebug()<<hasPartialMatch3;// false
    qDebug()<<captured3;// "abcdef"
}
void test04()
{
/*部分匹配*/
//增长或多段匹配
    QRegularExpression re("abc|ab");
    QRegularExpressionMatch match = re.match("ab", 0, QRegularExpression::PartialPreferFirstMatch);
    bool hasMatch = match.hasMatch(); // false
    bool hasPartialMatch = match.hasPartialMatch(); // true
    qDebug()<<hasMatch;// false
    qDebug()<<hasPartialMatch;// true

    // QRegularExpression re("abc(def)?");
    // QRegularExpressionMatch match = re.match("abc", 0, QRegularExpression::PartialPreferFirstMatch);
    // bool hasMatch = match.hasMatch(); // false
    // bool hasPartialMatch = match.hasPartialMatch(); // true


    // QRegularExpression re("(abc)*");
    // QRegularExpressionMatch match = re.match("abc", 0, QRegularExpression::PartialPreferFirstMatch);
    // bool hasMatch = match.hasMatch(); // false
    // bool hasPartialMatch = match.hasPartialMatch(); // true
}

void test05()
{
/*错误处理*/
    QRegularExpression invalidRe1("(unmatched|parenthesis");
    bool isValid = invalidRe1.isValid(); // false
    qDebug()<<isValid;// false


    QRegularExpression invalidRe("(unmatched|parenthesis");
    if (!invalidRe.isValid()) {
        QString errorString = invalidRe.errorString(); // errorString == "missing )"
        int errorOffset = invalidRe.patternErrorOffset(); // errorOffset == 22
        qDebug()<<errorString;
        qDebug()<<errorOffset;
    }

}


/*看Qt正则手册，试下例子中的代码*/
int main()
{
    // test02();
    // test03();
    // test04();
    test05();


    return 0;
}
