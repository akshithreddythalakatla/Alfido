# Alfido Internship - Task 3

## System Programming / File I/O & Processes

## Objective

Build small system utilities demonstrating file handling, command execution, and logging processes using C++.

## Implemented Programs

### 1. File Handler

Performs file creation, writing, and reading operations.

Functions:

* Create file
* Write data into file
* Read file content

Time Complexity:

* Write → O(n)
* Read → O(n)

---

### 2. Command Runner

Executes operating system commands using C++ system calls.

Functions:

* Execute system command
* Check execution status

Time Complexity:

* Depends on system command execution

---

### 3. Log Writer

Creates and appends log entries with timestamps.

Functions:

* Open log file
* Append log entry
* Store timestamp

Time Complexity:

* Append → O(1)

---

## Files Included

* filehandler.cpp
* commandrunner.cpp
* logwriter.cpp
* README.md

---

## Compile Commands

File Handler:

g++ filehandler.cpp -o filehandler

Run:

./filehandler

---

Command Runner:

g++ commandrunner.cpp -o commandrunner

Run:

./commandrunner

---

Log Writer:

g++ logwriter.cpp -o logwriter

Run:

./logwriter

---

Project completed for Alfido Tech Internship.
