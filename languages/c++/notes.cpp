#include <fstream>
#include <type_traits>
#include <ios>
#include <iostream>
#include <iterator>
#include <ostream>
#include <fstream>
#include <stdexcept>
#include <thread>
#include <chrono>
#include <cstring>
#include <string>
#include <limits>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <cmath>
#include <memory>
// remark .. C++ prefers camel case. i will be using snake case for many things though :p

// WELCOME TO MY C++ NOTES
// hello, welcome to my C++ notes
// in these notes, you will learn how to write C++ code
// we will start with the basics, and eventually move on to more advanced topics
// these notes assume you are ALREADY FAMILIAR WITH C and have a decent understanding of programming
// if you are not familiar with C, read my C notes first.
// if you are fairly new to programming, you will likely want to use this notes in addition with other resources to fill in any gaps.

// below, we have a bunch of function prototypes that each represent a topic
// you can jump to the function definition for each prototype to see a specific topic
// note that these topics are not always in exact order, e.g) things from oop section may precede topics in memory and resources
// to run the code for a specific topic, just call it in the main() function by replacing the function under "// RUN"
// to see how to compile , read compilation_flags()

// INTRO
int what_is_cpp();
int data_types();
int objects();
int declaring_defining_initializing();

// COMPILING
int compiling_cpp();
int compilation_flags();
int cmake();

// BASIC PRINTING
int stdin_stdout();
int flushing_the_buffer();

// STANDARD LIBRARY
int stl();
int stl_containers();
int vectors();
int strings();
int string_handling();
int iterators();
int maps();
int sets();

// LANGUAGE FEATURES
int references();
int range_based_for();
int lvalues_rvalues();
int aggregates();
int macros();
int deleted_functions();
int lambda_functions();
int namespaces();
int scope_resolution_operator();
int function_overloading();
int exceptions();
int exception_handling();
int default_arguments();
int concepts();
int pragma();

// MEMORY AND RESOURCES
int free_and_malloc_review();
int memory_model();
int new_delete_operators();
int ownership();
int raii();
int smart_pointers();
int move_semantics();

// OBJECT ORIENTED PROGRAMMING
int oop();
int classes();
int access_specifiers();
int structs();
int initializer_lists();
int constructors();
int default_constructors();
int trivial_constructors();
int destructors();
int copy_constructor();
int move_constructor();
int operators();
int assignment_operators();
int inheritance();
int polymorphism();
int virtual_functions();
int vtables();
int override_keyword();
int diamond_problem();
int pure_virtual_functions();
int virtual_constructors_destructors();
int templates();
int operator_overloading();
int uniform_initialization();

// KEYWORDS
int auto_keyword();
int nullptr_keyword();
int inline_keyword();
int static_keyword();
int noexcept_keyword();
int const_keyword();
int const_expr_keyword();
int explicit_keyword();

// PRIMITIVES
// TODO: add more functions for other types
int pointer_type();
int int_types();
int size_t_type();

// STREAM I/O
int stream_io();
int stream_classes();
int stream_objects();
int file_streams();
int string_streams();

// ADVANCED TOPICS
int multithreading();
int perfect_forwarding();
int variadic_templates();


int main() {
    // RUN
    virtual_constructors_destructors();
    return 0;
}

int what_is_cpp() {
    // C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language
    // but we ask, why? why do we need C++ when we already have C?

    // why C++ instead of C?
    // C++ is an extension of C, which means that C++ is a superset of C
    // all valid C programs are also valid C++ programs
    // C++ is a more modern language that includes features like oop, the C++ standard template library (STL), and namespaces (just to name a few).
    // these features add a layer of abstraction that makes C++ more convenient for high-level programming

    // okay nice, we understand that C++ offers more features than C.
    // lets take a look at some of the features that C++ offers.
    // each of these features will have its own topic, we will just be taking a look at an overview

    // C++ vs C

    // classes and objects
    // C++ supports object-oriented programming (OOP) through classes and objects. for example:
    class Position {
    private:
        int x, y;

    public:
        Position(int initial_x, int initial_y) : x(initial_x), y(initial_y) {} // constructor
        void move(int dx, int dy) {
            x += dx;
            y += dy;
        }
        void print_position() {
            std::cout << "Position: (" << x << ", " << y << ")" << std::endl; 
            // dont worry if this doesn't make sense to you right now.
            // its just print(f"Position: ({x}, {y})"). u will learn later.
        }
    };
    // note that we align the private, public, and protected keywords with the class keyword.

    Position pos(0, 0);
    pos.print_position();
    pos.move(1, 2);
    pos.print_position();
    pos.move(2, -1);
    pos.print_position();

    // STL
    // STL stands for standard template library
    // there is actually some confusion surrounding what STL exactly means. it could mean one of two things
        // 1.) original meaning: consists of the containers, iterators, and algorithms from C++ standard library (excluding string)
        // 2.) entire C++ standard library

    // the exact meaning varies, but here is what is definitely part of the STL:
    // (remark, if we uncomment these include statements, we will get errors. we would want these written outside of the function)
    // #include <vector>
    // #include <list>
    // #include <map>
    // #include <set>
    // #include <deque>
    // #include <queue>
    // #include <stack>

    // #include <algorithm>
    // sort, find, count, etc.

    // #include <iterator>
    // begin(), end(), etc.

    // #include <functional>
    // less<>, greater<>, etc.

    // people often say the C++ standard library is a superset of STL, but i am not sure how accurate this is!
    // the main takeaway regarding the STL, is that it provides common data structures and algorithms (much like the Java Collections Framework)
    // this is a big difference from C where we have to make everything ourselves.

    // namespaces
    // C++ also makes use of namespaces, which are encapsulations of blocks of code which protect against name collisions.
    // for example, suppose you have functions or variables defined somewhere (for example inside a library).
    // now a potential issue is that if somewhere else those some functions/variables are redefined again.
    // in order for the compiler to know which variable/function to refer to, we define the different functions/variables inside a namespace, and refer to it from there.
    // this is similar to python packages, for example when we import np and reference np.array()

    // one of the most common namespaces is std. 
    // we use :: (known as the scope resolution operator)
    std::cout << "Hello World!" << std::endl;
    // here we used the :: operator to specify that we want to use cout from the std namespace. this is a very light introduction to namespaces.
    // for now, do not worry if u are confused! we will dive into all of this in more depth in the following sections.

    return 0;
}

int data_types() {
    // there are two kinds of data types in C: primitive and non-primitive

    // PRIMITIVE DATA TYPES
    // these are also known as fundamental datatypes
    // primitive types are built into the language
    // primitive types hold single values

    // integer type
    int a;                // usually 4 bytes
    short b;              // usually 2 bytes
    long c;               // usually 4 or 8 bytes
    long long d;          // usually 8 bytes

    // float types
    float e;              // usually 4 bytes
    double f;             // usually 8 bytes
    long double g;        // usually 8 or 16 bytes

    // character types
    char h;               // 1 byte

    // boolean
    bool i;               // 1 byte

    // void
    // void j;               // no bytes. note we cannot even declare this

    // NON PRIMITIVE DATA TYPES
    // non-primitive types can can hold multiple values and/or have methods associated
    // non-primitive types are often based on primitive types

    // arrays
    int arr[5];
    // same as in C

    // pointers
    int* xp;
    // 4 bytes on 32-bit systems
    // 8 bytes on 64-bit systems

    // strings
    std::string s1 = "hello world";

    // structures (same as C)
    struct Student {
        int roll;
        char grade;
        float marks;
    };

    // classes
    // identical to structs except the default access level. see classes().
    class Person {
    public:
        static void shout() {std::cout << "AHHH" << std::endl;}
    };

    return 0;
}

int objects() {
    // what are objects?
    // in C++, objects can typically refer to two things
        // 1.) objects
        // 2.) class objects

    // oftentimes when we refer to objects, we may be thinking of some instantiation of a class.
    // however in C++, every data type isn't a class!
    // primitive data types like ints, floats, chars are not a class.
    // non-primitive data types like pointers, and structs are also not classes.
    // however these are also referred to as objects.

    // if we are thinking of objects in the context of object-oriented-programming and classes, then it would be wrong to say that int x; is an object.

    // CLASS OBJECTS
    class Person {
    private:
        char* name;
    public:
        Person(const char* person_name) {
            name = new char[strlen(person_name) + 1];
            strcpy(name, person_name);
        }
        static void shout() {std::cout << "AHHH" << std::endl;}
    };

    Person* person = new Person("jeff");
    // we say person is an object of the class Person

    // GENERAL OBJECTS
    // a more general definition of an object is as follows.
    // an object is a region of space in memory that has:
        // 1.) a type
        // 2.) a size
        // 3.) a lifetime

    // so anything from structs, to ints, to classes, they are all considered objects.
    int x = 4;
    std::string str1 = "Hello"; // string class
    int arr[30];
    std::vector<int> vec = {1, 2, 3}; // vector class

    // VARIABLE vs OBJECT
    // to be even more clear, the variable 'person' itself is a variable.
    // a variable is an "identifier" that refers to an object.
    // the object itself is the actual data--the actual memory taken.
    // for example, consider an array of Person*
    Person* arr2[] = {new Person("jill"), new Person("jack")};

    // in this case, arr contains two objects.
    // however there exists no variables that identify these objects.

    return 0;
}

int declaring_defining_initializing() {
    // declaration is when you just announce something exists--doesn't
    // allocate any memory for it anywhere:
    extern int gagaga;
    // extern just specifies that this variable/function is defined somewhere
    // else.

    // definition is when you actually create the variable , this allocates
    // storage:
    int x;

    // initialization is when you give something a value at the point of
    // definition:
    int y = 10;

    // when you give something a value afterwards , we call that assignment
    // rather than initalization:
    x = 10;

    // these distinctions become even more important later on when we deal with
    // classes.
    return 0;
}

int compiling_cpp() {
    // compiling C++ is very similar to compiling C. 
    // C++ has its own compiler, just like C.
    // recall that C uses the GNU C compiler (gcc).
    // similarly, C++ uses g++

    // the compilation process for C++ is much more complex than for C.
    // C is just a procedural programming language, so its compilation at the file level mostly consists
    // of simply turning C source code into machine code.
    // whereas C++ is a multi-paradigm language that supports many high level things like oops, templates
    // and exceptions.
    // this leads to a much more complex compilation process for C++.

    // the compilation process for C++ itself is also very similar to C.
    // recall in C:
    // 1. preprocessing
        // the C preprocessor cleans up the source code (#include and #define statements)
    // 2. compilation
        // the C compiler turns the source code for each .c file into assembly code (.s)
    // 3. assembly
        // the C assembler turns the assembly code into object code. assembly code is human-readable (like x86 or ARM), whereas the object code is direct binary (machine code)
    // 4. linking
        // the C linker takes all the object code (.o files) and links them together into a single binary executable

    // for C++ the process is very similar:
    // 1. preprocessing
        // the C++ preprocessor cleans up source code (#include and #define)
        // also cleans up macros that can handle templates (more on templates later)
        // the output source file typically has an (.i) extension
    // 2. compilation
        // the C++ compiler also compiles source code into assembly code (.s)
        // however, this process is much more complex for C++ as mentioned before.
        // there is much more complexity (OOP, templates, etc.)
    // 3. assembly
        // the C assembler takes the assembly code for each file and turns it into object code (.o or .obj)
    // 4. linking
        // and finally, just like C, the object code is linked together at the end to form one executable.
        // the final executable doesn't need to have a specific extension but it may have .out (unix) or .exe (windows), or it may have none

    // one final question for this section: why do we have assembly code and object code?
    // you may be wondering what the point is of having assembly code and object code. why not just directly make the executable?

    // why assembly code?
    // the reason we want assembly code is because it creates architecture specific code.
    // for example, many computers use x86 or ARM architecture, but the actual binary for each computer may be different.
    // having assembly code allows for a portable low level code that can quickly be translated to the proper binary (object) code for each computer.

    // why object code?
    // the reason we would want object code rather than just directly going to an executable is because of many reasons.
    // 1. modular compilation (individual recompilation):
        // we can have a binary object file for each separate source file, which allows us to recompile and reassemble only one binary object at a time.
        // this means if we have one just one c++ source file out of a hundred that are all linked together, we do not need to recompile binaries for the whole program.
        // we only would need to recompile the object code for the single source file and relink all the object files together.
    // 2. linking external and standard libraries:
        // external binaries such as those for the C++ standard library can be linked together if we have an object code stage.
        // the C++ standard library headers do not have source files, but rather object files for their implementation.
        // (makes sense, why would u want source code, you would have to recompile it each time and libraries can be big).
        // hence it becomes seamless to join libraries together with your code if you have a stage where you link together all the object files
    // 3. improved compiler optimizations
        // having an object file for each separate source file allows the compiler to make smarter optimizations as the binaries are separate.
        // further optimizations are made upon linking.

    return 0;
}

int compilation_flags() {
    // now lets finally take a look at how compilation commands look like in C++
    // compilation in C++ looks identical to C for the most part.

    // recall in C we have:
        // gcc -o notes notes.c 
    // where -o is a flag for the output executable name (notes)

    // in C++ we have
        // g++ -o notes notes.c
    // this uses the g++ compiler. an alternative is MVSC from microsoft.
    // note that you will usually use CMake for large projects , and compilation
    // can get really complex. for these notes you only need g++.

    // the only difference is that c++ has some specific flags:
        // -fno-exceptions: disable exception handling
        // -fno-rtti: disable runtime type info
        // -fvisibility: control symbol visibility

    // even debugging with gdb is the same. just add a -g.

    return 0;
}

int cmake() {
    // recall for C we have Makefiles for generating our builds.
    // CMake takes things further one level.

    // CMake stands for cross platform make. it's a tool that generates build files for us.
    // you write a file called CMakeLists.txt that generates your build files (like makefiles) that end up building your program. 

    // the main advantage is that the same CMakeLists.txt can generate:
        // makefiles on linux
        // visual studio project files on windows
        // xcode project ffiles on macOS
        // other build systems like Ninja

    // that's why cmake is called cross platform make!

    // to learn how to properly write CMakeLists.txt files, see CMakeLists.txt inside ./example-project/
    // to use the CMakeLists.txt that you have typed up, you will want to first create a directory named "build".
    // the CMakeLists.txt should exist at the same level as the build directory (usually in the project root).

    // PROJECT STRUCTURE
    // so your project sturcture should look like this:
    // project/
    // ├── CMakeLists.txt
    // ├── src/
    // ├── include/
    // └── build/  

        // mkdir build
        // cd build
        // cmake ..

    // then inside the build directory, (we already cd'd here), you would just run make:
        // cmake --build .

    // or if we are using make , we could specifically just run `make` in the
    // build directory instead of `cmake --build .`

    // and if we used Ninja ,
        // mkdir build
        // cd build
        // cmake -G "Ninja" ..
        // ninja

    // note that we specify that we are using Ninja to build our files with the -G "Ninja" 
    // also note a generic way to execute build (whether its make or ninja), is to use:
        // cmake --build .

    // this is the common directory structure:
    //     myproject/
        // ├── CMakeLists.txt
        // ├── src/
        // │   └── main.cpp
        // └── build/          # all generated files stay here
        //     └── ...

    // note that you do not add the build folder to your version control.

    return 0;
}

