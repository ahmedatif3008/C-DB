#ifndef TABLE_H
#define TABLE_H

struct Table  {
    char TableName[50];
    int columnCount;
    char columns[10][50];
    int dataType[10];
    void *rows;
};

#endif