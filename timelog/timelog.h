#ifndef TIMELOG_H
#define TIMELOG_H
#include <stdio.h>
#include <time.h>
#include <memory.h>
#include <string>
#include <io.h>
#include <stdlib.h>
#include <iostream>
void timeStart();
void timeEnd();
void copyTimeLog2Net();

static void timeStartSub();
static void timeEndSub();
static void copyFile2Path(const char* srcFile,const char* destFilepath);
#endif // TIMELOG_H