int stdin_stdout() {
    // recall IO streams from C
    // in C++ we have the same thing.
    // for standard input (stdin), c++ takes from the console by default. i.e, waits for keyboard input into the console.
    // for stdout, c++ writes to the console by default.

    // we can use printf() in C++ just like we did in C
    printf("starting stdin_stdout section!\n");
    // but we will focus on using << and working with cout and cin directly (keep reading)

    // using stdout
    // in c++, stdout is handled using the cout stream (cout stands for character output / console output):
    std::cout << "(1) Enter a number: ";

    // note that cout is part of the std namespace, so we use the scope resolution operator ::
    // we will learn more about the scope resolution operator in a later section.. but for now just know that we use it to specify where we want to use cout from.
    // its kind of like when you have a class and you access a method or attribute from that class using . in python, but it's a bit different.

    // using stdin
    // in c++, stdin is handled using the cin stream (cin stands for character input / console input):
    int number;
    std::cin >> number;
    // the above code reads an integer from the console and stores it in the variable number.

    std::cout << "(1) You entered: " << number << std::endl;

    // INSERTION and EXTRACTION OPERATORS:
    // note that we have been using the << and >> operators.
    // these are called the insertion and extraction operators respectively.

    // the insertion operator << is used to insert data into the stream.
    // the stream is the object that handles the input/output, which could be cout or cin, or even a file stream.

    // the extraction operator >> is used to extract data from the stream.
    // for example, when we do std::cin >> number, we are extracting data from the cin stream and storing it in the variable number.

    // you might remember >> and << being bit shift operators in C.
    // in C++, these operators are overloaded to work with streams.
    // that means they can be used for both bit shifting and for streams depending on the context.
    // for example, here is bit shifting:
    int x = 1;
    x = x << 1; // x is now 2
    std::cout << "x is: " << x << std::endl; // prints 2

    // endl
    // note that we have been using std::endl.
    // std::endl is a manipulator that inserts a newline character into the stream and FLUSHES the output buffer.
    // cout can be flushed manually using std::flush, but std::endl is more convenient as it also inserts a newline character.
    // when the buffer is flushed, it means that the data in the buffer is written to the output device (console, file, etc.)
    // notice that when we did "(1) Enter a number: ", this still got printed even though we did not use std::endl.
    // this is because we still did flush the buffer by reading from cin.
    // in other words, here are the following things that flushes cout:
        // 1. using std::endl
        // 2. using std::flush
        // 3. reading from cin
        // 4. newline character '\n'
        // 5. program termination

    // cin behaviour
    // note that cin stops reading input when it encounters whitespace character (space, newline, tab)
    // so if we did the following:
    std::cout << "(2) Enter a word: ";
    std::string sentence; // we make use of the string class from the C++ standard library. more on this later.
    std::cin >> sentence;

    // and we entered "hello world" into the console, sentence would only contain "hello"
    // this is because cin stops reading input when it encounters a space character.
    std::cout << "(2) You entered: " << sentence << std::endl;

    // and to make things worse, if we entered "hello world" into the console, 
    // the next time we use cin, it will read "world" and not wait for input.
    // this is because cin leaves "world\n" in the input buffer,
    // and the next time we use cin, it reads from the buffer and ends when it encounters the newline character.

    // enter "hello world" to the above cin and see what happens when we try to read another string.
    std::cout << "(3) Enter a word: ";
    std::cin >> sentence;
    std::cout << "(3) You entered: " << sentence << std::endl;

    // you should see the following being printed:
    // (2) Enter a word: hello world
    // (2) You entered: hello
    // (3) Enter a word: (3) You entered: world

    // note that we did not even get a newline after "Enter a word: " because cin left it in the buffer.
    // you might have expected this instead:
        // (2) Enter a word: hello world
        // (2) You entered: hello
        // (3) Enter a word:
        // (3) You entered: world
    // but we did not get that because cin left the newline character in the buffer.
    // this might be even more confusing but the reason for this is as follows:
    // the third prompt (3) and its response are printing so quickly (because no actual user input is needed) that they appear on the same line.
    // the program isn't actually waiting for input at the second prompt, so there's no time for you to see a cursor on a new line.
    // this is because cin is reading from the buffer and not waiting for input.

    // to get around this issue, we can "flush" the input buffer.
    // we can do this by using the ignore() function from the cin stream.

    // ignore() function:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // this is how we flush the buffer. we need the <limits> header for this.
    // ill explain how this works:
        // std::cin.ignore() takes two arguments
        // 1.) how many characters to ignore. in this case we are ignoring the maximum number of characters that can be stored in a stream.
        // 2.) the delimiter character. in this case, we are ignoring until we reach the newline character.
        // this means we are ignoring everything in the buffer until we reach the newline character, which effectively flushes it.

    // now we can read a sentence properly:
    std::cout << "(4) Enter a word: ";
    std::getline(std::cin, sentence);
    std::cout << "(4) You entered: " << sentence << std::endl;

    // this time, do the following:
    // Enter a sentence: hello
    // (2) You entered: hello
    // Enter a sentence: hello world
    // (3) You entered: hello
    // Enter a sentence: supercalifragilisticexpialidocious
    // (4) You entered: supercalifragilisticexpialidocious

    // at prompt (3), we entered "hello world" and it only read "hello".
    // then we flushed "world\n" from the buffer.
    // at prompt (4), we entered "supercalifragilisticexpialidocious" and it read the whole thing.

    // in order to take in a whole sentence, you would want to use std::getline
    // std::getline reads an entire line of input, including whitespace characters.
    // it reads this input from stdin and stores it in a string.
    std::cout << "(5) Enter a sentence again: ";
    std::getline(std::cin, sentence);
    std::cout << "(5) You entered: " << sentence << std::endl;

    // this should work as expected and not leave anything in the buffer:
    std::cout << "(6) Enter a sentence for the last time: ";
    std::cin >> sentence;
    std::cout << "(6) You entered: " << sentence << std::endl;

    return 0;
}

void _sleep_for(int ms) {
    // not using usleep because it's not standard c++
    std::this_thread::sleep_for(std::chrono::microseconds(ms));
}

int flushing_the_buffer() {
    // in this function you see how different things flush the buffer.

    // newline flushes the buffer
    std::cout << "Hello newline\n";
    _sleep_for(3000000);

    // endl flushes the buffer
    std::cout << "Hello endl" << std::endl;
    _sleep_for(3000000);

    // cin flushes the buffer
    std::cout << "cin time\n";
    int number;
    std::cout << "Hello cin";
    std::cin >> number;
    _sleep_for(3000000);

    // there is nothing to flush the buffer. only flushes after program termination
    std::cout << "Hello..";
    _sleep_for(3000000);
    // after the sleep is done, program terminates and flushes the buffer.

    return 0;
}

int stl() {
    // recall the C standard library.
    // even though we have a header called <stdlib.h>, the entire C standard library consists of much more headers.
    // here are some of the headers that make up the C standard library:
        // stdlib.h
        // stdio.h
        // string.h
        // math.h
        // time.h
        // ctype.h
        // limits.h
        // float.h
        // stdarg.h
        // assert.h
        // stddef.h
        // errno.h
        // signal.h
    // and so on.

    // <as a refresher, we will go over what <stdlib.h> in C contains.
        // you don't need to read this.

        // memory stuff:
        // malloc() - allocate a block of memory
        // calloc() - allocate and clear a block of memory
        // realloc() - resize an allocated memory block
        // free() - free an allocated block of memory

        // process control stuff:
        // exit() - terminates the calling process
        // abort() - causes asn abnormal program termination
        // system() - executes a shell command

        // conversion functions:
        // atoi() - convert string to int
        // atol - str to long
        // atof -- string to float
        // strtol() - str to long again. has more features
        // strtoll() - str to long long

        // more utilities
        // rand() - generates a pseudo-random number
        // srand() - seeds the pseudo-random number generator
        // qsort() - sorts an array
        // bsearch() - searches an array using binary search
        // abs(), labs(), llabs() - absolute value for int, long, long long
        // div(), ldiv(), lldiv() - quotient and remainder of int division for int, long, long long

    // note that we are only including the headers at the top of our code.
    // the actual implementation of these headers, of the C standard library, is provided by the compiler you use.
    // the compiler, like gcc, is responsible for providing an implementation of the C standard library.
    // gcc specifically provides the GNU C Library (glibc) implementation.

    // the concept is exactly the same in C++.
    // we include headers that are either .h or .hpp files like so:
    // #include "example.hpp"
    // for headers part of the C++ standard library, we do not include a .h or .hpp.
    // for instance:
        // #include <vector>
    // note that this is only for C++ standard library headers!

    // STL vs C++ standard library
    // now the main topic of this section: the STL
    // STL stands for standard template library, which consists of certain iterators and data structures in C++
    // the STL is part of the C++ standard library, i.e; the STL is a subset of the C++ standard library
    // (at least as far as i know, but there seems to be debate around this topic so do your own research).

    // STL specifically refers to the components originally designed by Alexander Stepanov which
    // focus on containers, iterators, algorithms, and function objects.

    // STL headers include:
    // containers
    // #include <vector>
    // #include <list>
    // #include <deque>
    // #include <queue>
    // #include <stack>
    // #include <set>
    // #include <map>

    // algorithms
    // #include <algorithm>

    // iterators
    // #include <iterator>

    // function objects (functors)
    // #include <functional>

    // meanwhile, here are some examples of headers part of C++ standard library but not in STL:
    // I/O streams
    // #include <iostream>
    // #include <fstream>
    // #include <sstream>

    // string handling
    // #include <string>

    // exception handling
    // #include <exception>
    // #include <stdexcept>

    // C++ time
    // #include <chrono>

    // threading
    // #include <thread>
    // #include <mutex>
    // #include <condition_variable>

    // smart pointers and memory
    // #include <memory>

    // all C compatibility headers
    // #include <cstdio>
    // #include <cstring>
    // #include <cmath>
    // etc...

    // regular expressions
    // #include <regex>

    // random numbers
    // #include <random>

    // type support
    // #include <typeinfo>
    // #include <type_traits>

    // the main idea of the STL is that it provides several useful data structures and algorithms for C++.
    // this is a big upgrade from C in terms of high-level usage.
    // remember in C, we do not even have dynamic arrays and must implement everything ourselves.
    // with C++ we don't have to dedicate extra files to reinvent the wheel. simply just use the already implemented DSA from STL.

    return 0;
}

int stl_containers() {
    // in the following sections we will learn about the containers below:

    // SEQUENCE CONTAINERS
        // vector: dynamic array, continuous memory
        std::vector<int> vec; // needs #include <vector>

        // array: fixed sized array, continuous memory
        int arr[] = {1, 2, 3};

        // deque: double ended queue, fast insertion/removal at both ends
        std::deque<int> deq;

        // list: doubly linked list, fast insertion/removal anywhere
        std::list<int> lst; // needs #include <list>

        // forward list: a singly linked lsit , only have next pointers
        std::forward_list<int> flst; // needs #include <forward_list>

    // ASSOCIATIVE CONTAINERS
    // ORDERED
        // map: unique keys with values
        // set: unique keys only
        // multimap: duplicate keys with values
        // multiset: duplicate keys
    // UNORDERED
        // unordered_map: unique keys with values
        // unordered_set: unique keys only
        // unordered_multimap: duplicate keys with values
        // unordered_multiset: duplicate keys

    // don't worry too much about each of the containers right now, we will investigate them each in greater depth.

    // CONTAINERS ARE CLASSES
    // all these containers are actually classes.
    // typically we uppercase (camelcase) classes in C++ (and most other languages) but of course this is not required.
    // for classes from the standard library like vector, string, etc, we do not have CamelCase and instead have snake_case

    // standard library classes: snake case
    // user defined classes: camel case

    return 0;
}

int vectors() {
    // make sure to include vector at the top
    // #include <vector>

    // CREATING VECTORS:
    // empty vector
    std::vector<int> vec;

    // vector of 5 elements initialized to zero
    std::vector<int> vec2(5);

    // vector of 5 elements all initialized to 10
    std::vector<int> vec3(5, 10);

    // initialize vector with manual values
    std::vector<int> vec4 = {1, 2, 3, 4};

    // ADDING ELEMENTS
    vec.push_back(1);
    // add to the end of the vector
    // this is an amortized O(1) operation
    // O(n) when the vector needs to be resized
    // note that the vector gets resized by a factor of 2 each time (doubles in length)

    vec.emplace_back(2);
    // construct element in place at the end
    // specifically we are CONSTRUCTING the element, not copying it
    // this is pointless for types like integers, but useful for things like strings

    // for example,
    std::vector<std::string> str_vec = {"hello"};
    str_vec.emplace_back("world");

    // the above is faster than the following:
    str_vec.push_back("sup");
    // this does two things:
        // 1. creates a temporary string with "hello"
        // 2. moves/copies that string into the vector

    // whereas emplace_back() constructs it directly into the vector's memory, so one step.
    // no temporary string "hello".

    // for integers, it's still one step for emplace_back():
    vec.push_back(69);
    // this does not create a temporary variable

    // so you might wonder, when do we want to use push_back() instead then?
    // if the object already exists, then push_back will be more efficient than emplace_back or at least equally as much.

    std::string existing_string = "Yoskies";
    str_vec.push_back(existing_string);

    // INEFFICENT INITIALIZATION
    std::vector<float> fvec(5, 40);
    // this above is inefficient because it generates 5 integers of value 40
    // then converts them into floats. use '40.0f'instead

    std::vector<float> fvec2(5, 40.0);
    // this is also inefficient because it generates doubles then turns them
    // into floats. we want an 'f' at the end of the 40.0

    std::vector<float> fvec3(5, 40.0f);
    // this is efficient because it directly creates floats.

    return 0;
}

