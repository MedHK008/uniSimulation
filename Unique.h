#ifndef UNIQUE_H
#define UNIQUE_H

#include <iostream>
#include <memory>
#include <vector>

class UniversityUnique;

class StudentUnique {
public:
    std::string name;
    StudentUnique(const std::string& name);
};

class UniversityUnique {
public:
    std::string name;
    std::vector<std::unique_ptr<StudentUnique>> students;

    UniversityUnique(const std::string& name);

    void addStudentUnique(std::unique_ptr<StudentUnique> student);
};


#endif // UNIQUE_H