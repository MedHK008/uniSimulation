#include "Unique.h"

StudentUnique::StudentUnique(const std::string& name) : name(name) {}

UniversityUnique::UniversityUnique(const std::string& name) : name(name) {}

void UniversityUnique::addStudentUnique(std::unique_ptr<StudentUnique> student) {
    students.push_back(std::move(student));
}