int references() {
    // a reference in C++ is essentially an alias for an already existing variable
    // if x was an existing variable, and we made y a reference of x, then y and x hold the value of the same data in memory.
    // that is, having a reference variable does not take up more memory.
    // so if y is a reference of x, &x == &y
    // this idea is not to be confused with pointers. 

    // POINTERS vs REFERENCES
    // a pointer stores the value of the memory address of a variable...
    // whereas a reference stores the same value of an already existing variable, and has the same address in memory.
    // it's like making a pointer and working with the derefenced value of it.

    // USAGE
    // you might already be familiar with references in python
    // when we do x = [1, 2, 3] and y = x, y becomes a reference of x.
    // we see this in action when we do (x is y) or if we change y[0] = 69, then x[0] also becomes 69

    // we can achieve this same affect in C++, except we must explicitly declare the type as a reference.
    std::vector<int> x = {1, 2, 3};
    std::vector<int>& y = x;

    // now y is a reference to x
    // lets also make 'z', without adding &
    std::vector<int> z = x;

    // now let's change value in x
    x[0] = 69;

    // check y
    std::cout << "y[0] is " << y[0] << std::endl;
    // prints 69

    // check z
    std::cout << "z[0] is " << z[0] << std::endl;
    // prints 1

    // by doing std::vector<int> z = x; , we made a full copy of x. we can see that these exist in different locations in memory.

    std::cout << "address of x is: " << &x << std::endl;
    std::cout << "address of y is: " << &y << std::endl;
    std::cout << "address of z is: " << &z << std::endl; 

    // we see that x and y share the same address whereas z shares a different one:
    // address of x is: 0x7fff7bf00da0
    // address of y is: 0x7fff7bf00da0
    // address of z is: 0x7fff7bf00dc0

    // REFERENCES CLARIFICATION
    // so far we have bene saying y is a reference of x.
    // but it is more accurate to say that x and y are variables that reference the same object.
    // the object of course is the array itself which resides in memory.

    // REFERENCES AS PARAMETERS
    // recall when we wanted to modify some arguments in another function in C,
    // we passed their address. for C++ we can also do the same thing , or we
    // could just use references. using a reference type as the parameter
    // avoids the need to derefence pointer variables.

    // consider this lambda function that takes reference type parameter.
    auto mutate_int = [](int &a) { a += 1; };

    int dada = 69;
    mutate_int(dada);
    std::cout << "dada is now: " << dada << std::endl;
    // prints 70
    // note that we passed in dada which is of type int into the parameter for
    // `a` which is of type &int. this is how references as parameters work.

    // REASSIGNING REFERENCES
    int a = 10;
    int b = 20;
    int& ref = a; // ref now refers to a
    ref = b; // ref still refers to a
    // but now the value of a and ref have been set to the same as b
    ref++; // doesn't affect b , only a and ref
    std::cout << "a: " << a << std::endl;     // 21
    std::cout << "b: " << b << std::endl;     // 20
    std::cout << "ref: " << ref << std::endl; // 21
    return 0;
}

int strings() {
    // we introduce strings in this section. you should already be familiar
    // with c-style strings from c. in c++ we also have the modern std::string
    // class that has a lot of convenient features.

    // C-STYLE STRINGS
    // c-style strings are null-terminated character arrays.
    char cstr1[20] = "Hello";
    char cstr2[] = "World";
    char cstr3[20];

    // basic operations
    strcpy(cstr3, "copy this");
    strcat(cstr1, "world");
    int len = strlen(cstr1);
    int cmp = strcmp(cstr1, cstr2);
    // for more detail see my C notes.
    std::cout << "cmp: " << cmp << ", len: " << len << std::endl;

    // STD::STRING CLASS
    // the std::string class is much safer and more convenient.
    std::string str1 = "Hello";
    std::string str2("World");

    // copy constructor
    std::string str3{str1};

    // the reason we don't have to worry about null termination for std::string
    // is because of how it stores its data. there are three key pieces of info
    // 1. a pointer to the character data
    // 2. the length / size of the string
    // 3. the total capacity (how much memory it is allocated)

    // conceptually , std::string looks something like this:
    class string {
    private:
        char* data;
        size_t length;
        size_t capacity;
    };

    return 0;
}

