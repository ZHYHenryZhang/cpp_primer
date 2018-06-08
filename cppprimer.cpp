/* This file contains the samples and exercises in c++ primer.
 * Author: Henry
 * Structure: main-chapters-exerciess and samples.
 */

#include <iostream>
#include <vector>

#include "header/Sales_item.h"

/*
 * Good notes when reading
 * This is a good style
 */
void note_1()
{

    // Good style
        /*
         * std::cout << "Style: Begin each line within multiline comment with an asterisk *" << std::endl;
         // type choice
            *  A few rules of thumb can be useful in deciding which type to use:
            * • Use an unsigned type when you know that the values cannot be negative.
            * • Use int for integer arithmetic. short is usually too small and, in practice, long often has the same size as int. If your data values are larger than the minimum guaranteed size of an int, then use long long.
            * • Do not use plain char or bool in arithmetic expressions. Use them only to hold characters or truth values. Computations using char are especially problematic because char is signed on some machines and unsigned on others. If you need a tiny integer, explicitly specify either signed char or unsigned char.
            * • Use double for floating-point computations; float usually does not have enough precision, and the cost of double-precision calculations versus singleprecision is negligible. In fact, on some machines, double-precision operations are faster than single. The precision offered by long double usually is unnecessary and often entails considerable run-time cost.
        // conversion between types
            * • When we assign one of the nonbool arithmetic types to a bool object, the result is false if the value is 0 and true otherwise.
            * • When we assign a bool to one of the other arithmetic types, the resulting value is 1 if the bool is true and 0 if the bool is false.
            * • If we assign an out-of-range value to an object of unsigned type, the result is the remainder of the value modulo the number of values the target type can hold. For example, an 8-bit unsigned char can hold values from 0 through 255, inclusive. If we assign a value outside this range, the compiler assigns the remainder of that value modulo 256. Therefore, assigning –1 to an 8-bit unsigned char gives that object the value 255.
            * • If we assign an out-of-range value to an object of signed type, the result is undefined. The program might appear to work, it might crash, or it might produce garbage values.
            * do not mix signed and unsigned types. 
         * Initialization
         * We recommend initializing every object of built-in type. It is not always necessary, but it is easier and safer to provide an initializer until you can be certain it is safe to omit the initializer.
         * Identifiers
         * The standard also reserves a set of names for use in the standard library. The identifiers we define in our own programs may not contain two consecutive underscores, nor can an identifier begin with an underscore followed immediately by an uppercase letter. In addition, identifiers defined outside a function may not begin with an underscore.
         * • An identifier should give some indication of its meaning.
         * • Variable names normally are lowercase—index, not Index or INDEX.
         * • Like Sales_item, classes we define usually begin with an uppercase letter.
         * • Identifiers with multiple words should visually distinguish each word, for example, student_loan or studentLoan, not studentloan.
         * Naming conventions are most useful when followed consistently.
         * It is usually a good idea to define an object near the point at which the object is first used. Doing so improves readability by making it easy to find the definition of the variable. More importantly, it is often easier to give the variable a useful initial value when the variable is defined close to where it is first used.
         * It is bad style for a function to use a global variable and also define a local variable with the same name
         * ::var // The global scope has no name. Hence, when the scope operator has an empty left-hand side, it is a request to fetch the name on the right-hand side from the global scope. 
         * Modern C++ programs generally should avoid using NULL and use nullptr instead.
         * Our recommendation to initialize all variables is particularly important for pointers. If possible, define a pointer only after the object to which it should point has been defined. If there is no object to bind to a pointer, then initialize the pointer to nullptr or zero.
         * 
         * 
         */ 


    // English note 
        /*
        * comment pairs do not nest
        * span multiple lines
        * a statement that yields a result
        * A block is a sequence of zero or more statements enclosed by curly braces.
        * Headers from the standard library are enclosed in angle brackets (< >). Those that are not part of the library are enclosed in double quotes (" ").
        * A value, such as 42, is known as a literal because its value self-evident.
        * What, if any, are the differences between the following definitions
        * A type alias is a name that is a synonym for another type. 
        * 
        * 
        * 
        */ 


    // what do we refer to when we are taking about programming
        /*
        * 
        * 
        * clear what you want to do. input output then think about operations
        * 
        * data structure is the organization of data and its operation.
        * 
        * 
        */

    // to remember
        /*
        * function is not that in mathematics
        * defensive style
        * pipline of input and output might be time consuming
        * A decimal literal has the smallest type of int, long, or long long (i.e., the first type in this list) in which the literal’s value fits.
        * If we write what appears to be a negative decimal literal, for example, -42, the minus sign is not part of the literal. The minus sign is an operator that negates the value of its (literal) operand.
        * 3.14159 3.14159E0 0. 0e0 .001 By default, floating-point literals have type double. We can override the default using a suffix 
        * Two string literals that appear adjacent to one another and that are separated only by spaces, tabs, or newlines are concatenated into a single literal.
        * When you write a long literal, use the uppercase L; the lowercase letter l is too easily mistaken for the digit 1.
        * The type determines the size and layout of the variable’s memory, the range of values that can be stored within that memory, and the set of operations that can be applied to the variable. 
        * Many programmers are confused by the use of the = symbol to initialize a variable. It is tempting to think of initialization as a form of assignment, but initialization and assignment are different operations in C++.
        * List initialization: For example, we can use any of the following four different ways to define an int variable named units_sold and initialize it to 0: 
            * int units_sold = 0; 
            * int units_sold = {0}; 
            * int units_sold{0}; 
            * int units_sold(0);
        * Uninitialized objects of built-in type defined inside a function body have undefined value. Objects of class type that we do not explicitly initialize have a value that is defined by the class.
        * To support separate compilation, C++ distinguishes between declarations and definitions. A declaration makes a name known to the program. A file that wants to use a name defined elsewhere includes a declaration for that name. A definition creates the associated entity.
        * A variable declaration specifies the type and name of a variable. A variable definition is a declaration. In addition to specifying the name and type, a definition also allocates storage and may provide the variable with an initial value.To obtain a declaration that is not also a definition, we add the extern keyword and may not provide an explicit initializer:
        * Any declaration that includes an explicit initializer is a definition. We can provide an initializer on a variable defined as extern, but doing so overrides the extern. An extern that has an initializer is a definition
        * Variables must be defined exactly once but can be declared many times.
        * A scope is a part of the program in which a name has a particular meaning.
        * Once a name has been declared in a scope, that name can be used by scopes nested inside that scope. Names declared in the outer scope can also be redefined in an inner scope
        * A compound type is a type that is defined in terms of another type. i.e.: references and pointers
        * When we define a reference, instead of copying the initializer’s value, we bind the reference to its initializer. Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. Because there is no way to rebind a reference, references must be initialized.
        * The value (i.e., the address) stored in a pointer can be in one of four states:
            1. It can point to an object.
            2. It can point to the location just immediately past the end of an object.
            3. It can be a null pointer, indicating that it is not bound to any object.
            4. It can be invalid; values other than the preceding three are invalid.
        * When a pointer points to an object, we can use the dereference operator (the * operator) to access that object
        * We may dereference only a valid pointer that points to an object.
        * Some symbols, such as & and *, are used as both an operator in an expression and as part of a declaration. The context in which a symbol is used determines what the symbol means:
            int i = 42;
            int &r = i; // & follows a type and is part of a declaration; r is a reference
            int *p; // * follows a type and is part of a declaration; p is a pointer
            p = &i; // & is used in an expression as the address-of operator
            *p = i; // * is used in an expression as the dereference operator
            int &r2 = *p; // & is part of the declaration; * is the dereference operator
            In declarations, & and * are used to form compound types. In expressions, these same symbols are used to denote an operator. Because the same symbol is used with very different meanings, it can be helpful to ignore appearances and think of them as if they were different symbols.
        * nullptr is a literal that has a special type that can be converted (§ 2.1.2, p. 35) to any other pointer type. 
        * It is illegal to assign an int variable to a pointer, even if the variable’s value happens to be 0.
        * Both pointers and references give indirect access to other objects. However, there are important differences in how they do so. The most important is that a reference is not an object. Once we have defined a reference, there is no way to make that reference refer to a different object. When we use a reference, we always get the object to which the reference was initially bound.
        * So long as the pointer has a valid value, we can use a pointer in a condition. Just as when we use an arithmetic value in a condition (§ 2.1.2, p. 35), if the pointer is 0, then the condition is false
        * The type void* is a special pointer type that can hold the address of any object. Like any other pointer, a void* pointer holds an address, but the type of the object at that address is unknown
        * We cannot use a void* to operate on the object it addresses—we don’t know that object’s type, and the type determines what operations we can perform on the object.
        * Generally, we use a void* pointer to deal with memory as memory, rather than using the pointer to access the object stored in that memory. We’ll cover using void* pointers in this way in § 19.1.1 (p. 821). § 4.11.3 (p. 163) will show how we can retrieve the address stored in a void* pointer.
        * There are two common styles used to define multiple variables with pointer or reference type. The first places the type modifier adjacent to the identifier:
            int *p1, *p2; // both p1 and p2 are pointers to int
            This style emphasizes that the variable has the indicated compound type. The second places the type modifier with the type but defines only one variable per statement:
            int* p1; // p1 is a pointer to int   int* p2; // p2 is a pointer to int
        * When a const object is initialized from a compile-time constant, the compiler will usually replace uses of the variable with its corresponding value during compilation.
        * To substitute the value for the variable, the compiler has to see the variable’s initializer. When we split a program into multiple files, every file that uses the const must have access to its initializer. In order to see the initializer, the variable must be defined in every file that wants to use the variable’s value (§ 2.2.2, p. 45). To support this usage, yet avoid multiple definitions of the same variable, const variables are defined as local to the file. When we define a const with the same name in multiple files, it is as if we had written definitions for separate variables in each file.
        * We want to define the const in one file, and declare it in the other files that use that object. To define a single instance of a const variable, we use the keyword extern on both its definition and declaration(s)
        * As with any other object, we can bind a reference to an object of a const type. To do so we use a reference to const
        * A temporary object is an unnamed object created by the compiler when it needs a place to store a result from evaluating an expression.
        * It is important to realize that a reference to const restricts only what we can do through that reference. Binding a reference to const to an object says nothing about whether the underlying object itself is const.
        * We may store the address of a const object only in a pointer to const
        * It may be helpful to think of pointers and references to const as pointers or references ”that think they point or refer to const.
        * We indicate that the pointer is const by putting the const after the *. This placement indicates that it is the pointer, not the pointed-to type, that is const
        * We use the term top-level const to indicate that the pointer itself is a const. When a pointer can point to a const object, we refer to that const as a low-level const.
        * The distinction between top-level and low-level matters when we copy an object. When we copy an object, top-level consts are ignored. On the other hand, low-level const is never ignored. When we copy an object, both objects must have the same low-level const qualification or there must be a conversion between the types of the two objects. In general, we can convert a nonconst to const but not the other way round
        * Generally, it is a good idea to use constexpr for variables that you intend to use as constant expressions.
        * that constexpr imposes a top-level const (§ 2.4.3, p. 63) on the objects it defines.
        * An alias declaration starts with the keyword using followed by the alias name and an =. The alias declaration defines the name on the left-hand side of the = as an alias for the type that appears on the right-hand side.
        * As with any other type specifier, we can define multiple variables using auto. Because a declaration can involve only a single base type, the initializers for all the variables in the declaration must have types that are consistent with each other
        * It is worth noting that decltype is the only context in which a variable defined as a reference is not treated as a synonym for the object to which it refers.
        * Generally speaking, decltype returns a reference type for expressions that yield objects that can stand on the left-hand side of the assignment:
        * Remember that decltype((variable)) (note, double parentheses) is always a reference type, but decltype(variable) is a reference type only if variable is a reference.
        * 
        * 
        * 
        * 
        */ 
    // blin blin notes
        /* 
         * call operation ()
         * regard all operations as function
         * literals are named for their values are self-evident
         * A variable provides us with named storage that our programs can manipulate.
         * understand what is a valid pointer value and rethink the meaning of valid. Here is it means not an undefined value.
         * int errNumb = 0; int *const curErr = &errNumb; // curErr will always point to errNumb
         * As we saw in § 2.3.3 (p. 58), the easiest way to understand these declarations is to read them from right to left. In this case, the symbol closest to curErr is const, which means that curErr itself will be a const object. The type of that object is formed from the rest of the declarator. The next symbol in the declarator is *, which means that curErr is a const pointer. Finally, the base type of the declaration completes the type of curErr, which is a const pointer to an object of type int. 
         * 
         * 
         * 
         */ 

    // coding ideas
        // file operation
        /*
         * eject labeled data and do normalization (numbers each line given)
         * ejact labeled data and do sqrt (numbers each line varies)
         * 
         */ 

        // game
        /* 
         * mining clear
         * tanker fighting
         */ 

    // skills:
        /*
         * OS:win/linux/mac
         * github/file redirection
         */

    // writing: the sorting in computer science.
    // 
}

