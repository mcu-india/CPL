# CPL
C Programming Language Assignments

Join the class on classroom.google.com, class code: 7ytfaqj
Send an email to achindrabhatnagar@gmail.com to get access.

* Create your work directory inside the section
  - https://github.com/mcu-india/CPL/tree/master/Basics/<_user_>
* Always add a README.md in <user> directory
* Use Nouns for variables and Verbs for Fuctions
* Document your code
* Use a text editor to write code - Vi, Notepad, Notepad2, Notepad++, etc.
* Compile your code on command line in Visual Studio developer command prompt
  - Use /Zi option to generate *.pdb files for debugging
* Build and run same code with 32 bit compiler and 64 bit compilers

#### Coding Convention
* Every .c file should have an associated .h file
* Use #define guards in header files to prevent multiple inclusions
  <pre>
    #ifndef __MY_HEADER_H
    #define __MY_HEADER_H
    ...
    #endif // __MY_HEADER_H
  </pre>
* Include .h files for function and data type declarations
* Avoid function inlines unless they are smaller than 10 lines
* While definign function parameters, add all input parameters before output parameters
* Use four space indentation
* Functions
  <pre>
    return_type FunctionName(arg_type args1,
                             arg_type args2)
    {
        ....
    }
  </pre>
* Loops and Conditions
  <pre>
    if(condition){
        ...
    }
  </pre>
* Single point of exit from functions as much as possible
  - Use 'goto' to achieve that
  <pre>
      int func()
      {
          int status = STATUS_UNSUCCESSFUL;
          ...
          if(error){
              // log
              goto exit;
          }
          ...
          status = STATUS_SUCCESS;
          
      exit:
          return status;
      }
  </pre>


#### Learning Reference
- https://www.geeksforgeeks.org/c-programming-language/ 
- http://c-faq.com/
