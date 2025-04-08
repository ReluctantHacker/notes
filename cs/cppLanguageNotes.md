# Namespace of c++
  - It's actually just like modules in python. But you can have many namespaces in one file. By the way, Namespaces can be written in a header file, and you can only declare the functions(or class) inside it. You can check **iostream" header file as example(it's very simple), it declare std namespace and declare cin and cout function.

# header files, .h, .hpp and no extension(like <iostream>)
  - Since C++ is designed to be compatible with C, it can include and use many C libraries. Therefore, you may see .h files when a C++ project includes a C library. 
  - The standard headers in C++ typically do not use the .h extension. This design differentiates them from the older C headers and puts their symbols in the std namespace.
  - In many projects, developers choose to use the .hpp extension for header files that contain C++ code. This is purely a convention meant to clearly signal that the header is intended for C++ usage and may contain features like classes, templates, or inline functions.
The choice between .h and .hpp for custom headers is largely stylistic and may vary between codebases.