int string_handling() {
    // we will go over different string operations for std::string class.
    // for learning more about printing to and reading from stdout and stdin ,
    // see stdin_stdout().
    std::string str1 = "hello";
    std::string str2 = "world";

    // CONCATENATION:
    str1 += " " + str2;
    std::cout << "str1 is: " << str1 << std::endl;

    // LENGTH AND EMPTY
    int len = str1.length(); // class method
    bool empty = str1.empty();
    std::cout << "len: " << len << ", empty: " << empty << std::endl;
    // prints `len: 11, empty: 0`
    // note that .size() is an identical method to .length() , they do the same
    // thing , just two names for the same method.
    int len2 = str1.size();
    std::cout << "len2: " << len2 << std::endl; // also prints 11

    // ACCESSING CHARACTERS
    char first = str1[0]; // indexing has no bounds checks , can lead to issues
    char second = str1.at(0); // this has bounds checking , will thorugh an
    // exception , std:out_of_range , instead of undefined behaviour. this is
    // protects against buffer overruns (check out my cyber security notes).

    try {
        char c = str1.at(500);
    } catch (const std::out_of_range& e) {
        std::cout << "exception caught: " << e.what() << std::endl;
    } // to learn more about exceptions , see exceptions() section

    // SUBSTRINGS
    std::string sub = str1.substr(6, 5);
    // substr(int start, int length)
    // so for str1 , we go to index 6 and take 5 characters from there.
    std::cout << "sub: " << sub << std::endl; // should print `sub: world`

    // you can also find substrings:
    size_t pos = str1.find("world");
    if (pos != std::string::npos) {
        std::cout << "found at index: " << pos << std::endl;
    } // npos is returned by .find() when there is no match for substring.
    // prints 6.

    // REPLACING , INSERTING , AND ERASING:
    // we first do some replacing.
    str1.replace(6, 5, "gango");
    // this means , replace the content that starts at index 6 and has length 5
    // (ends at index 11) with the string 'gango'
    std::cout << "str1 is now: " << str1 << std::endl; // prints `hello gango`

    // now inserting.
    str1.insert(6, "wsg ");
    std::cout << "str1 is now: " << str1 << std::endl; // prints `hello wsg
    // gango`

    // now erasing
    str1.erase(11, 3); // erase 3 characters at index 11
    std::cout << "str1 is now: " << str1 << std::endl; // prints `hello wsg go`

    // COMPARISON
    std::string a = "apple";
    std::string b = "banana";

    std::cout << "a < b: " << (a < b) << std::endl;
    // a < b is lexicograhpical comparison. this compares the strings char to
    // char, from left to right by ascii value. so a (97) < b (98) is true.
    // and axyz < b is also true (a* < b is true).

    // an important note on precedence of using < and <<. if for the above we
    // did not have () around (a < b) , we would have issues. the << opertator
    // would evaluate before the < operator. this is what would happen:
    //      1. "a < b: " gets sent to cout
    //      2. a gets sent to cout
    //      3. the result of that cout operation ges compared with b using <
    //      4. the boolean result gets send to cout
    //      5. endl gets sent to cout
    // would print something like "a < b: apple0"

    // generally its better to evaluate the boolean first like:
    bool result = a < b;
    std::cout << "a < b: " << result << std::endl;
    // this prints "a < b: 1".

    // if we want to make it more readable and print
    // true or false instead , we can send boolalpha to cout first:
    std::cout << std::boolalpha << "a < b: " << result << std::endl;
    // this prints "a < b: true".

    // CONVERSON BETWEEN TYPES
    // we can use the stoi function (from std namespace) to go from str to int:
    std::string num_str = "123";
    int num = std::stoi(num_str);

    // and stod to go from str to double:
    std::string doub_str = "3.14";
    double doub = std::stod(doub_str);

    // we can turn numbers to string:
    int val1 = 69;
    double val2 = 69.69;
    std::string st1 = std::to_string(val1);
    std::string st2 = std::to_string(val2);
    std::cout << "st1 is: " << st1 << ", st2 is: " << st2 << std::endl;

    // and we can convert from and to cstrings:
    const char* cstr = "bababooey";
    std::string std_str(cstr); // initializes std_str from cstr
    const char* back = std_str.c_str(); // .c_str() method creates c string.

    // ITERATION
    std::string text = "dandelion";

    // range-based for loop:
    for (char c : text) { // like "for c in text"
        std::cout << c << " ";
    }
    std::cout << std::endl;
    // for understanding range-based for loops , see range_based_for().

    // traditional indexing loop
    for (size_t i = 0; i < text.length(); ++i) {
        std::cout << text[i] << " ";
    }
    std::cout << std::endl;
    // for understanding why we use size_t instead of int , see size_t_type().

    // using iterators:
    for (auto it = text.begin(); it != text.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // to learn more about iterators , see iterators().

    // LITERALS
    // recall string literals from c. we will do a review here.
    char s[] = "hello world!";
    // when we create a string like the above , the compiler creates a string
    // literal "hello world!" so string literals are "baked" into your
    // executable (program image). at run time this is loaded into the read
    // only segment of your process memory , and copied on to the stack.
    // since we did not declare const , the stack gets a COPY of the string ,
    // one we can modify by doing something like s[5] = 'x'.

    // if we use const , then instead of getting a copy of the string , we only
    // get a pointer to it.
    const char* p = "hello world!";
    // this points to the read only segment of your process and cannot be
    // modified. note that s took up two places in memory: in read only and on
    // the stack. p is only a pointer on the stack which points to the string
    // literal in read only data (.rodata). so it is important to add const
    // keyword for when you are not going to be modifying a string--it is more
    // memory efficient. though the compiler may optimize your code by itself ,
    // that is not guaranteed and it's just better to add it yourself.

    // when it comes to std::string , making string variable is not the same as
    // when we do char s[] = "abc".
    std::string s2 = "hello world!";
    // this will create a string literal in .rodata (if an identical one there
    // doesn't already exist) , and then a modifiable copy will be made on the
    // HEAP. the string class constructor is called and the string object is
    // created on the STACK. the object contains a pointer to the string data
    // (like char*) which is allocated on the heap. when the variable goes out
    // of scope , the destructor is called automatically. this is known as
    // RAII , see raii() for more details.

    // here is a diagram of making std::string s2 on the stack.
    /*
            STACK:
    _______________________
    | std::string object  |  <- s2 lives here
    | ___________________ |
    | | char* data -----|-|--> HEAP: ['h']['e']['l']['l']['o']...
    | | size_t size     | |
    | | size_t capacity | |
    | |_________________| |
    |_____________________|

    READ-ONLY (.rodata):
    "hello world!\0"  ← original string literal
    */

    // there is no std::string equivalent to const char* , i.e. , getting a
    // pointer to a string literal in .rodata. for this , just use c-style
    // const char* strings. std::string is designed for safe modifiable data.

    // BEST PRACTICES
    // use std::string over c-style strings because it handles memory on its
    // own , provides bound checking with at() , and has many convenient
    // methods.

    // use at() over [] or ensure your indices are valid when using [] , for
    // example , using idx < text.length().

    // use string literals efficiently by declaring tem as const when they
    // won't change.

    // handle empty strings using .empty() method to be safe.
    return 0;
}

int size_t_type() {
    // size_t is a type in both c and c++ that is an unsigned integer type which
    // usually represents the size of objects in bytes and is commonly used for
    // array indexing and loop counting.
    std::vector<int> vec{1, 2, 3, 4, 5};
    size_t s = vec.size();
    std::cout << "vec size is: " << s << std::endl;

    // since size_t is unsigned , it can only be of a positive value , which
    // makes it perfect for sizes and counts that are inherently non-negative.
    // the actual size of size_t depends on your platform. on 64 bit systems ,
    // its typically 64 bits / 8 bytes. while on 32 bit systems , it's usually
    // 4 bytes.

    for (size_t i = 0; i < s; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    // even though size_t can be used for the bytes an object takes , it can be
    // used for things like counting elements as well because it's an unsigned
    // int.

    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    // suppose we did int instead of size_t , the compiler could generate
    // comparison warings about comparing int with vec.size() which is of type
    // size_t. though it might not ... mine seems to be fine lol.

    // it's also worth noting that since size_t is unsigned and also usually
    // larger than int , it can contain larger numbers without overflowing.
    std::cout << "size_t size is: " << sizeof(size_t) << " bytes." << std::endl;
    std::cout << "int size is: " << sizeof(int) << " bytes." << std::endl;

    return 0;
}

int range_based_for() {
    // range based for loops are like python "for x in container" loops. very
    // simple. here is the usual synax:
    /*
    for (auto element : container) {
        body
    }
    */

    // here's a simple example with vectors
    std::vector<int> vec{1, 2, 3, 4, 5};
    for (int i : vec) { std::cout << i << " "; }
    std::cout << std::endl;

    // we can use this on any iterable containers like strings , vectors , maps
    // and sets. they work with any containers that provide begin() and end()
    // iterators. more on interators in the next section iterators(). you can
    // also use the auto keyword for the element type and the compiler will
    // deduce the type automatically.
    std::vector<std::string> v1 = {"hello", "you", "are", "my", "friend."};
    for (auto e : v1) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    // we could have also just used std::string for the type on e instead.

    // USING REFERENCES WITH RANGE BASED LOOP
    // you can also use references to change the items in place instead of
    // using indices. this is very useful you want to both mutate and perform
    // some operations with the elements.
    int sum = 0;
    for (int& num : vec) {
        sum += num;
        num++;
    } // this modifies the items in vec and without needing for indexing.
    std::cout << "new vec values: ";
    for (int i : vec) { std::cout << i << " "; }
    std::cout << std::endl;
    std::cout << "value of sum is: " << sum << std::endl;

    // USING CONST
    // we can also use const with reference type for safety if we do not want
    // modify values. this provides no perfomance benefit for speed or memory
    // afaik , but is good for safety.
    for (const std::string& word : v1) {
        std::cout << word << " ";
    }
    std::cout << "again." << std::endl;
    // the reference prevents us from copying the whole string object over each
    // iteration and the const prevents us from accidentally modifying data we
    // don't want to modify. together they make a good pair.
    return 0;
}

int iterators() {
    // iterators in c++ act like pointers , allowing you to traverse through
    // containers easily. they provide an abstraction layer between algorithms
    // and data structures.

    // TYPES OF ITERATORS
    // there are many different kinds of iterators:
    // input iterators:
    //      read-only , forward movement only
    // output iterators:
    //      write-only , forward movement only
    // forward iterators:
    //      read/write , forward movement only
    // bidirectional iterators:
    //      read/write , forward and backward movement
    // random access iterators
    //      read/write , can jump to any position. most powerful type iterators.

    // ITERATORS WITH VECTORS
    // we use auto for iterator types because the actual type can be ugly.
    std::vector<int> vec = {1, 4, 8, 16, 32, 64};
    auto it = vec.begin(); // points to first element
    auto end_it = vec.end(); // points to last element

    // you can dereference iterators to access the items:
    std::cout << "*it: " << *it << std::endl;
    // prints 1. increment it will change actual values!
    (*it)++;
    std::cout << "vec[0]: " << vec[0] << std::endl;

    // you can move iterator to next element:
    ++it;
    std::cout << "*it: " << *it << std::endl;

    // vector iterators are random access iterators and can jump many positions
    // at a time:
    it += 2; // should now be at 4th index.
    std::cout << "*it: " << *it << std::endl; // prints 16

    // random access iterators also have an ordering to them. that is , for all
    // iterators i , i < i + 1. you can also calculate the middle iterator like
    // this:
    auto middle = vec.begin() + vec.size() / 2;
    std::cout << "*middle: " << *middle << std::endl; // prints 16

    // or find the "distance" of the vector like this:
    auto distance = vec.end() - vec.begin();
    std::cout << "distance: " << distance << std::endl; // prints 6

    // in contrast to vectors , std::list iterators are only bidirectional.
    // cannot have it + n , only ++ and --. std::forward_list iterators are
    // only forward , cannot do -- , only ++. std::map and std::set are both
    // bidirectional like std::list.

    // ITERATORS IN LOOPS
    // you can also use iterators in a loop like this:
    std::cout << "vec is: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // the reason we do ++i instead of i++ is for better performance. i++ does:
    auto increment = [](int& i) {
        int tmp = i;
        i += 1;
        return tmp;
    };
    // creates a temporary variable and returns the value before incrementing.

    // ++i does this:
    auto good_increment = [](int& i) {
        i += 1;
        return i;
    };
    // for primitive types this won't make that much of a difference because
    // compilers usually optimize the code. but this matters a lot with
    // iterators and objects. imagine the increment function , but our tmp
    // calls a constructor instead of simply = i. this is very bad as we will
    // be calling a constructor every iteration.. much slower.

    // REVERSE ITERATORS

    // CONST ITERATORS

    // STL ALGORITHM WITH ITERATORS

    // CUSTOM ITERATORS

    return 0;
}

int aggregates() {
    // in C++ an aggregate is a type that allows its members to be initialized directly with curly brace initialization.
    // this is known as aggregate initialization.
    // think of it as a simple type that is essentially just a collection of its members.

    // a struct or class in C++ (more on classes later) is an aggregate if it has all of these properties:
        // 1. no user-declared or inherited constructors
        // 2. no private or protected non-static data members
        // 3. no virtual functions of virtual base classes
        // 4. no default member initializers

    // don't worry if you don't know about virtual functions and default member
    // initializers. we will cover these topics later. if you don't know about
    // constructors or access specifiers (private, protected, public), then you
    // can see the respective functions: constructors() and classes().

    // STRUCTS
    // here's an example of an aggregate struct:
    struct Point {
        int x;
        int y;
        void print_pair() { std::cout << '(' << x << ',' << y << ')' << std::endl;}
    };
    Point p = {1, 2}; // aggregate initialization works
    p.print_pair();

    // another
    struct Point2 {
    public:
        int x;
        int y;
        void print_pair() { std::cout << '(' << x << ',' << y << ')' << std::endl;}
    };
    Point2 p2 = {1, 2}; // aggregate initialization works

    // here's a non aggregate struct:
    struct Point3 {
    public:
        int x;
    private:
        int y;
    };

    // Point3 p3 = {1, 2};
    // uncommenting this gives an error.

    // this doesn't work either:
    // Point3 p3 = {1};

    // can only do this:
    Point3 p3;
    p3.x = 1;
    // or we could also just make a constructor inside Point3 and use that.

    // CLASSES
    // here is an example of an aggregate class:
    class Player {
        public:
            int health;
            int mana;
            int stamina;

            bool is_low_hp () { return health < 25; }
    };
    Player p1 = {100, 70, 200}; // aggregate initialization works!

    // here is an example of a non-aggregate class:
    class Wizard {
        int health;
        public:
            int mana;
    };
    // uncommenting this throws an error since we have a private class member (health)
    // Wizard wiz = {100}; 

    // classes' default access specifier for members is private, and for structs it's public.
    // more on this in the classes() section.

    // here is another example of a non-aggregate class:
    class Knight {
        public:
            int armor;
            int health;
            int strength;
            Knight(int a, int h, int s) : armor(a), health(h), strength(s) {}
    };

    // this code works.. but it's not aggregate initialization!
    Knight kit = {69, 69, 69};
    // even though it is identical to aggregate initialization, 
    // it's actually calling the constructor we defined with the brace-init-list being used as a list of args.
    // this feature is part of C++'s uniform initialization syntax (aka brace initialization) 

    // so you might ask, "if they look the same, what's the difference?"
    // answer:
        // 1. aggregates are simple data than the compiler can optimize more aggressively.
        //    the compiler knows exactly how they are laid out in memory.
        // 2. with aggregates, we automatically get member-wise operations for free without having to write any special code.
        //    i.e, we don't write any constructors and the compiler can generate optimal copying, moving, and comparison operations.
        // 3. when we add a constructor, we're telling C++ that "we want control over how my object is initialized".
        //    this is inherently different from just saying, "this is just a bundle of data"--exactly what an aggregate is.

    // here are some further examples:
    class Aggregate {
    public:
        int x;
        int y;
    };
    class NonAggregate {
        public:
            int x;
            int y;
            NonAggregate(int a, int b) : x(a), y(b) {}
    };
    // these behave differently:
    Aggregate a1;           // x and y are default-initialized (could be garbage)
    // NonAggregate n1;       // won't compile - no default constructor

    Aggregate a2 = {1};    // sets x=1, y is zero-initialized
    // NonAggregate n2 = {1}; // won't compile - constructor needs 2 args

    return 0;
}

int macros() {
    // TODO: make notes
    return 0;
}

// some functions for the notes in deleted_functions() section.
void bad_function(int a) = delete;
void set_volume(int level) { std::cout << "volume set to " << level << std::endl; }
void set_volume(float) = delete;
void set_volume(double) = delete;

int deleted_functions() {
    // a deleted function is one that is explicitly marked with `delete`. when
    // you try to call a deleted function , the compiler will generate an error
    // instead of using it. for example , we have a deleted function right above
    // this section , `bad_function(int a)`.

    // bad_function(5);
    // uncommenting the above will give the following error:
    /**
        $ g++ .\notes.cpp
        .\notes.cpp: In function 'int deleted_functions()':
        .\notes.cpp:XXXX:XX: error: use of deleted function 'void bad_function(int)'
         XXXX |     bad_function(5);
              |     ~~~~~~~~~~~~^~~
        .\notes.cpp:XXXX:X: note: declared here
         XXXX | void bad_function(int a) = delete;
              |      ^~~~~~~~~~~~
    */

    // you might wonder what the point of this is. this can be useful from
    // preventing unwanted conversions. see the function set_volume(int level)
    // defined above. see that we delete set_volume with float and double args.

    // this means we can call:o
    set_volume(3);

    // but not
    // set_volume(3.5);
    // uncommenting the above gives an error at compilation.

    // this idea extends to things like memory management safety. for example ,
    // suppose we only want to have our arguments as string type:
    /**
    void processData(const std::string& data) {
        // safe: takes string reference
        std::cout << "Processing: " << data << std::endl;
    }

    void processData(char*) = delete;
    void processData(const char*) = delete;
   */
    // this forces only string usage.

    // deleted functions are also used in member functions for classes. you can
    // delete copy and assignment and you can prevent type conversion. consider
    // this class:

    class DatabaseConnection {
    private:
        DatabaseConnection() = default;

    public:
        static DatabaseConnection& getInstance() {
            static DatabaseConnection instance;
            return instance;
        }

        // delete copy constructor
        DatabaseConnection(const DatabaseConnection&) = delete;

        // delete assignment operator
        DatabaseConnection& operator=(const DatabaseConnection&) = delete;

        // also delete move operations for strict singleton
        DatabaseConnection(DatabaseConnection&&) = delete;
        DatabaseConnection& operator=(DatabaseConnection&&) = delete;

        void connect() { /* database connection logic */ }
    };
    // you may not know about move operartions and std::move yet. if so , don't
    // worry. you will learn about later on in constructors(). same
    // goes for copy constructors.

    return 0;
}

int free_and_malloc_review() {
    // recall in C we would use malloc and free. we also can in C++.
    int* ptr1 = (int*)malloc(sizeof(int));
    free(ptr1);

    // but lets review how the program knows how much to free.
    // when we first do malloc(sizeof(int)) , the runtime system tracks
    // allocation sizes. when we call free() , the runtime system is looked
    // up to determine how much to free.

    char* ptr = (char*)malloc(100);  // you specify 100 bytes
    int* nums = (int*)malloc(10 * sizeof(int));  // you specify 40 bytes

    // internally, most implementations do something like storing the size of
    // array just before your data like this:

    // [SIZE_INFO][YOUR_DATA_STARTS_HERE]
    //            ^-- your pointer points here

    free(ptr);   // free() looks backward to find the stored size (100)
    free(nums);  // free() looks backward to find the stored size (40)

    // a common mistake is doing this:
    char* ptr2 = (char*)malloc(100);
    ptr2 += 50;  // move pointer to middle of allocation.

    #pragma GCC diagnostic ignored "-Wfree-nonheap-object"
    free(ptr2);  // CRASH! free() can't find the size info because ptr no longer
    //             points to start.
    #pragma GCC diagnostic warning "-Wfree-nonheap-object"
    // the lines with #pragma suppress compile warnings.
    return 0;
}

int memory_model() {
    // TODO: complete this section
    return 0;
}

int new_delete_operators() {
    // in C++ we can also use the 'new' and 'delete' keyword for memory management.

    // we can also use 'new' now:
    int* ptr2 = new int;
    delete ptr2;

    // MALLOC vs NEW
    // new does two things:
        // 1. allocates memory onto heap (like malloc)
        // 2. calls the constructor of the object (particuarly useful for classes)

    // it's just like in Java when use 'new'
    // it is particularly useful for when we have classes

    class Dog {
    private:
        char* name;
        int age;

    public:
        // this is a constructor
        Dog(const char* dog_name, int dog_age) {
            name = new char[strlen(dog_name) + 1];
            strcpy(name, dog_name);
            age = dog_age;
        }

        // this is a destructor
        ~Dog() {
            delete[] name;
        }

        void getName() {
            std::cout << "my name is " << name << std::endl;
        }
    };

    // to see more about oop, jump to the oop function below in the notes
    // now lets see how new and delete work with classes:

    Dog* doggy = new Dog("saad", 20);
    // this allocates all the memory for the Dog class
    // the memory allocated is calculated by how many 'member variables' we have
    // that is:
        // char* name (8 bytes)
        // int age (4 bytes)
    // if the compiler also adds padding to the Dog class for allignment then
    // that will also be allocated. in other words , the compiler allocates
    // sizof(Dog) bytes... note the sizeof() operator accounts for padding.
    // after allocation , compiler also calls the constructor.

    // if we didnt use new, it would just allocate the memory on the stack:
    Dog doggy2 = Dog("saadu", 200);
    // this object only lives on the stack frame and not the heap

    // now we can call the destructor with delete:
    delete doggy;
    // this does the following:
        // 1.) call the destructor
        // 2.) frees memory like calling free()
    // remember , since everything is statically typed in C / C++ , the
    // compiler knows how much size each type takes. hence calling free() on a
    // Dog pointer (doggy) frees sizeof(Dog) bytes. same thing for delete.
    // note: every new must have a matching delete!

    // now doggy is a dangling pointer, so we should set it to nullptr:
    doggy = nullptr;

    // NEW WITHOUT NEW
    // the other way to do it would be like this:
    doggy = (Dog*)malloc(sizeof(Dog));
    Dog temp = Dog("shazaza", 69);
    memcpy(doggy, &temp, sizeof(Dog));
    doggy->getName();
    // prints shazaza
    // however this is very bad. memcpy() copies the pointers from temp to
    // doggy. so temp.name and doggy->name both point to the same memory.

    // DELETE WITHOUT DELETE
    doggy->~Dog();
    free(doggy);
    doggy = nullptr;

    // we also use delete[] instead of delete when working on arrays
    int* ptr = new int(1);
    delete ptr;

    int* arr = new int[10];
    delete[] arr;

    // using delete when you should be using delete[] and vice versa can lead to undefined behavior.
    // if we used delete on arr, it could only dealloc the first element
    // if we used delete[] on ptr, it could dealloc more than it should

    // WHEN TO USE MALLOC
    // you might think that its pointless to use new for pointers to data with no constructors like this:
    int* int_ptr = new int(5);
    // and you would be half right.
    // it has no practical difference between using a malloc call:
    int* int_ptr2 = (int*)malloc(sizeof(int));

    // integers have no constructors so they both do the same thing in effect.
    // the main difference is that using new is a lot cleaner.

    // the main scenarios in which we need malloc() are when:
        // 1.) interfacing with C code
        // 2.) need to use realloc() calls
        // 3.) when implementing very custom memory allocators and doing low level memory management

    // at application level C++, you will rarely use malloc().
    // in fact, both new and malloc() are less preferred than something like smart pointers.
    // modern c++ prefers smart pointers for safety.. see smart_pointers() to learn more.

    return 0;
}

int oop() {
    // one of the main upgrades of C over C++ is the that it allows for object oriented programming.
    // object oriented programming allows for classes, which will be the discussed in the next section

    // with object oriented programming we have:

    // 1. BASIC CLASS/OBJECT FEATURES
        // structs with oop capabilities
        // member functions (methods)
        // data members (fields)
        // access specifiers
        // constructors
        // destructors
        // `this` pointer
        // static members

    // 2. INHERITANCE FEATURES
        // single inheritance
        // multiple inheritance
        // virtual functions
        // pure virtual functions (abstract methods)
        // abstract classes and interfaces
        // virtual destructors
        // override and final specifiers
        // base class access specifiers

    // 3. ENCAPSULATION FEATURES
        // getters and setters
        // friend functions and classes
        // nested classes

    // 4. POLYMORPHISM FEATURES
        // runtime polymorphism
        // compile time polymorphism
        // operator overloading
        // virtual function tables

    // 5. TEMPLATES & GENERIC PROGRAMMING
        // class templates
        // function templates
        // template specialization
        // variadic templates

    // 6. OTHER FEATURES
        // const member functions
        // object composition
        // RAII (resource acquisition is initialization)
        // member initializer lists
        // default and delete functions
        // rule of three/five

        // in the coming sections we will delve into all of these topics
    return 0;
}

int classes() {
    // in this section we explore the fundamentals of classes
        // what are classes
        // class members
        // member functions
        // access specifiers

    // WHAT ARE CLASSES ?
    // classes are encapsulation of data.
    // they encapsulate two things:
        // member variables (infomartion)
        // member functions (methods)

    // these are member functions which we will delve into soon
    // here is a basic example of a class

    class Student {
    private:
        char* name;
        int age;

    protected:
        int money = 0;

    public:
        // constructor (more on these later)
        Student(const char* student_name, int student_age) {
            name = new char[strlen(student_name) + 1];   // this allocates memory
        }
        void moneyUp(int m) {
            money += m;
        }
    };

    // syntax remarks:
    // note that that we need to add ; to the end of the class definition
    // also note that private, protected, and public (access specifiers) are aligned with the class keyword. more on access specifiers soon.

    // CLASS MEMBERS
    // we refer to the components of a class--the variables it stores and functions it has--as class members.
    // so variables are class members, often called: data members, member variables, or fields
    // and class functions are also class members, often called: methods or member functions

    return 0;
}

int access_specifiers() {
    // access specifiers are keywords that determine the visibility of class members.
    // there are 3 access specifiers: private, protected, and public:

    // private:
        // only accessible within the scope of the class itself
    // protected:
        // accessible within the scope of the class itself and also any derived (children) classes
    // public:
        // accessible from any scope the object is visible

    // if we dont declare an access specifier, we use the "default access specifier".
    // for classes the default access specifier is private
    // for structs the default access specifier is public

    struct cool_struct {
        // no access specifier 
        int x;
        char y;

        // access specifier
    private:
        int z;
    public:
        // constructor for struct
        cool_struct(int ex, char why, int zee) {x = ex; y = why; z = zee;}
    };
    // you might not be familiar with using oop tools on structs like access specifiers and constructors, but dont worry for now! (we will cover this in the next section)

    // now we see that we can still access the field x even though we gave it no access specifier.
    cool_struct structo = cool_struct(4, 'a', 1); // construct locally
    std::cout << "structo.x is " << structo.x << std::endl;
    // we are able to access structo.x by default

    // now lets see the default access for a class
    class Dog {
        char* name; // default access
    public:
        Dog(const char* n) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }
        void getName() { std::cout << name << std::endl; };
        ~Dog() {
            delete[] name;
        }
    };

    Dog* saadu = new Dog("saadu");
    saadu->getName(); // prints "saadu"
    // saadu->name;
    // if we uncomment the above it gives us an error as the member is not accessible. code wont compile

    return 0;
}

int structs() {
    // we have oop features in structs.
    // we can use access specifiers and create member functions:

    struct Point {
    private:
        int x, y;
    public:
        // constructor
        Point(int x_val, int y_val) {
            x = x_val;
            y = y_val;
        }

        // no destructor needed as we do not have any allocations to clean up

        // member function
        double l2_norm() {
            return sqrt(x*x + y*y);
        }
    };

    // note that we made a constructor inside the struct, the Point() function member.
    Point* p = new Point(10, 18);
    std::cout << "l2 norm is: " << p->l2_norm() << std::endl; 
    delete p; // cleanup

    // structs also support:
        // 1. inheritance from classes or other structs
        // 2. virtual functions for polymorphism
    // and more stuff. we don't know about these yet so we will not demonstrate them currently. read inheritance and virtual functions section to see.

    // CLASSES vs STRUCTS
    // clearly structs seem to have nearly everything classes do. 
    // so we ask: what is the difference between the two? why are classes needed?
    // well.. they're actually not! there is not any technical benefit of using classes rather than structs.
    // structs can do everything classes can.
    // the only differences are as follows:
        // default access specifier for structs is public and for classes it's private
        // default inheritance for structs is public and for classes it's private (more on this later)

    // other than that, structs can mimic classes entirely the same.
    // there is no technical advantage in C++ to also having classes.
    // however, using classes has a semantic meaning to it.

    // WHY USE CLASSES INSTEAD OF STRUCTS ?
    // it comes down to philosophy and what programmers typically expect.
    // for complex data types with many features, components, and interactions with other data: use classes
    // for simpler data types where you just need a container to store some information: use structs

    // you can think of it like this:
        // use structs when you would want to use JS objects {}
        // use structs when you want to just a container for some data

    // so the point is, even though structs can be tailored to fully mimic classes, they can also be very simple like this:

    struct point2 {
        int x;
        int y;
    };

    // structs can always mimic classes, but classes cannot always mimic structs.

    return 0;
}

int initializer_lists() {
    // before we get into the different kinds of constructors and destructors, we will go over some unique C++ syntax for initializing class members.

    // consider the following class
    class Dog {
    private:
        char* name;
        int age;
    public:
        Dog(const char* n, int a) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            age = a;
        }
        ~Dog() {
            delete[] name;
        }
    };

    // for initializing the name, we allocate some memory for it then copy over the name parameter (n).
    // we can make this constructor much more simple and easier to read by using "initializer list" syntax:

    class Cat {
    private:
        char* name;
        int age;
    public:
        Cat(const char* n, int a) : name(new char[strlen(n) +1 ]), age(a) {
            strcpy(name, n);
        }
        ~Cat() { delete[] name; }
    };

    // the syntax uses a colon : after the constructor params, followed by comma separated initializations,
    // i.e age(a), name(...).

    // each member is initialized in the format: member_name(initial_value)
    // these initializations happen before the constructor body executes, which then calls strcpy(name, n)

    // to make things even better, we can do the following:
    class Tiger {
    private:
        char* name;
        int age;
    public:
        Tiger(const char* n, int a) : name(copy_name(n)), age(a) {}
        ~Tiger() { delete[] name; }

        char* copy_name(const char* n) {
            char* copy = new char[strlen(n) + 1];
            strcpy(copy, n);
            return copy;
        }
    };
    //  this way our copy logic is separated from constructor and it is more readable
    // we could also just use the std::string class instead

    class Bear {
    private:
        std::string name;
        int age;
    public:
        Bear(std::string n, int a) : name(n), age(a) {}
    };
    // std::string constructor automatically handles copying the string so we don't need to do it ourselves.
    // and we have no need for a destructor because string handles its own cleanup automatically.
    // for notes on how std::string works, see the strings() function.

    // UNDER THE HOOD
    // what exactly does member_name(initial_value) do?
    // it invokes initialization rules that vary based on the type!

    // INITIALIZATION FOR FUNDAMENTAL PRIMITIVES
    // for something like age(a), it simply does age = a
    // the value is written directly into the memory location for that member

    // INITIALIZATION OF POINTERS
    // for something like name(n) where n is of type char* it is similar to the initialization for fundamental types.
    // we just have name = n. if we have name(new char[10]), then of course we allocate that memory first and give the address to name directly

    // INITIALIZATION FOR CLASS TYPES
    // for something like name(n) where n is type std::string it is more complex.
    // name(n) calls the appropriate constructor for the class, in this case for std::string.
    // the string's constructor is used to initialize the member directly.

    // the most important part to pay attention to is for classes.
    // always remember that member(value) will invoke the constructor of the value class if value is a class type.

    // INITIALIZATION ORDER
    class Example {
        int a;
        int b;
    public:
        // Even though b is listed first, a will be initialized first
        // because that's the declaration order in the class
        Example() : b(42), a(b) { }  // DANGEROUS! 'a' gets undefined value
    };

    // WHY USE INTITIALIZER_LISTS
    // it is not only more readable , but also more efficient for class type
    // data members. when using assignment in the constructor body , you end up
    // doing two things:
    // 1. default constructing objects
    // 2. assigning new values to objects

    // for intitializer lists , you directly initialize the values by calling
    // their parameterized constructors. that is one operation instead of 2.
    // a parameterized constructor is simply a constructor that takes parameters
    // but you will learn more about this in constructors().

    // another note is that references and consts members must be initialized.
    // they can't be assigned. for example:
    class Wrapper {
        int& ref;
    public:
        Wrapper(int& r) : ref(r) {}

        // we can't do this ,
        // Wrapper(int& r) { ref = r; }
    };
    // because when you try to assign a reference in the constructor body ,
    // the reference member was never initialized to begin with. ref was
    // never initialized , so when we get to ref = r , the compiler sees
    // this as trying to use an uninitialized reference , which is not
    // allowed.

    // intializer lists on the other hand are like directly initializing the
    // members. like doing:
    int r = 5;    // r is the integer reference we pass in
    int& ref = r; // initialize list essentially does this

    // for assigning in the body , it's like this:
    // int& ref2;
    // ref2 = r;
    // uncommenting the `int& ref2;` gives an error because you cannot have
    // uninitialized references. which is what the problem is with not using
    // initializer lists.

    // same
    return 0;
}