// ch1 code
/**/
    //
    void ex1_2(){
        // let return -1 of main
    }

    void samp1_1()
    {
        std::cout << "Enter two numbers:" << std::endl;
        int v1 = 0, v2 = 0;
        std::cin >> v1 >> v2;
        std::cout   << "The sum of " << v1 << " and " << v2
                    << " is " << v1 + v2 << std::endl;
    }

    void ex1_3()
    {
        std::cout << "Hello, World" << std::endl;
    }

    void ex1_4()
    {
        std::cout << "Enter two numbers:" << std::endl;
        int v1 = 0, v2 = 0;
        std::cin >> v1 >> v2;
        std::cout   << "The product of " << v1 << " and " << v2
                    << " is " << v1 * v2 << std::endl;
    }

    void ex1_6()
    {
        int v1 = 0, v2 = 1;
        std::cout   << "The sum of " << v1;
        //            << " and " << v2;
        //                << " is " << v1 + v2 << std::endl;
        // expect an expression
    }

    void ex1_7()
    {
        //
    }

    void ex1_8()
    {
        std::cout << "/*" << std::endl;
        std::cout << "*/" << std::endl;
    //   std::cout << /* "*/" */ << std::endl; // this ont is wrong!
        std::cout << /* "*/" /* "/*" */ << std::endl;
    }

    void exp1_1()
    {
        // it can be used where a statement is necessary
        {}
        {}
        {}
    }

    void ex1_9()
    {
        int val = 50, sum = 0;
        while(val <= 100){
            sum += val;
            ++val;
        }
        std::cout << "sum from 50 to 100 inclusive is " << sum << std::endl;
    }

    void ex1_10()
    {
        int val = 10, sum = 0;
        while(val > 0 ){
            sum += val;
            --val;
        }
        std::cout << "Sum from 10 to 1 is " << sum << std::endl;
    }

    void ex1_11()
    {
        int val1, val2;
        std::cout << "Please input two integers:" << std::endl;
        std::cin >> val1 >> val2;
        if(val1 > val2 ){
            int temp = val1;
            val1 = val2;
            val2 = temp;
        }
        std::cout << "The number in range ( " << val1 << ", " << val2 << ") are: ";
        while(val1 <= val2){
            std::cout << val1 << " ";
            val1++;
        }
        std::cout << std::endl;
    }

    void samp1_4()
    {
        int sum = 0;
        for(int val = 1; val <= 10; ++val)
            sum += val;
        std::cout   << "The sum of 1 to 10 inclusive is "
                    << sum << std::endl;
    }

    void ex1_12()
    {
        int sum = 0;
        for (int val = -100; val <= 100; ++val)
            sum += val;
        std::cout   << "Sum of -100 to 100 inclusive is "
                    << sum << std::endl; 
    }

    void ex1_13()
    {
        int sum = 0;
        for (int val = 50; val <= 100; ++val)
            sum += val;
        std::cout   << "Sum of 50 to 100 is "
                    << sum << std::endl;
        int sum2 = 0;
        for (int val = 10; val > 0; --val)
            sum2 += val;
        std::cout   << "Sum of 10 to 1 is "
                    << sum2 << std::endl;
    }

    void ex1_14()
    {
        // advantages and disadvantages of the while loop and the for loop
        // the for loop is compact and clear
    }

    void ex1_15()
    {
        // used colon, not a semicolon, after endl
        // std::cout << "Read each file." << std::endl: // error: expected ‘;’ before ‘:’ token
        // quotes around string literal is missing
        // std::cout << Updated master << std::endl;    // error: ‘Updated’ was not declared in this scope
        // second output string
        // std::cout << "Write new master" std::endl;      // error: expected ‘;’ before ‘std’
    }

    void samp1_4_3()
    {
        int sum = 0, value = 0;
        while(std::cin >> value)
            sum += value;
        std::cout << "Sum is " << sum << std::endl;
    }

    void ex1_16()
    {
        int sum = 0, value = 0;
        for( ; std::cin >> value; )
            sum += value;
        std::cout << "Sum is " << sum << std::endl;
    }

    void samp1_4_4()
    {
        int currvalue = 0, currtimes = 0, oldvalue = 0;
        if(std::cin >> oldvalue){
            ++currtimes;
            while(std::cin >> currvalue){
                if(currvalue == oldvalue)
                    currtimes++;
                else{
                    std::cout << oldvalue << ": " << currtimes << std::endl;
                    oldvalue = currvalue;
                    currtimes = 1;
                }
            }    
            std::cout << oldvalue << ": " << currtimes << std::endl;
        }
        
    }

    void samp1_5_1()
    {
        Sales_item item;
        std::cin >> item;
        std::cout << item << std::endl;
    }

    void ex1_20()
    {
        Sales_item item;
        while(std::cin >> item){
            std::cout << item << std::endl;
        }
    }

    void ex1_21()
    {
        Sales_item item1,item2;
        std::cin >> item1 >> item2;
        if(item1.isbn() == item2.isbn())
            std::cout << item1 + item2 << std::endl;
        else
            std::cout << "not of the same isbn, cannot add!" << std::endl;
    }

    void ex1_22()
    {
        Sales_item item,sum;
        std::cin >> sum;
        //std::cout << sum << std::endl;
        while(std::cin >> item){
            if(item.isbn() == sum.isbn()){
                sum += item;
                //std::cout << item << " sum" << sum << std::endl;
            }
            else
                std::cout << "not of the same isbn, cannot add!" << std::endl;
            
        }
        std::cout << sum << std::endl;
    }

    void ex1_23()
    {
        Sales_item item;
        std::vector<Sales_item> books;
        while (std::cin >> item){
            int i;
            for (i = 0; i < books.size(); i++)
            {
                if (books[i].isbn() == item.isbn()){
                    books[i] += item;
                    break;
                }
            }
            if (i == books.size())
                books.push_back(item);
        }
        for( int j = 0; j < books.size(); j++){
            std::cout << books[j] << std::endl;
        }

    }

    int ex1_25()
    {
        Sales_item total;
        // read the firdt transaction and ensure that there is data to process.
        if (std::cin >> total){
            Sales_item item;
            while (std::cin >> item){
                // it the books are the same
                if (total.isbn() == item.isbn())
                    total += item;
                else {
                    // print resuts of the previous book
                    std::cout << total << std::endl;
                    total = item;
                }
            }
            std::cout << total << std::endl; // print the last transaction;
        } else {
            // no input! warn the use.
            std::cerr << "no input data?" << std::endl;
            return -1;
        }
        return 0;
    }

    void ch_1()
    {
        note_1();
    // part one
        //ex1_2();
        //samp1_1();
        //ex1_3();
        //ex1_4();
        //ex1_5(); //skip
        //ex1_6();
        //ex1_7();
        //ex1_8();
        //exp1_1();
        //ex1_9();
        //ex1_10();
        //ex1_11();
        
    // control flow
        //samp1_4();
        //ex1_12();
        //ex1_13();
        //ex1_14();
        //ex1_15();
        //samp1_4_3();
        //ex1_16();
        //samp1_4_4();
        //ex1_17(); ex1_18();//test samp1_4_4();
        //ex1_19(); //test ex1_11(); with range (m,n) m > n 
        
    // class
        //samp1_5_1();
        //ex1_20();
        //ex1_21();
        //ex1_22();
        //ex1_23(); // used vector but not taught here, how to implement by other methods?
        //ex1_24(); // test ex1_23();
        ex1_25();

    }

