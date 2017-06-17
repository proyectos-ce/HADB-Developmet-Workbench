#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <string>
//#include "row.h"


class Row
{
public:
    Row();
    Row(std::vector<std::string> row);
    bool updateColumn(int index, std::string data);
    std::string getColumn(int index);
    bool insertColumn(std::string data);
    bool deleteColumn(int index);
    std::string toString();
    int getIndex() const;
    void setIndex(int value);
    std::vector<std::string> getContents() const;
    void reset();
    std::vector<std::string> contents;

private:
    bool validateColumn(int index);
    int index = -1;
};



class ColumnProperties
{
public:
    ColumnProperties();
    ColumnProperties(std::string name, int type);
    std::string getName() const;
    void setName(const std::string &value);
    int getType() const;
    void setType(int value);

private:
    std::string name;
    int type;


};



class Table
{
public:
    Table();
    Table(std::string name);
    bool insertColumn(std::string name, int type=-1);
    bool insertRow(Row row);
    bool insertRow(std::vector<std::string> dataRow);
    //bool removeColumn(std::string name);
    bool removeColumn(int index);
    bool removeColumn(std::string name);
    bool removeRow(int index);
    Row getRow(int index) const;
    std::vector<Row> getRows(std::vector<int> rowsIndexes) const;
    std::vector<Row> getRows() const;
    bool updateRow(Row row);
    std::string getName() const;
    void setName(const std::string &value);
    std::vector<std::vector<std::string> > getTableAsMatrix();
    std::string toString();
    bool setColumnType(int index, int type);
    int getTotalRows()const;
    int getTotalColumns()const;
    std::vector<ColumnProperties> getColumnProperties() const;
    void setColumnProperties(const std::vector<ColumnProperties> &value);
    std::string getPrimaryKey() const;
    void setPrimaryKey(const std::string &value);
    int getPrimaryKeyIndex();
    int getColumnIndex(std::string name);
    //void setRows(const std::vector<Row, std::allocator<Row>> &value);
    void setRows(const std::vector<Row> &value);
    bool updateColumn(std::string name, std::string value);

private:
    std::vector<Row> rows;
    std::string name;
    std::string primaryKey;
    std::vector<ColumnProperties> columnProperties;
    bool checkIfColumnExists(std::string name);
    bool updateColumn(int index, std::string value);



};

enum{
    INT,
    STRING,
    DOUBLE
};


#endif // TABLE_H
