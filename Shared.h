#ifndef SHARED_H
#define SHARED_H

#include <iostream>
#include <memory>
#include <vector>

class UniversityShared;

class StudentShared {
public:
    std::string name;

    StudentShared(const std::string& name);
};

class UniversityShared : public std::enable_shared_from_this<UniversityShared> {
public:
    std::string name;
    std::vector<std::shared_ptr<StudentShared>> students;

    UniversityShared(const std::string& name);

    void addStudentShared(std::shared_ptr<StudentShared> student);
};

#endif // SHARED_H