/**/


// ch2 code
/**/

    class classtest1{
        short shorta;
        char chara;
        long long llla;
        int inta;
    };

    class classtest2{
        long long llla;
        int inta;
        short shorta;
        char chara;
    };

    void ex2_1()
    {
        int inta;
        long longa;
        long long longlonga;
        short shorta;

        unsigned int uinta;
        unsigned long ulonga;
        unsigned long long ulonglonga;
        unsigned short ushorta;

        float floata;
        double doublea;
        std::cout << sizeof(inta) << " " << sizeof(longa) << " " << sizeof(longlonga) << " " << sizeof(shorta) << "\n" 
                    << sizeof(uinta) << " " << sizeof(ulonga) << " " << sizeof(ulonglonga) << " " << sizeof(ushorta) << "\n" 
                    << sizeof(floata) << " " << sizeof(doublea) << " " << sizeof(classtest1) << " " << sizeof(classtest2) << std::endl;
    }

    void ex2_2()
    {
        // rate in double
        // principal in double
        // payment in double
    }

    void ex2_3()
    {
        unsigned u = 10, u2 = 42;
        std::cout << u2 - u << std::endl;   // output 32
        std::cout << u - u2 << std::endl;   // output 2^32-32

        int i = 10, i2 = 42;
        std::cout << i2 - i << std::endl;   // output 32
        std::cout << i - i2 << std::endl;   // output -32

        std::cout << i - u << std::endl;    // output 0
        std::cout << u - i << std::endl;    // output 0
    }
    
    void ex2_4()
    {
        // check prediction about ex2_3
    }

    void ex2_5()
    {
        std::cout   << "a " <<   sizeof('a') 
                    << " " <<   sizeof(L'a') 
                    << " " <<   sizeof("a") 
                    << " " <<   sizeof(L"a") << std::endl
                    << "b " <<   sizeof(10) 
                    << " " <<   sizeof(10u) 
                    << " " <<   sizeof(10L) 
                    << " " <<   sizeof(10uL) 
                    << " " <<   sizeof(012)
                    << " " <<   sizeof(0xC) << std::endl
                    << "c " <<   sizeof(3.14)
                    << " " <<   sizeof(3.14f)
                    << " " <<   sizeof(3.14L) << std::endl
                    << "d " <<   sizeof(10.)
                    << " " <<   sizeof(10e-2) << std::endl;
        /* output
        a 1 4 2 8
        b 4 4 8 8 4 4
        c 8 4 16
        d 8 8
        */
    }

    void ex2_6()
    {
        /*
        int month = 9, day = 7;
        int montho = 09, dayo = 07;
        std::cout << "month:" << month << " day:" << day << std::endl;
        std::cout << "montho:" << montho << " dayo:" << dayo << std::endl;
        */
        // error: 09 invalid octal number
    }

    void ex2_7()
    {
        std::cout   << "Who goes with F\145rgus?\012" << std::endl; // \012 for \n
        std::cout   << sizeof(3.14e1L) << " "
                    // << sizeof(1024f) << " " //error use 1024. instead
                    << sizeof(3.14L) << std::endl;

    }

    void ex2_8()
    {
        std::cout << "2M\n2\tM\n";
    }

    void samp2_2_1()
    {
        long double ld = 3.1415926536;
        //float a{ld}, b = {ld};    // error:narrowing conversion of ‘ld’ from ‘long double’ to ‘float’ inside { }
        float c(ld), d = ld;      // ok but values will be truncated
        std::cout << c << " " << d << std::endl;
    }

    void ex2_9()
    {
        // std::cin >> int input_value; // error: expected primary-expression before ‘int’
        // int i = {3.14}; // error: narrowing conversion
        // double salary = wage = 9999.99; // error: ‘wage’ was not declared in this scope
        int j = 3.14;
    }


    std::string global_str_2_10;
    int global_int_2_10;
    void ex2_10()
    {
        int local_int;
        std::string local_str;
        std::cout   << "global_str:" << global_str_2_10
                    << "  global_int:" << global_int_2_10
                    << "  local_str:"   << local_str
                    << "  local_int:"   << local_int << std::endl;
    }

    // extern int ix = 1024;// definition
    // extern int iz        // declaration
    void ex2_11()
    {
       //int iy;  //definition
        
    }

    void ex2_12()
    {
        //int double = 3.14;
        int _;  // cool
        //int catch-22;
        int l_or_2 = 1;
        double Double = 3.14;
    }

    int i_ex2_13 = 42;
    void ex2_13()
    {
        int i_ex2_13 = 100;
        int j = i_ex2_13;
        std::cout << "j:" << j << std::endl;
    }

    void ex2_14()
    {
        int i = 100, sum = 0;
        for (int i = 0; i != 10; ++i)
            sum += i;
        std::cout << i << " " << sum << std::endl;
    }

    void ex2_15()
    {
        int ival = 1.01;
        // int &rval1 = 1.01; // invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
        int &rval2 = ival;
        // int &rval3;     // invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
    }

    void ex2_16()
    {
        int i = 0, &r1 =i;
        double d = 0, &r2 = d;
        std::cout << (r2 = 3.14159) << std::endl;   // without () error: invalid operands of types ‘double’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’
        std::cout << (r2 = r1) << std::endl;
        std::cout << (i = r2) << std::endl;
        std::cout << (r1 = d) << std::endl;
    }

    void ex2_17()
    {
        int i, &ri = i;
        i = 5, ri = 10;
        std::cout << i << " " << ri << std::endl;
    }

    void ex2_18()
    {
        int i = 0;
        int j = 1;
        int *ip = &i;
        int *ipp = &i;
        std::cout << "ip:" << &ip << "   ipp:" << &ipp << "  *ipp: "<< *ipp <<", "<< *(ipp+1) <<", "<< *(ipp+2) << ", " << *(ipp+3) << std::endl;
        std::cout << "ip:" << ip << "   *ip:(" << *(ip-1) <<", "<< *ip <<", "<< *(ip+1) << std::endl;
        
        ip = &j;
        std::cout << *ipp <<", "<< *(ipp+1) <<", "<< *(ipp+2) << ", " << *(ipp+3) << std::endl;
        std::cout << "ip:" << ip << "   *ip:(" << *(ip-1) <<", "<< *ip <<", "<< *(ip+1) << std::endl;
        *ip = *ip + 1;
        std::cout << *ipp <<", "<< *(ipp+1) <<", "<< *(ipp+2) << ", " << *(ipp+3) << std::endl;
        std::cout << "ip:" << ip << "   *ip:(" << *(ip-1) <<", "<< *ip <<", "<< *(ip+1) << std::endl;
        *ip ++;
        // the pointer now points to inself
        std::cout << *ipp <<", "<< *(ipp+1) <<", "<< *(ipp+2) << ", " << *(ipp+3) << std::endl;
        std::cout << "&ip:" << &ip << " ip:" << ip << "   *ip:(" << *(ip-1) <<", "<< *ip <<", "<< *(ip+1) << std::endl;
        ++ *ip;
        std::cout << *ipp <<", "<< *(ipp+1) <<", "<< *(ipp+2) << ", " << *(ipp+3) << std::endl;
        std::cout << "&ip:" << &ip << " ip:" << ip << "   *ip:(" << *(ip-1) <<", "<< *ip <<", "<< *(ip+1) << std::endl;
    }

    void ex2_19()
    {
        int i = 0,j = 1;
        int &ir = i;
        int *ip = &i;
        std::cout << "i:" << "  ir:" << ir << " ip:" << ip << " *ip:" << *ip << std::endl; 
        ip = &j;// the reference cannot be rebind to another value.
    }

    void ex2_20()
    {
        int i = 42;
        int *p1 = &i;
        *p1 = *p1 * *p1;
    }

    void ex2_21()
    {
        int i = 0;
        //double* dp = &i;//<< "ip:" << &ip 
        //int *ip = i;//<< "ip:" << &ip 
        int *p = &i;

    }

    void ex2_22()
    {
        int i = 1;
        int *ip = &i;
        if(ip)
            std::cout << "ip is true" << std::endl;
        if(*ip)
            std::cout << "*ip is true" << std::endl;
    }

    void ex2_23_stack()
    {
        int i = 1;
        int j = 2;
        int *ip = &i;
        std::cout <<"ip in stack:" << &ip << "  ip:" << ip << std::endl;
        *(ip+10) = *(ip+2);

    }

    void ex2_23()
    {
        // the behavior of invalid pointer is undefined
        // therefore you cannot decide
        int i=3;
        ex2_23_stack();
        int *ip;
        std::cout << "ip in stack:" << &ip << "  ip:" << ip << std::endl;
        if(ip)
            std::cout << "ip is true" << std::endl;
        else
            std::cout << "ip is not true" << std::endl; 
        /*
        ip in stack:0x7ffe6e353ea0  ip:0x7ffe6e353e98
        ip in stack:0x7ffe6e353e78  ip:0x7fb17be9de3e
        ip is true
        *** stack smashing detected ***: ./cppprimer terminated
        Aborted (core dumped)
        */
    }

    void ex2_24()
    {
        int i = 42;
        void *p = &i;
        // long *lp = &i;      // error: cannot convert ‘int*’ to ‘long int*’ in initialization
    }

    void samp2_3_3()
    {
        int i = 42;
        int *p;
        int *&r = p;
        r = &i;
        *r = 0;
        std::cout << "i:" << i << "     r:" << r << "   p:" << p << "   *p:" << *p << " *r:" << *r << std::endl;
        /*
        The easiest way to understand the type of r is to read the definition right to left. The symbol closest to the name of the variable (in this case the & in &r) is the one that has the most immediate effect on the variable’s type. Thus, we know that r is a reference. The rest of the declarator determines the type to which r refers. The next symbol, * in this case, says that the type r refers to is a pointer type. Finally, the base type of the declaration says that r is a reference to a pointer to an int.
        */
    }

    void ex2_25()
    {
        int* ip, i, &r = i; // pointer of int, int, reference of int
        int ii, *iip = 0;   // int, pointer of in
        int *iiip, iiip2;   // pointer of int, int;
    }

    void ex2_26()
    {
        // const int buf;  // error: uninitialized const ‘buf’ [-fpermissive]
        int cnt = 0;
        const int sz =cnt;
        // ++cnt, ++sz;    // error: increment of read-only variable ‘sz’
    }

    void ex2_27()
    {
        int i = -1;
        // int i = -1, &r = 0; // 0 is not an object error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
        int i2 = 0;
        
        int *const p2 = &i2;    // fine
        const int i3 = -1, &r4 = 0;  // okay since reference is a const tempororay variable is used
        const int *const p3 = &i2;  // legal
        const int *p = &i2;         // legal
        //  const int &const r2;        // error: ‘const’ qualifiers cannot be applied to ‘const int&’ error: ‘r2’ declared as reference but not initialized 
        const int i4 = i, &r3 = i;  // okay 
    }

    void ex2_28()
    {
        //int i, *const cp;       // error: uninitialized const ‘cp’ [-fpermissive]
        //int *p1, *const p2;     // error: uninitialized const ‘p2’ [-fpermissive]
        //const int ic, &r = ic;  // error: uninitialized const ‘ic’ [-fpermissive]
        //const int *const p3;    // error: uninitialized const ‘p3’ [-fpermissive]
        const int *p;
    }

    void ex2_29()
    {
        int i;//, *const cp;       // error: uninitialized const ‘cp’ [-fpermissive]
        int *p1, *const p2=p1;     // error: uninitialized const ‘p2’ [-fpermissive]
        const int ic = 1, &r = ic;  // error: uninitialized const ‘ic’ [-fpermissive]
        const int *const p3 = &ic;    // error: uninitialized const ‘p3’ [-fpermissive]
        const int *p;
        i = ic;
        /*
        p1 = &ic; // p1 is not a pointer to const error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
        p1 = p3;  // p1 is not a pointer to const error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
        p3 = &ic; // const pointer cannnot be assigned error: assignment of read-only variable ‘p3’
        p2 = p1;  // const pointer cannot be assigned error: assignment of read-only variable ‘p2’
        ic = *p3; // const cannot be assigned error: assignment of read-only variable ‘ic’
        */
    }

    void ex2_30()
    {
        const int i = 1;    //  top-level const
        const int v2 = 0;   //  top level const
        int v1 =v2;
        int *p1 = &v1, &r1 = v1;
        const int *p2 = &v2, *const p3 = & i, &r2 = v2; // p2 t, p3, tl, r2 t;
    }

    void ex2_31()
    {
        const int i = 1;    //  top-level const
        const int v2 = 0;   //  top level const
        int v1 =v2;
        int *p1 = &v1, &r1 = v1;
        const int *p2 = &v2, *const p3 = & i, &r2 = v2; // p2 t, p3, tl, r2 t;

        r1 = v2; // low level assignment
        //p1 = p2; // can't convert error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
        //p1 = p3; // can't convert error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
        p2 = p1; // okay
        p2 = p3; // okay

    }

    int null_ex2_32 = 0;
    void ex2_32()
    {
        // int null = 0, *p = null; // error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
        // constexpr int null2 = 0, *p2 = null2; // error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
        int null3 = 0, *p3 = 0;
        // constexpr int *p4 = &null3; // error: ‘& null3’ is not a constant expression
        constexpr int *p5 = &null_ex2_32;
    }

