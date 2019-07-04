#include <iostream>
#include <sqlite3.h>

using namespace std;
// This is the callback function to display the select data in the table
static int callback(void *NotUsed, int argc, char **argv, char **szColName)
{
    for (int i = 0; i < argc; i++)
        cout << szColName[i] << " = " << argv[i] << endl;

    cout << "\n";

    return 0;
}

int main()
{
    sqlite3 *db;
    char *szErrMsg = 0;

    // open database
    int rc = sqlite3_open("DB.db", &db); // create DB

    if (rc)
        cout << "Open database successfully\n";

    // prepare our sql statements
    const char *pSQL[6];
    pSQL[0] = "CREATE TABLE Employee(Firstname varchar(30), Lastname varchar(30), Age smallint)";
    pSQL[1] = "INSERT INTO Employee(Firstname, Lastname, Age) VALUES ('Woody', 'Alan', 45)";
    pSQL[2] = "INSERT INTO Employee(Firstname, Lastname, Age) VALUES ('Micheal', 'Bay', 38)";
    pSQL[3] = "SELECT * FROM Employee";

    // execute sql
    for (int i = 1; i < 4; i++)
    {
        rc = sqlite3_exec(db, pSQL[i], callback, 0, &szErrMsg);
        if (rc != SQLITE_OK)
        {
            cout << "SQL Error: " << szErrMsg << endl;
            sqlite3_free(szErrMsg);
            break;
        }
    }

    // close database
    if (db)
        sqlite3_close(db);

    return 0;
}