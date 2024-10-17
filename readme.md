# uniSimulation Project

## Overview

The `uniSimulation` project is a C++ application that demonstrates different ways to manage student objects within a university context. The project showcases four different implementations for managing student objects:

1. **Raw Pointers**
2. **Table (Vector)**
3. **Shared Pointers**
4. **Unique Pointers**

Each implementation is tested through specific functions in the `main.cpp` file.

## Project Structure

- **main.cpp**: Contains the main function and test functions for each implementation.
- **Raw.h / Raw.cpp**: Implementation using raw pointers.
- **Table.h / Table.cpp**: Implementation using a vector to manage students.
- **Shared.h / Shared.cpp**: Implementation using shared pointers.
- **Unique.h / Unique.cpp**: Implementation using unique pointers.
- **CMakeLists.txt**: CMake configuration file to build the project.

## Building the Project

To build the project, use the following commands:

```sh
cmake .
make
```

## Running the Project

After building the project, you can run the executable:

```sh
./uniSimulation
```

## Implementations

### Raw Pointers

**Files**: `Raw.h`, `Raw.cpp`

**Description**: This implementation uses raw pointers to manage student objects. It requires manual memory management, which can lead to memory leaks if not handled properly.

**Example**:
```cpp
void testRawImplementation() {
    UniversityRaw *uniRaw = new UniversityRaw("Raw University");
    StudentRaw *studentRaw = new StudentRaw("Raw Student");
    uniRaw->addStudentRaw(studentRaw);
    std::cout << "Raw: " << studentRaw->name << " is enrolled in " << studentRaw->university->name << std::endl;
    delete uniRaw;
    delete studentRaw;
}
```

### Table (Vector)

**Files**: `Table.h`, `Table.cpp`

**Description**: This implementation uses a `std::vector` to manage student objects. It provides automatic memory management and dynamic resizing.

**Example**:
```cpp
void testTableImplementation() {
    UniversityTable uniTable("Table University");
    StudentTable studentTable("Table Student");
    uniTable.addStudentTable(0);
    studentTable.universityId = 0;
    std::cout << "Table: " << studentTable.name << " is enrolled in " << uniTable.name << std::endl;
}
```

### Shared Pointers

**Files**: `Shared.h`, `Shared.cpp`

**Description**: This implementation uses `std::shared_ptr` to manage student objects. Shared pointers provide automatic memory management with reference counting, allowing multiple owners of the same object.

**Example**:
```cpp
void testSharedImplementation() {
    auto uniShared = std::make_shared<UniversityShared>("Shared University");
    auto studentShared = std::make_shared<StudentShared>("Shared Student");
    uniShared->addStudentShared(studentShared);
    std::cout << "Shared: " << studentShared->name << " is enrolled in " << studentShared->university->name << std::endl;
}
```

### Unique Pointers

**Files**: `Unique.h`, `Unique.cpp`

**Description**: This implementation uses `std::unique_ptr` to manage student objects. Unique pointers provide automatic memory management with exclusive ownership, ensuring that an object has only one owner at a time.

**Example**:
```cpp
void testUniqueImplementation() {
    UniversityUnique uniUnique("Unique University");
    auto studentUnique = std::make_unique<StudentUnique>("Unique Student");
    uniUnique.addStudentUnique(std::move(studentUnique));
    std::cout << "Unique: " << uniUnique.students[0]->name << " is enrolled in " << uniUnique.name << std::endl;
}
```