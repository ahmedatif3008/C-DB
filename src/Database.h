#ifndef DATABASE_H
#define DATABASE_H


struct Database {
    struct Table *tables;
    int tableCount;
};

#endif