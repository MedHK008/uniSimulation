#include "Table.h"

StudentTable::StudentTable(const std::string& name) : name(name) {}

UniversityTable::UniversityTable(const std::string& name) : name(name) {}

void UniversityTable::addStudentTable(int studentId) {
    studentIds.push_back(studentId);
}