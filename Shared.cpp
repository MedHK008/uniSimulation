#include "Shared.h"

StudentShared::StudentShared(const std::string& name) : name(name){}

UniversityShared::UniversityShared(const std::string& name) : name(name) {}

void UniversityShared::addStudentShared(std::shared_ptr<StudentShared> student) {
    students.push_back(student);
}