int constructors() {
    // we have already seen constructors being used a few times. we will delve a
    // bit deeper into them now.

    // DIFFERENT TYPES OF CONSTRUCTORS
    // suppose you want to create an "empty" object of a class with no
    // parameters passed in. or suppose you want to create an object with
    // parameters. or suppose you want to copy the data from one object into
    // another, that is; have them reference the same data for this we need
    // different kinds of constructors:
        // 1.) default constructor: no parameters
        // 2.) parameterized constructor: takes params
        // 3.) copy constructor: creates a copy from an existing object
        // 4.) move constructor: transfers "ownership"

    // SYNTAX
    // constructors and destructors must have the same name as the class that
    // they are made for.
    class Vehicle {
    private:
        int year;
    public:
        Vehicle(int year) : year(year) {}
        ~Vehicle() = default;
    };
    // see that we have a member function with the signature `Vehicle(int year)`
    // that is the constructor. and ~Vehicle() is the destructor. don't worry
    // if you don't know what `default` means right now , just recognize that
    // the name of constructor must be same as the class name , and the name of
    // destructor must be same as class name with ~ prefix.

    // since there are 4 different constructors , and many nuances to each ,
    // i have split the notes into subsections:
    // - default_constructors()
    // - trivial_constructors()

    // PARAMETERIZED CONSTRUCTORS
    // these are pretty straight forward. all parameterized constructors are
    // user defined. a parameterized constructor allows you to pass values and
    // execute some code when creating an object , giving you control over how
    // the object is initialized.

    // here is an exarmple
    class Rect {
    private:
        int width, height;

    public:
        // parameterized constructor
        Rect(int w, int h) {
            width = w;
            height = h;
            std::cout << "making rect!" << std::endl;
        }
    };

    // always prefer using intitializer lists over assignment in constructors ,
    // especially for const members , references , and objects without default
    // constructors. this is because with initializer lists , you're actually
    // initializing the members. with assignment in the constructor body ,
    // you're first default constructing them , then assigning new values. to
    // see more , read the initializer_lists() function

    // using intializing lists
    class Rectangle {
    private:
        int width, height;

    public:
        // parameterized constructor
        Rectangle(int w, int h) {
            width = w;
            height = h;
            std::cout << "making rect!" << std::endl;
        }
    };

    // note then when you use parameterized constructors , or define any
    // constructor for that matter , the compiler will not automatically
    // generate a default constructor. you will have to explicitly define it
    // with = default. see the default_constructors() section for more.

    // CONSTRUCTOR OVERLOADING
    // you can have many different signatures for constructors.
    class Point {
    private:
        int x, y;

    public:
        Point(int val) : x(val), y(val) {}              // single parameter
        Point(int xVal, int yVal) : x(xVal), y(yVal) {} // two parameters
    };
    // pretty clear why this is useful.

    // CONSTRUCTORS AND INHERITANCE
    // when you have inheritance , constructors are called from the base class
    // first. this happens implicitly , you don't explicitly call the base
    // constructor in most cases. consider the following classes:
    class Base {
    public:
        Base() { std::cout << "Base default constructor\n"; }
    };
    class Derived : public Base {
    public:
        Derived() { std::cout << "Derived constructor\n"; }
    };

    Derived d; // output: "base default constructor" then "derived constructor"

    // for parameterized constructors:
    class Base1 {
    public:
        Base1() { std::cout << "Base1 default constructor\n"; }
    };
    class Derived1 : public Base1 {
        int x;
    public:
        Derived1(int n) : x(n) { std::cout << "Derived1 constructor\n"; }
    };
    Derived1 d1(5);
    // output: "base1 default constructor" then "derived1 constructor"
    // as you see , the parameterized constructor still calls the base class
    // constructor. if you're wondering 'why?' then consider if the base class
    // had some data members. the derived class would want to inherit those and
    // thus the base class constructor must be called to define those values.

    // now what if we want to call the parameterized base constructor ? then we
    // need to call it explicitly:
    class Animal {
    public:
        std::string name;
        Animal(std::string name) : name(name) {}
    };
    class Cat : public Animal {
        int fluff_level;

        // we can't have this , we need to explicitly call the base constructor.
        // uncommenting the below will give an error:
        // Cat(int f, std::string name): fluff_level(f) {}

        // we need to call it like so:
        Cat(int f, std::string name) : Animal(name), fluff_level(f) {}

        // also note that we cannot have any default constructors for Cat since
        // we do not have one for its base class Animal:
        Cat() = default;
        // this ends up being deleted.. won't cause any compile issues. if you
        // don't know about default constructors , don't worry , you will learn
        // about them in default_constructors()
    };

    // similarly , if we define no constructor for a derived class whose parent
    // has no default constructor , then the compiler will generate a deleted
    // default constructor for the derived class:
    class Dog : public Animal {
    public:
        bool neutered;
    };
    // doing the below causes an error for calling a deleted function:
    // Dog doggo;
    // if you are unfamliar with compilers automatically generating constructors
    // then don't worry , you will learn about that in default_constructors() as
    // well.

    // but what happens if we have both a default and a parameterized constructor
    // in the base class ?
    class Employee {
        int age;
        int salary;
    public:
        Employee() {
            std::cout << "default employee constructor called" << std::endl;
        }
        Employee(int age, int pay) : age(age), salary(pay) {
            std::cout << "parameterized employee constructor called" 
                << std::endl ;
        }
    };

    class HourlyEmployee : public Employee {
        int hours;
    public:
        HourlyEmployee(int age, int pay, int hours) : Employee(age, pay),
            hours(hours) {
            std::cout << "hourly employee constructor called" << std::endl;
        }
    };

    // this calls only the base class' parameterized constructor , we won't call
    // the base class' default constructor if we make an explicit call to the
    // parameterized one.
    HourlyEmployee emp(5, 60, 100);
    // if we hadn't made the specific call , then we would've called the default
    // constructor instead.

    return 0;
}

