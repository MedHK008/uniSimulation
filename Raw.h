#ifndef RAW_H
#define RAW_H

#include <iostream>
#include <string>
#include <vector>

// Forward declaration
class UniversityRaw;

// Implementation using raw pointers
class StudentRaw {
private:
    std::string name;
public:
    StudentRaw(const std::string& name);

    void showStudent();
    
    ~StudentRaw();
};

class UniversityRaw {
public:
    std::string name;
    std::vector<StudentRaw*> students;

    UniversityRaw(const std::string& name);

    void addStudentRaw(StudentRaw* student);

    void showStudents();
    ~UniversityRaw();
};

#endif // RAW_H