//

    void samp2_5_1()
    {
        typedef double wages; // wages is a synonym for double
        typedef wages base, *p; // base is a synonym for double, p for double*
        wages week = 0.1;
        p ip = &week;
    }

    void ex2_33()
    {
        int i = 0, &r = i;  // int i, ref to int r
        auto a = r;         // int a
        const int ci = i, &cr = ci;     // const int ci, ref to const int cr
        auto b = ci;        // int b
        auto c = cr;        // int c
        auto d = &i;        // pointer to int d
        auto e = &ci;       // pointer to const int e
        const auto f = ci;  // const int f
        auto &g = ci;       // ref to const g
        const auto &j = 42; // 

        std::cout << a << std::endl;    // 0 
        a = 42;
        std::cout << a << std::endl;    // 42
        std::cout << b << std::endl;    // 0
        b =42;
        std::cout << b << std::endl;    // 42
        std::cout << c << std::endl;    // 0
        c = 42;
        std::cout << c << std::endl;    // 42
        // d = 42; // error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
        // e = 42; // error: invalid conversion from ‘int’ to ‘const int*’ [-fpermissive]
        // g = 42; // error: assignment of read-only reference ‘g’

    }

    void ex2_34()
    {
        // included in 33
    }

    void ex2_35()
    {
        const int i = 42;   // const int i
        auto j = i;         // int j
        const auto &k = i;  // ref to const k
        auto *p = &i;       // pointer to const p
        const auto j2 = i, &k2 = i; // const int j2, ref to const k2
        // k = 3;  // error: assignment of read-only reference ‘k’
        // k2 = 1; // error: assignment of read-only reference ‘k2’
        // *p = 2; // error: assignment of read-only location ‘* p’
        j = 5;
        p = &j;
        std::cout << *p << std::endl;
    }

    void ex2_36()
    {
        int a = 3, b = 4;
        decltype(a) c = a;
        decltype((a)) d = a; // ref to a
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        ++c; // 3, 4, 4, 3
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        ++d; // 4, 4, 4, 4
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
    }

    void ex2_37()
    {
        int a = 3, b = 5;
        decltype(a) c = a;
        decltype(a = b) d = a; // ref to a and note that a = b is not executed
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        ++c; // 3, 4, 4, 3
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        ++d; // 4, 4, 4, 4
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
    }

    void ex2_38()
    {
        int a = 3, &b = a;
        auto c = b;
        decltype(b) d = a;
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        c = 1;  // 3, 3, 1, 3
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        d = 2;  // 2, 2, 1, 2
        std::cout << "( " << a << ", " << b << ", " << c << ", " << d << ")" << std::endl;
        auto e = a;
        decltype(a) f = a;
    }

    void ch_2()
    {
        // type
            //ex2_1();
            //ex2_2();
            //ex2_3();
            //ex2_4();

            // literals
                //ex2_5();
                //ex2_6();
                //ex2_7();
                //ex2_8();
        // variables
            // initialization
                //samp2_2_1();
                //ex2_9();
                //ex2_10();
            // declaration
                //ex2_11();
            //  Identifiers
                //ex2_12();
            // scope
                //ex2_13();
                //ex2_14();
        // Compound types
            //  reference
                //ex2_15();
                //ex2_16();
                //ex2_17();
            // pointers
                //ex2_18(); //*** cool pointer that points to itself
                //ex2_19();
                //ex2_20();
                //ex2_21();
                //ex2_22();
                //ex2_23();
                //ex2_24();
                //samp2_3_3();
                //ex2_25();
                //ex2_26();
                //ex2_27();
                //ex2_28();
                //ex2_29();
                //ex2_30();
                //ex2_31();
                //ex2_32();
        // dealing with types
            //samp2_5_1();
            //ex2_33();
            //ex2_34();
            //ex2_35();
            //ex2_36();
            //ex2_37();
            ex2_38();
        //
    }

int main()
{

    //ch_1();
    ch_2();
    return -1;
}


/**/ //tables
    // 
    /*  Table 2.2: Specifying the Type of a Literal  
        //  Character and Character String Literals
        Prefix Meaning Type
        u Unicode 16 character char16_t
        U Unicode 32 character char32_t
        L wide character wchar_t
        u8 utf-8 (string literals only) char
            
        //    Integer Literals Floating-Point Literals
        Suffix Minimum Type Suffix Type
        u or U unsigned f or F float
        l or L long l or L long double
        ll or LL long long 
        */
    //
    /* Table 2.3: C++ Keywords
        alignas continue friend register true
        alignof decltype goto reinterpret_cast try
        asm default if return typedef
        auto delete inline short typeid
        bool do int signed typename
        break double long sizeof union
        case dynamic_cast mutable static unsigned
        catch else namespace static_assert using
        char enum new static_cast virtual
        char16_t explicit noexcept struct void
        char32_t export nullptr switch volatile
        class extern operator template wchar_t
        const false private this while
        constexpr float protected thread_local
        const_cast for public throw
        */
    //
    /*  Table 2.4: C++ Alternative Operator Names
        and bitand compl not_eq or_eq xor_eq
        and_eq bitor not or xor
        */
    //