int default_constructors() {
    // consider the following class:
    class Doggo {
    private:
        char* name;
        int age;
        char* breed;
        int weight;
    public:
        Doggo() {} // this is a default constructor
    };
    // in the class above , see that there are no parameters for the
    // constructor. when a constructor can be called with no arguments , we say
    // it is a default constructor. there are three types of default
    // constructors:
    // 1. compiler generated default constructor
    // 2. explicitly default constructor
    // 3. user defined default constructor

    // the one above is a user-defined default constructor. this is similiar to
    // an explicitly defined default constructor , but there are subtle
    // differences. below is an explicitly defeault constructor
    class Cato {
    private:
        char* name;
        int age;
        char* breed;
        int weight;
    public:
        Cato() = default; // explicitly default constructor
    };
    // `Cato() = default` asks the compiler to generate the default constructor
    // for us. the explicitly default construct , `Cato = default` , is
    // usually a better version of using a user defined default constructor ,
    // like `Doggo() {}`. to see the differences between them , check out the
    // default_constructors() function below.

    // in both cases , now that we have a default constructor , we can create
    // objects without explicitly initializing them.
    Cato cato;
    // this implicitly initializes them with the default constructor. that is
    // exactly what default constructors are for.

    // DIFFERENCE BETWEEN EXPLICIT AND USER DEFINED DEFAULT CONSTRUCTOR
    // consider these two classes:
    class Dog {
    private:
        char* name;
        int age;
        char* breed;
        int weight;
    public:
        Dog() {} // user defined default constructor
    };

    class Cat {
    private:
        char* name;
        int age;
        char* breed;
        int weight;
    public:
        Cat() = default; // explicitly default constructor
    };

    // the diffence between Dog() {} and Cat() = default is that:
    // - explicit default constructor yields a trivial constructor if all member
    //   variables have default constructors. user-defined is always non trivial.
    //   to understand what trivial constructors are , see the function
    //   trivial_constructors() below.
    //
    // - explicit default would generate the default constructor with all the
    //   implicit properties like constexpr and noexcept when possible. user
    //   defined does not implicitly apply noexcept or constexpr. you need to
    //   declare those on your own.
    //
    // - for explicit default , if the class can't be default constructed (it
    //   has a reference or const member without a default member initializer ,
    //   we'll see an example below) then the compiler will declare the
    //   constructor as deleted. the class will then remain valid to declare ,
    //   but won't be instantiable and give "deleted function" errors when you
    //   try. for user-defined , the constructor will NOT be declared as deleted
    //   and instead will just be ill-formed. this means you will get a compile
    //   error. if you don't know what a deleted function is , see the section
    //   deleted_functions()

    // here is an example of when explicit default makes the constructor
    // deleted.

    class Example1 {
        int& ref; // reference must be default initialized
    public:
        Example1() = default; // this becomes implicitly deleted
        Example1(int& ref) : ref(ref) {}
    };
    // the reason the compiler will implicitly delete the default constructor is
    // because it doesn't have any vaue for ref. it's a reference so it needs to
    // refer to something. you can't have an empty reference. you would need to
    // initilize the ref in the constructor .. i.e, need something to be passed
    // to it , like in Example1(int& ref). if we tried to call Example1() , we
    // would get an error at compile time for calling a deleted function.
    // uncomment this and test for yourself:
    // Example1 ex = Example1();

    // if this was user-defined instead , the code would just not compile at
    // all , even if we didn't call the constructor.

    class Example2 {
        int& ref;
    public:
        // uncommenting the below will cause a compilation error as it is ill
        // defined.
        // Example2() {};
    };

    // we get similar deletion for when we have a const member that is not
    // default initialized:
    class Example3 {
        const int x;
    public:
        Example3() = default; // this becomes implicitly deleted

        // we would need this:
        Example3(int num) : x(num) {};
    };

    // also happens if one of our data members is not default initialized and
    // has no default constructor.
    class Tensor {
        std::vector<int> dims;
    public:
        // no default constructor
        Tensor(std::vector<int> dims) : dims(dims) {}
    };

    class Log {
        Tensor tens_A;
        Tensor tens_B;
        Tensor tens_C;
    public:
        Log() = default;
    };
    // the Log() constructor is implicitly deleted because we have Tensor data
    // members , and the tensor data members are uninitialized with no default
    // constructor. if the Tensor class had a default constructor , then
    // having uninitialized data members like tens_A , tens_B , tens_C , would
    // just initialize with default constructor. this is actually a really
    // big 'gotcha' for oop.

    // COMPILER GENREATED DEFAULT CONSTRUCTOR
    // we will now focus on compiler generated default constructors. consider
    // the following class:
    class SimpleClass {
    public:
        int value;
        std::string name;
    };
    // since we defined no constructors at all , the compiler automatically
    // generates:
    // - default constructor
    // - copy constructor
    // - move constructor
    // we have not yet learned about the copy and move constructors so don't
    // worry if you don't know what that is yet. but we can now do this:
    SimpleClass sc; // calls compiler generated default constructor
    sc.value = 5;
    sc.name = "yo";
    return 0;
}

int trivial_constructors() {
    // a trivial constructor is one that essentially does "nothing". it's so
    // simple that the compiler can optimize it away or treat the object
    // creation as just memory allocation , like when allocating space for a
    // struct in C. note that only default constructors can be trivial. the main
    // point of trivial constructors is that they can be optimized!

    // a constructor is trivial if:
    // - it's implicitly declared (generated by compiler) or it is explicitly
    //   defaulted
    // - the class has no virtual functions or virtual ancestor classes
    // - all direct ancestor classes have trivial default constructors
    // - all non-static data members have trivial default constructors
    // - the class has no default member intializers

    // trivial constructor examples:
    // example 1: trivial from implicit generation
    struct TrivialDog {
        int age;
        float weight;
        // implicitly generated default constructor is trivial
    };

    // example 2: trivial with = default
    struct TrivialDog2 {
        int age;
        float weight;
        TrivialDog2() = default;  // still trivial!
    };

    // example 3: all data members have trivial default constructors
    struct Point {
        int x, y;
        Point() = default;  // trivial
    };
    struct TrivialShape {
        Point center;    // point has trivial constructor
        int radius;
        TrivialShape() = default;
    };
    // since Point has a trivial default constructor , so does TrivialShape

    // non-trivial examples:
    // example 1: user-provided constructor
    struct NonTrivialDog1 {
        int age;
        NonTrivialDog1() {}  // user-defined => non-trivial
    };

    // example 2: default member initializer
    struct NonTrivialDog2 {
        int age = 0;  // default member initializer => non-trivial
        NonTrivialDog2() = default;
    };

    // example 3: non-trivial member
    struct NonTrivialDog3 {
        std::string name;  // std::string has non-trivial constructor
        NonTrivialDog3() = default;  // non-trivial due to member
    };

    // example 4: virtual functions
    struct NonTrivialDog4 {
        int age;
        virtual void bark() {}  // virtual function => non-trivial
        NonTrivialDog4() = default;
    };

    // WHY IT MATTERS
    // performance.
    struct Trivial {
        int a, b, c;
        Trivial() = default;
    };

    struct NonTrivial {
        int a, b, c;
        NonTrivial() {}  // user-provided
    };

    // consider creating arrays like so
    Trivial trivial_array[1000];     // very fast - just memory allocation
    NonTrivial nontrivial_array[1000]; // slower - calls constructor 1000 times

    // memory operations are also different.
    // with trivial types , you can use memcpy , memset safely
    Trivial t1, t2;
    memcpy(&t2, &t1, sizeof(Trivial));  // safe with trivial types

    // with non-trivial types , you need proper copy operations
    NonTrivial n1, n2;
    // memcpy(&n2, &n1, sizeof(NonTrivial));  // dangerous! don't do this
    n2 = n1;  // use proper assignment instead

    // also note that many standard library algorithms optimize for trivial
    // types:
    std::vector<Trivial> vec1;
    std::vector<NonTrivial> vec2;
    // vec1.resize() can be faster because it can use memset for zero-initialization
    // vec2.resize() must call the constructor for each element

    // CHECKING TRIVIALITY
    // you can check triviality at compile time:
    // #include <type_traits>
    std::cout << "TrivialDog is trivial: " << std::boolalpha <<
        std::is_trivially_constructible_v<TrivialDog> << std::endl;
    std::cout << "NonTrivalDog1 is trivial: " << std::boolalpha <<
        std::is_trivially_constructible_v<NonTrivialDog1> << std::endl;

    return 0;
}

int destructors() {
    // destructors are what cleanup classes once they leave the scope. you can
    // also invoke them explicitly , but it's uncommon and usually bad to do so.
    // consider the following class:

    class Simple {
    public:
        int x;
        Simple(int x) : x(x) {}
        ~Simple() {
            std::cout << "simple destructor ran" << std::endl;
        };
    };

    { // scope block to force cleanup
        Simple s(5);
    }
    std::cout << "scope exited" << std::endl;
    // because of how destructors are called automatically by the compiler when
    // an object leaves the scope , there is no point in having parameters for
    // them. hence , destructors never take any parameters.

    // doing something like this is bad:
    {
        Simple s(5);
        s.~Simple();
        std::cout << "finished calling destructor manually" << std::endl;
    }
    // runs fine , but it's dangerous because now we have a dead variable `s` on
    // the stack. we may accidentally use it again , even though it's a
    // destructed object. and even worse than that , the destructor will be ran
    // again for the same object! it will be called again when `s` leaves the
    // scope , effectively calling it twice. that's because the compiler doesn't
    // know that we already called the destructor ourselves. this could lead to
    // very bad problems such as calling free on a pointer twice.

    // speaking of freeing pointers , if your class uses any dynamically
    // allocated memory like pointers , you will need to create a manual
    // destructor to free them.
    class Manual {
    public:
        int* ptr;
        Manual(int x) : ptr(new int(x)) {} // dynamically allocate memory w/ new
        ~Manual() { delete ptr; } // we NEED to do this manually!
    };
    // if we didn't manually delete ptr in our user defined destructor and
    // instead let the compiler auto generate a destructor for us , we would
    // have a memory leak. compiler generated destructors don't handle deleting
    // dynamic resources. alternatively , you could use a smart pointer.

    // speaking of using smart pointers , after the destructor is ran for the
    // object , all destructors for data members are ran in the reverse order
    // of which they are listed. this is what allows smart pointers , strings
    // and other class data members to not need manual clean up. for example ,
    // consider the following class:
    class Member1 {
    public:
        int x;
        ~Member1() { std::cout << "Member1 destructor called" << std::endl; }
    };
    class Member2 {
    public:
        int x;
        ~Member2() { std::cout << "Member2 destructor called" << std::endl; }
    };
    class Parent {
    public:
        Member1 x;
        Member2 y;
        ~Parent() { std::cout << "Parent destructor called" << std::endl; }
    };

    {
        Parent p;
    }
    std::cout << "p left scope" << std::endl;
    // should print in the following order:
    /**
        Parent destructor called
        Member2 destructor called
        Member1 destructor called
        p left scope
    */
    // note that member2 was defined after member1 in parent , so its destructor
    // gets called first. observe that we did not need to explicitly call the
    // data members destructors in our parent destructor. they are called
    // automatically afterwards. hence , it doesn't matter if we let the compiler
    // generate the destructor or we define it ourselves when it comes to data
    // members being cleaned up--unless they are dynamically allocated!

    // TYPES OF DESTRUCTORS
    // just as we have different kinds of default constructors , we also have
    // different kinds of destructors as you have seen so far:
    // 1. compiler genereted by not defining any destructor
    // 2. explicitly compiler generated by default
    // 3. user-defined

    // it is clear that we must use user-defined destructors when we have dynamic
    // data that we must delete. but what is the difference between explicitly
    // doing `= default` or letting the compiler generate it automatically? turns
    // out, there are some important differences.

    // there are these constructors called move constructor and copy constructor,
    // and these assignments called move assignment and copy assignment. you will
    // learn about them later but for now you need to know that explicitly
    // defining the destructor, whether customly or with `= default`, will prevent
    // the compiler from automatically generating:
    // - move constructor (NOT generated)
    // - move assignment (NOT generated)
    // BUT will still auto-generate:
    // - copy constructor (still generated - but deprecated in C++11+)
    // - copy assignment (still generated - but deprecated in C++11+)

    // this is very important. it is why C++ developers use this term called the
    // RULE OF THREE/FIVE. the rule of 3/5 means that if you define one of these:
    // - destructor
    // - copy constructor
    // - copy assignment operator
    // then you should define all 3 (rule of three). the rule of five extends this
    // to include move operations:
    // - move constructor
    // - move assignment operator

    // the rule is a GUIDELINE for good design, not a compiler restriction.
    // the compiler may still auto-generate some operations, but they might be
    // wrong (especially with raw pointers), so you should define them yourself.

    // here is an example
    class DangerClass {
    public:
        int x;
        DangerClass(int x) : x(x) {}
        ~DangerClass() = default; // prevents move constructor
    };

    DangerClass obj1(5);
    DangerClass obj2 = std::move(obj1);
    // this works and compiles fine but it doesn't actually use the move
    // constructor. it tries to but can't find it so falls back to the copy
    // constructor. we can see this even more explicltly:
    class NoMove {
    public:
        int x;
        NoMove(int x) : x(x) {}
        NoMove(const NoMove& other) : x(other.x) { // copy constructor
            std::cout << "copy constructor called" << std::endl;
        }
        ~NoMove() = default; // prevents move constructor from being generated
    };
    NoMove nm1(5);
    NoMove nm2 = std::move(nm1); // will print `copy constructor called`

    // we will revisit the rule of three/five later on after learning about copy
    // and move constructors. and as for destructors with inheritance .. this is
    // something that requires understanding the use of virtual functions. for
    // that reason , we will postpone learning how to use destructors with
    // inheritance until after we have learned about virtual functions and
    // vtables. see virtual_constructors_destructors() when you are ready.

    return 0;
}

    int copy_constructor() {
    return 0;
}

int move_constructor() {
    return 0;
}

int lambda_functions() {
    // lambda functions allow for anonymous function objects.
    // this is practical for short functions you wouldn't want to name and just make them in line.
    // they also allow you to define functions within functions , something you
    // otherwise could not do.

    // here is the basic syntax:
    // [capture_clause](parameters) -> return_type { function_body; };

    // eg)
    auto add = [](int a, int b) -> int { return a + b; };
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    // now we can use add(a, b) to add stuff. notice we catured nothing in this example.

    // CAPTURING VARIABLES
    // lambda functions have a unique feature called capturing variables, whatever you but inside the [].
    // what it means to capture a variable is that you give a copy of that variable to the lambda object.

    // for example
    int x = 69;
    auto foo = [x](int a) -> int {return x + a; };
    // here , foo gets its own copy of x baked into the lambda object. think of the lambda object as adopting
    // a constant with the value x. in this case u can almost imagine that x is some non-mutable field of the lambda.

    std::cout << "foo(5) is " << foo(5) << std::endl;

    // if we wanted to mutate x , we could pass it by reference like this:
    auto bar = [&x](int a) { x += a; };
    bar(5); // should mutate existing variable x by adding 5 to it

    std::cout << "x is now: " << x << std::endl;
    // should be 69 + 5 = 74 now.

    // CAPTURE CLAUSE OPTIONS
    //  []: captures nothing
    //  [=]: captures all variables by value
    //  [&]: captures all variables by reference
    //  [var]: captures var by value
    //  [&var]: captures var by reference
    //  [=, &var]: captures all variables by value but var by reference
    //  [&, var]: captures all variables by reference but var by value
    //  [this]: captures the `this` pointer

    return 0;
}

