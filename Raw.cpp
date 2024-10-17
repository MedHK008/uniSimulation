#include "Raw.h"

StudentRaw::StudentRaw(const std::string& name) : name(name) {}

void StudentRaw::showStudent() {
    std::cout << name << std::endl;
}

StudentRaw::~StudentRaw() {
    std::cout << "Deleting student: " << name << std::endl;
}

UniversityRaw::UniversityRaw(const std::string& name) : name(name) {}

void UniversityRaw::addStudentRaw(StudentRaw* student) {
    students.push_back(student);
}

void UniversityRaw::showStudents() {
    std::cout << "University: " << name << "has these :" << std::endl;
    for (auto student : students) {
        student->showStudent();
    }
}

UniversityRaw::~UniversityRaw()
{
    std::cout << "Deleting university: " << name << std::endl;
    for (auto student : students) {
        delete student;
    }
}
