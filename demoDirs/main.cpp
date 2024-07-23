#include <QCoreApplication>
#include <QDir>
#include <QDebug>

bool createDirectories(const QString& path) {
    QDir dir;
    if (dir.mkpath(path)) {
        return true;  // 成功创建多层文件夹
    }
    return false;     // 创建文件夹失败
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QString path = "a/b/c/d";  // 需要创建的多层文件夹路径

    if (createDirectories(path)) {
        qDebug() << "多层文件夹创建成功";
    } else {
        qDebug() << "多层文件夹创建失败";
    }

    return a.exec();
}