int static_keyword() {

    return 0;
}

int inheritance() {
    // inheritance is something you may be familiar with if you have done OOP
    // before in a language like python on java. inheritance allows you to
    // create new classes based on existing classes.

    // we call the new classes "derived classes" , and the existing classes
    // "base classes". like child and parent. the derived classes inherit all
    // of the properties and methods from the base classes and they can also
    // modify existing ones or add new ones.

    // consider the following base class
    class Base {
    public:
        int pub_var = 1;
    protected:
        int prot_var = 2;
    private:
        int priv_var = 3;

    public:
        void show_base() {
            std::cout << "base - public: " << pub_var
            << ", protected: " << prot_var
            << ", private: " << priv_var
            << std::endl;
        }
    };

    // there are three ways we can inherit from this class:
    // 1. public inheritance
    // 2. protected inheritance
    // 3. private inheritance

    // PUBLIC INHERITANCE:
    // when deriving a class , you can put an access modifier in front of the
    // base class like so:
    class PublicDerived : public Base {
    public:
        void access_members() {
            std::cout << "PublicDerived accessing: "
                << "pub_var: " << pub_var
                << ", prot_var: " << prot_var
                << ", priv_var: cant access"
                << std::endl;
        }
    };

    // this makes the derived class inherit the properties of the base class
    // in this manner:
    // public -> pulbic , protected -> protected , private -> inaccesible
    // if we tried to access priv_var , we would get an error.

    // recall that private members are not accessible to derived classes , only
    // protected and public members are. the same goes for protected and
    // private inheritance as well , except those ones will change the access
    // for the inherited properties in the derived class. it's best to just see
    // some examples.

    // PROTECTED INHERITANCE:
    class ProtectedDerived : protected Base {
    public:
        void access_members() {
            std::cout << "PublicDerived accessing: "
                << "pub_var: " << pub_var
                << ", prot_var: " << prot_var
                << ", priv_var: cant access"
                << std::endl;
        }
    };
    // public -> protected , protected -> protected , private -> inaccesible

    // this time the inherited public properties become of protected access.
    // it allows us to quickly convert any inherited properties to protected
    // access.

    // PRIVATE INHERITANCE:
    class PrivateDerived : private Base {
    public:
        void access_members() {
            std::cout << "PublicDerived accessing: "
                << "pub_var: " << pub_var
                << ", prot_var: " << prot_var
                << ", priv_var: cant access"
                << std::endl;
        }
    };
    // public -> private , protected -> private , private -> inaccesible

    // and lastly , the rarest inheritance: private inheritance. this converts
    // all the inherited properties to private access. recall we don't inherit
    // properties that were private in the base class. so other than those ,
    // both the public and protected variables of the base class get inherited
    // and set to private in the derived class.

    // this inheritance is used for an "implemented-in-terms-of" relationship.
    return 0;
}

int ownership() {
    // ownership in c++ is a principle about which part of your code is
    // responsible for managing a resource's lifetime. applies to any resource
    // that needs cleanup.

    // ownership determines who is responsible for:
    //      1. creating / acquiring a resource
    //      2. ensuring proper cleanup / destruction
    //      3. deciding when the resource should be released
    // the owner has the responsibility and authority to destroy the resource
    // when it's no longer needed.

    // for example , stack objects are owned by the function they are defined
    // in:
    auto funco = []() {
        std::string name = "hello"; // function owns this vector
        std::vector<int> vec = {1, 2, 3}; // function owns this string
        std::cout << name << std::endl;
        vec.push_back(4);
        return 0;
    }; // automatic cleanup when function ends
    // the same idea applies for file handles (see file_handles()) , database
    // connections , classes cleaning up their members (via destructor) ,
    // and smart pointers.

    // TYPES OF OWNERSHIP
    // 1. exclusive ownership
    // 1. shared ownership
    // 1. non-ownership

    // exclusive ownership:
    // one entity owns the resource exclusively:
    class Car {
        int miles; // car exclusively owns its miles member
    };

    // shared ownership:
    // multiple entities share responsibility. for example shared_ptr , see
    // smart_pointers() to learn about shared pointers.
    std::shared_ptr<int> shr = std::make_shared<int>(69);

    // non-ownership:
    // simple when something isn't owned by something. for example a reference
    // inside a function.. the function doens't own the reference.. it's just a
    // reference.
    auto fun = [](int& x) {
        std::cout << x << std::endl; // doesn't own x , only borrowing it.
    };

    // OWNERSHIP TRANSFER
    // resources can change ownership. for example a unique pointer that is
    // returned by a function.
    auto make_uptr = []() {
        std::unique_ptr<int> uptr = std::make_unique<int>(69); // make_uptr is
        // owned by the make_uptr() function right now.

        return uptr; // transfer ownership to caller.
    };
    std::unique_ptr<int> uptr = make_uptr(); // now owned by ownership()
    // function.

    // RAII
    // `resource acquisition is initialization` (raii) is c++'s primary way for
    // ownership management. more on this in the next section , raii().

    return 0;
}

int raii() {
    // the primary principle of raii (resource acquisition is initialization)
    // is:
    //      1. acquire resources in constructors
    //      2. release resources in destructors
    //      3. let scope and object lifetime manage resource lifetime

    // simply put , when an object is created , it should acquire its resources
    // and when it is destroyed it should release its resources.

    // without raii you might code like this:
    auto risky_function = []() {
        int* ptr = new int(42);
        FILE* f = fopen("example.txt", "r");

        bool some_condition = true;
        if (some_condition) {
            return;  // memory leak and file leak..
        }

        delete ptr;
        fclose(f);
    };

    auto safe_function = []() {
        std::unique_ptr<int> ptr = std::make_unique<int>(42);
        std::ifstream file("data.txt");

        bool some_condition = true;
        if (some_condition) {
            return;  // no memory leaks , runs destructors automatically before
            // leaving scope.
        }

        // no need for any manual cleanup.
    };

    // also , just like how we free pointers in the reverse order of allocating
    // them , raii automatically calls destructors in the reverse order of
    // constructing them.
    /**
        Creating A
        Creating B
        Creating C
        About to return
        ~ResourceC destructor
        ~ResourceB destructor
        ~ResourceA destructor
        Returns
    */

    return 0;
};

int smart_pointers() {
    // smart pointers are one of the biggest upgrades from c to c++. they are
    // objects that act like traditional pointers but automatically manage
    // memory allocation and deallocation. they are part of the c++ 11 standard
    // and help prevent common memory management errors like memory leaks ,
    // dangling pointers , and double deletion.

    // RAW POINTERS
    int* ptr = new int(42);
    // we have to manually delete this later like so:
    delete ptr;
    // error prone cause you may forget to call delete for every new. this is
    // why we have smart pointers. raw pointers are pure memory addresses ,
    // whereas smart pointers are objects that contain a pointer. they are not
    // pointers themselves! you can dereference smart pointers using * the same
    // way you can with regular pointers.

    // THREE TYPES
    // there are three main smart pointers. we will learn about all of them and
    // their differences.
    // 1. std::unique_ptr
    // 2. std::shared_ptr
    // 3. std::weak_ptr

    // STD::UNIQUE_PTR
    // this represents exclusive ownership of a resource. only one unique_ptr
    // can own a particular object at a time.
    std::unique_ptr<int> uptr = std::make_unique<int>(42);
    // memory is automatically freed when uptr goes oout of scope (raii). no
    // need to call delete. we can dereference uptr like so:
    std::cout << "uptr holds: " << *uptr << std::endl;
    // the unique_ptr class object lives on the stack , referenced by the uptr
    // variable , and the integer 42 lives on the heap. the unique_ptr object
    // holds a pointer to the integer which lives on the heap.

    // SMART POINTERS ARE CLASS OBJECTS
    // here's a simplified view of what's inside smart pointers (unique_ptr)
    /*
        template<typename T>
        class unique_ptr {
            T* ptr;
            Deleter deleter;
        };
    */
    // again , smart pointers aren't just addresses like regular pointers are.
    // they are objects that live on the stack like all class objects and just
    // hold a pointer to some object on the heap.

    // UNIQUENESS OF UNIQUE PTR
    // can't have another ptr point to the same thing.
    // std::unique_ptr<int> uptr2 = uptr;
    // the above won't work and give compile errors if you uncomment it and try
    // to compile.

    // you can however transfer ownership with std::move
    std::unique_ptr<int> uptr2 = std::move(uptr);
    // this sets uptr to nullptr , and uptr owns the memory now.
    if (uptr == nullptr) { std::cout << "uptr is null" << std::endl; }
    else { std::cout << "uptr is not null" << std::endl; }
    // should print that it is null.

    // STD::SHARED_PTR
    // shared_ptr allows multiple pointers share ownership of the same
    // resource. it uses reference counting--the object is deleted when the
    // last shared pointer to it is destroyed.
    std::shared_ptr<int> sptr1 = std::make_shared<int>(69);
    std::shared_ptr<int> sptr2 = sptr1;
    std::cout << "sptr1 is: " << *sptr1 << ", and sptr2 is: " << *sptr2
        << std::endl;
    // the shared pointer object will be destroyed when both sptr1 and sptr2 go
    // out of scope. reference counting is important to keep in mind!

    // STD::WEAK_PTR
    // std::weak_ptr is a non-owning smart pointer that holds a weak reference
    // to an object managed by std::shared_pointer. it designed to solve
    // specific problems that arise with shared ownership. here is how to make
    // a weak_ptr:
    std::shared_ptr<int> sptr = std::make_shared<int>(99);
    std::weak_ptr<int> wptr = sptr;
    // simply assign to an existing shared pointer. you CANNOT DEREFERNCE weak
    // pointers! you must use .lock() on them to get a shared_ptr that you can
    // dereference. more on this soon. for now let's see why we need weak_ptr's
    // in the first place.

    // here is a problem we get when using shared pointers.. we get a circular
    // reference issue:
    struct Child;
    struct Parent {
        std::shared_ptr<Child> child;
        ~Parent() { std::cout << "parent destroyed" << std::endl; }
    };
    struct Child {
        std::shared_ptr<Parent> parent;
        ~Child() { std::cout << "child destroyed" << std::endl; }
    };

    // this creates a circular dependency on the cleanup due to reference
    // counting. parent <--> child. if we have something like this:
    auto problematic_code = []() {
        auto parent = std::make_shared<Parent>();
        auto child = std::make_shared<Child>();
        parent->child = child;
        child->parent = parent; // circular reference

        // when the function ends , the child and parent variables are
        // destroyed , but the shared pointer objects they refernce are still
        // not cleaned up. this is because:
        // 1. before variables are destroyed:
        //      parent object has ref count of 2 (parent var and child->parent)
        //      child object also has same ref count of 2
        // 2. child variable is destroyed first
        //      child has a ref count of 1 , from parent->child still , so the
        //      child object cannot be destroyed.. it needs a ref count of 0.
        //      this means that it also still holds the parent pointer member.
        // 3. parent variable is destroyed next
        //      parent has a ref count of 1 , as the child object still exists.
        //      because of child->parent , the parent object cannot destruct.
    };
    // this essentially causes a deadlock where both parent and child objects
    // cannot destruct because of each other.

    // to fix this we use a weak_ptr:
    struct BetterChild;
    struct BetterParent {
        std::shared_ptr<BetterChild> child;
        ~BetterParent() { std::cout << "parent destroyed" << std::endl; }
    };
    struct BetterChild {
        std::weak_ptr<BetterParent> parent; // made this weak!
        ~BetterChild() { std::cout << "child destroyed" << std::endl; }
    };

    auto good_code = []() {
        auto parent = std::make_shared<BetterParent>();
        auto child = std::make_shared<BetterChild>();
        parent->child = child;
        child->parent = parent;

        // this time:
        // 1. before vars are destroyed
        //      parent has ref count of 1 , child->parent does not add a ref
        //      child has ref count of 2 , parent->child is a shared_ptr
        // 2. child var is destroyed
        //      child object has ref count of 1 from parent->child , no cleanup
        // 3. parent var is destroyed
        //      parent object has a ref count of 0 , it cleans up and releases
        //      member.
        // 4. reference count for child object goes to zero and it cleans up.
    };

    // USING WEAK_PTR WITH LOCK()
    // the .lock() method is crucial for safely using weak_ptr. the problem is
    // that since weak_ptr doesn't own th ojbect , the object it points to can
    // be destroyed at any time by other code. if you try to access a destroyed
    // object you get undefined behaviour like crash , garbage data , etc.

    // .lock() tries to "promote" the weak_ptr to a shared_ptr temporarily. it
    // returns a valid shared_ptr if the object still exists , or a null
    // shared_ptr is fhe object was destroyed. for example , with our child and
    // parent classes:
    class Child1;
    class Parent1 {
    public:
        std::string name;
        std::shared_ptr<Child1> child;
        Parent1(const std::string& n) : name(n) {}
        ~Parent1() = default;
    };

    class Child1 {
    public:
        std::string name;
        std::weak_ptr<Parent1> parent;
        Child1(const std::string& n) : name(n) {}

        // we use .lock() to acquire shared_ptr
        void printParentName() {
            // this temporarily increases ref count of parent object by 1
            if (std::shared_ptr<Parent1> parent_ptr = parent.lock()) {
                std::cout << parent_ptr->name << std::endl;
            } else { std::cout << "i have no parents" << std::endl; }
            // once if statement ends , parent_ptr goes out of scope and parent
            // ref count drops by 1.
        };
        // only way to access what weak_ptr points to is with .lock() , you
        // cannot dereference weak_ptr directly as it does not own the object.

        ~Child1() = default;
    };

    std::shared_ptr<Parent1> par = std::make_shared<Parent1>("bobby");
    std::shared_ptr<Child1> chi = std::make_shared<Child1>("frake");
    par->child = chi;
    chi->parent = par;

    chi->printParentName();
    par.reset(); // sets parent object ref count to 0
    chi->printParentName(); // prints that it is an orphan
    // note that we used .reset() to clean up the shared_ptr. more on this and
    // other smart pointer functions in the next section ,
    // smart_pointer_tools().

    return 0;
}

