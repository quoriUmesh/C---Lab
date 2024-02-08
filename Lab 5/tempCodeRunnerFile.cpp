#include<iostream>
#include<string>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>


int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(" 192.168.1.254", "umesh", "UmeshKhadka123");

    // Select the database
    con->setSchema("ifunds");

    sql::Statement* stmt;

    // Add data
    stmt = con->createStatement();
    stmt->execute("INSERT INTO transaction (id, name, age) VALUES (1,'Umesh Khadka', 25)");

    // Update data
    //stmt->execute("UPDATE your_table SET age = 26 WHERE name = 'Umesh Khadka'");

    // Delete data
    //stmt->execute("DELETE FROM your_table WHERE name = 'John Doe'");

    delete stmt;


    delete con;

    return 0;
}