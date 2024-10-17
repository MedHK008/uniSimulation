#include <iostream>
#include <memory>
#include <vector>
#include "Raw.h"
#include "Table.h"
#include "Shared.h"
#include "Unique.h"

using namespace std;

void testRawImplementation() {
    UniversityRaw *uniRaw = new UniversityRaw("Raw University");
    StudentRaw *studentRaw = new StudentRaw("Raw Student");
    StudentRaw *studentRaw2 = new StudentRaw("Raw Student 2");
    uniRaw->addStudentRaw(studentRaw);
    uniRaw->addStudentRaw(studentRaw2);

    uniRaw->showStudents();

    delete uniRaw;
    delete studentRaw;
}

void testTableImplementation() {
    UniversityTable uniTable("Table University");
    StudentTable studentTable("Table Student");
    uniTable.addStudentTable(0);
}

void testSharedImplementation() {
    auto uniShared = std::make_shared<UniversityShared>("Shared University");
    auto studentShared = std::make_shared<StudentShared>("Shared Student");
    uniShared->addStudentShared(studentShared);
}

void testUniqueImplementation() {
    UniversityUnique uniUnique("Unique University");
    auto studentUnique = std::make_unique<StudentUnique>("Unique Student");
    auto studentUnique2 = std::make_unique<StudentUnique>("Unique Student 2");
    uniUnique.addStudentUnique(std::move(studentUnique));
    uniUnique.addStudentUnique(std::move(studentUnique2));
}

int main() {
    cout << "**************************************************************" << endl;
    testRawImplementation();
    cout << endl << "**************************************************************" << endl;
    // testTableImplementation();
    // cout << endl << "**************************************************************" << endl;
    // testSharedImplementation();
    // cout << endl << "**************************************************************" << endl;
    // testUniqueImplementation();
    // cout << endl << "**************************************************************";
    return 0;
}