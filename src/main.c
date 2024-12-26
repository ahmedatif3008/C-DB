#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Table.h"
#include "Database.h"

// Function to create a table
struct Table create_table(const char *name, int columnCount, char columns[][50], int dataType[]) {
    
    struct Table t;

    strcpy(t.TableName, name);
    t.columnCount = columnCount;

    for (int i = 0; i < columnCount; i++){

        strcpy(t.columns[i], columns[i]);
        strcpy(t.dataType, dataType);
    }

    t.rows = NULL;



    /*
    int = 0
    boolean = 1
    character = 2
    string = 3
    
    */


   return t;

}

struct Database create_DataBase(){
    struct Database DB;
    
    DB.tableCount = 0;
    DB.tables = NULL;

    return DB;
}


// Function to add a table to the database
void add_table_to_database(struct Database *db, struct Table table) {

    db->tables = realloc(db->tables, sizeof(struct Table) * (db->tableCount + 1));
    db->tables[db->tableCount++] = table;
    printf("Table is added to the DB");
    
}

// Function to display the tables in the database
void display_database(struct Database db) {
    // TODO
    printf("Database contains %d tables", db.tableCount);

    for (int i = 0; i < db.tableCount; i++) {
        printf("Table %d: %s (%d columns)\n", i + 1, db.tables[i].TableName, db.tables[i].columnCount);
        for (int j = 0; j < db.tables[i].columnCount; j++) {
            printf("  - Column %d: %s\n", j + 1, db.tables[i].columns[j]);
        }
    }

}

void remove_table_from_database(struct Database *db, struct Table table){
    // TODO
}

// Main function for testing
int main() {

    

    }
