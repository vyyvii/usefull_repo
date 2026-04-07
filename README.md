# useful_repo

`useful_repo` is a personal utility repository designed to speed up the development of **Epitech C projects**.

It contains:

* a **template project structure** (`Start/`)
* a **custom utility library** (`libUtilsLib.a`)
* several **automation scripts** to create, push, and run projects quickly

The goal is simple: **start a new project in seconds with a clean structure, working Makefile, tests, and utility library.**

---

# Features

* Ready-to-use **Epitech project template**
* Automated **project creation**
* Integrated **utility library**
* Support for **unit tests (Criterion)**
* Functional test runner
* Coverage generation
* Docker execution environment for **epitest*
* Debug and release build modes

---

# Repository Structure

```
.
├── create.sh
├── create_without_gh.sh
├── push.sh
├── run_epitech_docker.sh
├── README.md
└── Start
    ├── include
    ├── lib
    │   ├── include
    │   ├── src
    │   └── Makefile
    ├── src
    ├── tests
    └── Makefile
```

---

# Utility Scripts

## create.sh

Creates a new project **from a Git repository**.

It will:

* clone the repository
* copy the base project template
* rename project files
* update project name, year, and description
* configure headers
* push the initialized project

Usage:

```bash
./create.sh
```

You will be prompted for:

* SSH clone URL
* Project name
* Year
* Description

---

## create_without_gh.sh

Same as `create.sh`, but **creates a local project only** (no Git clone).

Usage:

```bash
./create_without_gh.sh
```

---

## push.sh

Small helper script to quickly push changes.

```bash
./push.sh "commit message"
```

Equivalent to:

```
git add *
git commit -m "message"
git push
```

---

## run_epitech_docker.sh

Runs the **Epitech testing Docker environment**.

Useful when working outside the Epitech machines.

```bash
./run_epitech_docker.sh
```

This mounts the current project inside the container.

---

# Project Template (`Start/`)

The `Start/` directory contains the base structure used for every project.

It includes:

* standard **Epitech header**
* **Makefile**
* **tests**
* **main**
* **project source**
* **utility library**

Example tree:

```
Start/
├── include
│   ├── my.h
│   ├── tests.h
│   └── utilslib.h
├── lib
│   ├── include
│   ├── src
│   └── Makefile
├── src
│   ├── main.c
│   └── project.c
├── tests
│   ├── tests.sh
│   └── test_tool.c
└── Makefile
```

---

# Utility Library

The repository contains a static library:

```
libUtilsLib.a
```

It provides reusable C utilities grouped by category:

### char

* character tests
* `my_putchar`
* character counters

### int

* prime detection
* power functions
* integer utilities

### int_str

* number parsing
* number printing
* precision helpers

### matrix

* string to array utilities
* matrix handling

### mem

* memory helpers
* string duplication
* string concatenation
* file loading

### str

* string manipulation
* comparisons
* case conversion
* validation utilities

---

# Build

Compile the project:

```
make
```

Rebuild everything:

```
make re
```

Build with debug:

```
make debug
```
> [!NOTE]
> → Compiles project and library with:
>
> -g3
> -O0
>
> Useful for:
>
> debugging
> gdb
> memory analysis

Clean objects:

```
make clean
```

Full clean:

```
make fclean
```

---

# Testing

## Unit Tests

```
make unit_tests
./unit_tests
```

## Functional Tests

```
make functional_tests
./functional_tests
```

## Full Test Suite + Coverage

```
make tests_run
```

This generates:

```
coverage_report.html
```

---

# Requirements

* GCC
* Criterion
* gcovr
* Docker (optional, for epitest)

---

# Purpose

This repository exists to:

* reduce project setup time
* standardize Epitech project structures
* reuse a personal C utility library
* simplify testing and debugging

---

# License

Personal development toolkit.

---

# Author

Victor Defauchy 2026
