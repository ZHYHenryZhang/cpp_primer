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
        std::cout << "Style: Begin each line within multiline comment with an asterisk *" << std::endl;


    // English note 
        /*
        * comment pairs do not nest
        * span multiple lines
        * a statement that yields a result
        * A block is a sequence of zero or more statements enclosed by curly braces.
        * Headers from the standard library are enclosed in angle brackets (< >). Those that are not part of the library are enclosed in double quotes (" ").
        * 
        * 
        * 
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


int main()
{

    ch_1();
    return -1;
}