int smart_pointer_tools() {
    // here is a list of smart pointer methods that you can use:

    // ALL SMART POINTER METHODS
    // 1. get() : returns the raw pointer that the smart pointer was storing
    //      for unique and shared ptr , returns the owned pointer. for weak
    //      ptr , returns the observed pointer.
    // 2. reset() : cleans up the smart pointer. if optional argument passed
    //      (has to be a pointer) , it takes ownership of the new object.
    // 3. swap(smart_ptr) : exchanges the objects between two smart pointers of
    //      the same type.

    // UNIQUE_PTR METHODS
    // 1. release() : returns the raw pointer and releases ownership without
    //      destroying the object.

    // SHARED_PTR METHODS
    // 1. use_count() : returns the reference count for the object.
    // 2. unique() : tests if the reference count == 1.

    // WEAK_PTR METHODS
    // 1. lock() : returns a shared_ptr for the weak_ptr if the object exists.
    // 2. expired() : checks if the object still exists. returns true if object
    //      has been destroyed.

    return 0;
}

int polymorphism() {

    return 0;
}

int virtual_functions() {
    // virtual functions do a lot of stuff:
    // 1. solve the diamond problem
    // 2. proper cleanup with virtual destructors
    // 3. pure virtual functions for abstract classes

    // all of that being said , virtual functions are primarily known for being
    // C++'s mechanism for achieving runtime polymorphism. that is what we will explore
    // in this function.

    // consider the following case demonstrating a need for dynamic polymorphism:

    class Animal {
    public:
        void speak() { std::cout << "animal speaks" << std::endl; }
    };

    class Cat : public Animal {
    public:
        void speak() { std::cout << "cat speaks" << std::endl; }
        Cat() = default;
    };

    // briefly note that if we did something like:
    Animal cat = Cat();
    // this would cause class "slicing" , which means that the cat object ends up
    // only holding the Animal portion of the data. we can't achieve polymorphism
    // this way.

    // hence , we must use pointer.
    Animal* car = new Cat();
    std::cout << "car says: ";
    car->speak(); // will print "animal speaks" .. we want 'cat speaks'

    // another way to do this is use reference.
    Cat cato = Cat();
    Animal& cat_ref = cato;
    cat_ref.speak();
    // this won't slice cato. cat_ref contains everything cato does , achieving
    // true polymorphism.

    // for our pointer approach , since the type of the object is declared as
    // Animal pointer , it uses animal's speak() method , even though we called
    // the cat() constructor. this is because we used Animal for the type ,
    // which means it is decided at compile time that Animal::speak() will be
    // called.
    delete car;

    // to get around this , C++ deploys a dynamic member function calling system
    // , using virtual tables. see the new classes below with "virtual" keyword:
    class Animal2 {
        public:
        // have virtual keyword
        virtual void speak() { std::cout << "animal speaks" << std::endl; }
    };

    class Cat2 : public Animal2 {
    public:
        // now overriding function needs to have "override" keyword
        void speak() override { std::cout << "cat speaks" << std::endl; }
        Cat2() = default;
    };

    Animal2* car2 = new Cat2();
    std::cout << "car2 says: ";
    car2->speak();
    // now it prints "cat speaks". if we didn't add override keyword in Cat2 ,
    // the code would compile fine but it would use Animal2::speak() instead.
    // note that we can only add override keyword to member functions that are
    // virtual in the parent class.
    delete car2;

    // we can also do this with reference types instead.
    Cat2 car22 = Cat2();
    Animal2& car22_ref = car22;
    std::cout << "car22 says: ";
    car22_ref.speak();

    // well now we know how to use virtual functions. but how do they work ?
    // the next function explains the use of vtables and how they allow for
    // virtual functions to do what they do--how dynamic polymorphism is
    // possible in a compiled language like C++.
    return 0;
}

int vtables() {
    // VIRTUAL TABLES
    // vtables are the mechanism C++ uses to implement runtime polymorphism.
    // a vtable is a table of function pointers that the compiler creates for
    // each class with virtual functions. each object of such a class has a
    // hidden pointer (called vptr) that points to its class' vtable.
    // remember , one vtable per class , not per object. a vtable is like an
    // array.

    // HOW VTABLES WORK
    // when a virtual function is called , the program follows the object's vptr
    // to it. this happens because the compiler replaces all virtual function
    // calls at compile time. there is actually quite a bit at play here , so
    // don't worry if you can't understand it right away. we will go through it
    // one part at a time.

    // 1. GENERATION OF VTABLES
    // first of all , during compilation , a vtable is made for each class with
    // virtual functions or with a parent that has virtual functions. suppose we
    // have the following classes:

    class Vehicle {
    public:
        std::string name;
        size_t weight;
        std::string getName() { return name; }
        virtual void rev() { std::cout << "vroom" << std::endl; }
        virtual size_t getWeight() { return weight; }
    };

    class Car : public Vehicle {
    public:
        void rev() override {
            std::cout << "beep" << std::endl;
        }
    };

    // both vehicle and car get a vtable because vehicle uses a virtual function.
    // vehicle vtable: [&Vehicle::rev, &Vehicle::getWeight]
    // car vtable:     [&Car::rev,     &Vehicle::getWeight]

    // note that we don't add any non virtual functions in the vtable. observe
    // that the second function in the vtable for car is also getWeight() from
    // Vehicle class. this is because we never overrode it , so this is what the
    // compiler generates.

    // 2. OBJECT INSTANTIATION
    // when we instantiate an object with a virtual function , the object's
    // constructors are called and a pointer to the vtable is generated. so when
    // we do:
    Car caro = Car();
    // this first calls the parent constructor and assigns a vptr to Vehicle's
    // vtable. after the child constructor is called and vptr gets updated to
    // point to Car's vtable.

    // 3. VIRTUAL DISPATCH
    // even though every virtual class object gets a vtable , virtual dispatch
    // only happens when calling through a base class pointer or reference.
    // when you call directly on a concrete object , the compiler often
    // optimizes away the vtable lookup since it knows the exact type. not
    // guanteed though.
    Vehicle v1 = Vehicle();
    std::cout << "v1.rev(): ";
    v1.rev(); // may skip vtable lookup (compiler optimization)

    // however , if we call through a pointer to the same object:
    Vehicle* v1_ptr = &v1;
    std::cout << "v1_ptr->rev(): ";
    v1_ptr->rev(); // uses vtable lookup , but still calls Vehicle::rev

    // now consider polymorphism - pointing to a derived object:
    Vehicle* v2_ptr = &caro;
    std::cout << "v2_ptr->rev(): ";
    v2_ptr->rev(); // vtable lookup finds Car::rev and calls it

    // important: this creates a NEW object through object slicing!
    // v2 becomes a Vehicle object , losing all Car-specific data.
    Vehicle v2 = *v2_ptr; // object slicing - creates Vehicle from Car
    std::cout << "v2.rev(): ";
    v2.rev(); // calls Vehicle::rev because v2 IS a Vehicle object now

    // to see the difference , try with a reference instead:
    Vehicle& v2_ref = *v2_ptr;
    std::cout << "v2_ref.rev(): ";
    v2_ref.rev(); // vtable lookup , calls Car::rev (no slicing)

    return 0;
}

int override_keyword() {
    // THE OVERRIDE KEYWORD
    // the override keyword is not actually needed for the code to compile and
    // work. it's optional , but highly recommended for safety reasons. if you
    // don't declare override , but still correctly override the function--you
    // have the exact same signature in the derived class--then all will work
    // fine:

    class Fruit {
    public:
        virtual void squeeze() {
            std::cout << "squeezing fruit..." << std::endl;
        }
    };

    class Banana : public Fruit {
        void squeeze() { // exact same signature
            std::cout << "smushing banana..." << std::endl;
        }
    };

    Fruit* banana = new Banana();
    banana->squeeze(); // will print 'smushing bananas...'
    delete banana;
    // Banana::squeeze() has exact same signature as Fruit::squeez() , so it
    // overrides it.

    // the issue with this however , is that if you accidentally had a
    // mismatching signature between the derived and base class , then you might
    // not even know: you would have a silent bug. the code will compile fine ,
    // but banana->squeeze() would call the base class' implementation.

    // here's an example
    class BadFruit {
    public:
        virtual void juice(int ml) {
            std::cout << "juiciing " << ml << " ml of fruit." << std::endl;
        }
    };

    class BadBanana : public BadFruit {
        void juice() { // signature doesn't match
            std::cout << "juiciing banana." << std::endl;
        }
    };

    BadFruit* bad_banana = new BadBanana();
    bad_banana->juice(5.0); // silent bug! uses Fruit::juice
    delete bad_banana;

    // if you had put the override keyword in the derived class , then it your
    // LSP and compiler would have pointed out that there was no matching
    // signature for a virtual function in the base class.

    return 0;
}

int diamond_problem() {
    return 0;
}

int pure_virtual_functions() {
    // pure virtual functions are virtual functions with no implementation in
    // the base class. these enable abstract classes that cannot be instantiated
    // directly , and thus provide a strict polymorphic design which derived
    // classes are required to implement.

    class Shape {
    public:
        virtual double area() = 0;  // pure virtual function
        virtual void draw() = 0;    // another pure virtual function
    };

    // the = 0 syntax tells the compiler that this function has no
    // implementation in this class and must be overriden by derived classes.

    // ABSTRACT CLASSES
    // any class that contains one or more pure virtual functions becomes an
    // abstract class. the class Shape above is an abstract class. you cannot
    // instantiate abstract classes directly.

    // uncommenting the below gives an
    // error when compiling.
    // Shape s;

    class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}

        double area() override {  // must implement
            return 3.14159 * radius * radius;
        }

        void draw() override {    // must implement
            std::cout << "Drawing a circle..." << std::endl;
        }
    };

    // if we do not implement every pure virtual function in the derived class ,
    // then the derived class is still considered an abtsract class and cannot
    // be directly instantiated.
    class Square : public Shape {
    private:
        double side;
    public:
        Square(double s) : side(s) {}
        // here we omit the implementation of area()
    };

    // since we didn't implement the pure virtual function area() , Square is
    // an abstract class and we cannot do the following:
    // Square sq(15);

    // since we implemented all the pure virtual functions in the Circle class ,
    // it is not considered an abstract class. we say that classes which are not
    // abstract are "concrete". we can instantiate concrete classes.
    Circle circ(5);

    // and of course , we can use abstract classes and pure virtual functions
    // for strict polymorphism.
    class Rectangle : public Shape {
    private:
        double l;
        double w;
    public:
        Rectangle(float l, float w) : l(l), w(w) {}
        double area() { return l * w; }
        void draw() { std::cout << "Drawing rectangle..." << std::endl; }
    };

    // some workload with the individualized classes abstracted away ... only
    // access them through an interface , which is the base abstract class.
    auto processShape = [](Shape* shape) {
        std::cout << "Area: " << shape->area() << std::endl;
    };

    Circle circ2(6);
    Rectangle rect(2, 6);

    // also note that all the things regarding the override keyword for virtual
    // functions apply exactly the same for pure virtual functions. you may end
    // up accidentally having a derived class that is also abstract because you
    // did not use the override keyword and didn't catch a signature mismatch ,
    // i.e. left a pure virtual function unimplemented accidentally.

    return 0;
}

int virtual_constructors_destructors() {
    // virtual constructors don't exist in C++ , but virtual destructors are
    // crucial for proper cleanup.

    // VIRTUAL CONSTRUCTORS
    // the reason these don't exist is because we don't need them! we choose
    // what constructor we want to call when we write our code. we don't need
    // virtual constructors for this because the compiler will be given the
    // constructor call directly.

    class Animal {
    public:
        std::string name;

        Animal(std::string name) : name(name) {}
        virtual void speak() { std::cout << "animal speaks" << std::endl; }
        ~Animal() { std::cout << "calling animal destructor" << std::endl; }
    };

    class Cat : public Animal {
    public:
        size_t whiskers;

        Cat(std::string name, size_t whisker_count) : Animal(name),
            whiskers(whisker_count) {}
        void speak() override { std::cout << "cat speaks" << std::endl; }
        ~Cat() { std::cout << "calling cat destructor" << std::endl; }
    };

    // we just explicitly call Cat() constructor.. no need for virtual functions
    // here , even if we are using polymorphism like Animal* pointer type.
    Animal* cat = new Cat("miau miau", 5);
    cat->speak(); // this needs virtual keyword to use Cat::speak
    delete cat;
    std::cout << std::endl;
    // the compiler just uses the constructor we type. moreover , the
    // constructor itself is what initializes the vtable to begin with. recall
    // that the constructor sets the pointer to the class' vtable.

    // VIRTUAL DESTRUCTORS
    // in contrast with constructors , destructors MUST be virtual when doing
    // polymophism. this is very important! if we have an object masked as its
    // parent:
    Animal* carto = new Cat("nick", 0); // a bald cat nick
    // then it needs a virtual destructor to know which cleanup to do! it needs
    // to look up the destructor to use in the vtable.
    std::cout << "deleting carto..." << std::endl;
    delete carto; // only prints "calling animal destructor"
    std::cout << std::endl;

    // it is important to note that automatically generated destructors are NOT
    // virtual! that is , our example with Animal and Cat does not properly call
    // the cat destructor when carto leaves the scope. so when we do delete
    // carto , it only calls the destructor for Animal. this is very bad as any
    // resources allocated by the cat constructor , such as size_t whiskers ,
    // are not cleaned up. in this case , since size_t is a primitive type , it
    // does not need any special cleanup , so we won't get a crash or a memory
    // leak , but it's still classified as undefined behaviour. if we had
    // complex or dynamic resources in the Cat class , then this would be much
    // worse.

    // here's how to do it properly:
    class Vehicle {
    public:
        int miles;
        std::string color;
        Vehicle(int m, std::string color) : color(color), miles(m) {}
        virtual ~Vehicle() {
            std::cout << "vehicle constructor called" << std::endl;
        }
        // recommended to also define copy and move constructors and assignments
    };

    class Car : public Vehicle {
    public:
        bool winter_tires;
        Car(bool winter, int m, std::string color) : Vehicle(m, color),
            winter_tires(winter) {}
        // don't need to define the destructor here , automatically generates
        // ~Car() and inherits virtual keyword from Vehicle.

        // could have had:
        // ~Car() = default;

        // or
        // virtual ~Car() = default;

        // or this:
        virtual ~Car() {
            std::cout << "car destructor called" << std::endl;
        }
        // remember , we could have just not added this.
    };

    // let's see what order the destructor is called in now.
    Vehicle* v = new Car(false, 0, "red");
    std::cout << "deleting v" << std::endl;
    delete v;
    // should print car destructor then base class desturctor. this is because
    // child destructors are called first for cleanup then base destructrors.
    // the reverse of constructors: the base class is called first for those.

    return 0;
}

int templates() {
    return 0;
}
