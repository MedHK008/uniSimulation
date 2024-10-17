#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <vector>

class UniversityTable;

class StudentTable {
public:
    std::string name;

    StudentTable(const std::string& name);
};

class UniversityTable {
public:
    std::string name;
    std::vector<int> studentIds;

    UniversityTable(const std::string& name);

    void addStudentTable(int studentId);
};

#endif // TABLE_H