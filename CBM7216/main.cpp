#include "mainwindow.h"

#include <QApplication>

void checkTemplateFile();


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


void checkTemplateFile(QString srcFile,QString destFile)
{
    QDir srcDir(srcFile);
    QDir destDir(destFile);
    //获取该文件夹内所有文件除.和..以外
    srcDir.setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    QStringList srcDirFileList = srcDir.entryList();

    //遍历源文件夹列表
    for(QString& srcDirFile : srcDirFileList)
    {
        QFileInfo fileInfo(srcDirStr + srcDirFile);
        //判断是否是文件夹
        if(fileInfo.isDir())
        {
            destDir.mkdir(srcDirFile);
            copyDir( srcDirStr + srcDirFile + "\\",destDirStr + srcDirFile + "\\");
        }
        else
        {
            QFile file(srcDirStr + srcDirFile);
            QFile::copy(srcDirStr + srcDirFile,destDirStr + srcDirFile);
        }
    }
}
