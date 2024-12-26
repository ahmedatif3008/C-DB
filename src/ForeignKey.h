#ifndef DATABASE_H
#define DATABASE_H

struct ForeignKey {
    char column[50];
    char referenced_table[50];
    char referenced_column[50];
};

#endif