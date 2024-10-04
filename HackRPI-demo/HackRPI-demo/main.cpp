//
//  main.cpp
//  HackRPI-demo
//
//  Created by Ryan Wang on 10/4/24.
//

#include <iostream>
#include <ofstream>

int main(int argc, const char * argv[]) {
    // insert code here...

    std::list<int> numArr;

    //iterate through list
    for(std::list<int>::iterator itr = numArr.begin(); itr != numArr.end(); itr++){

        std::cout<<*itr<<", ";
    }
    
    //reverse iterator
    for(std::list<int>::iterator itr = numArr.end(); itr != numArr.begin(); --itr){
        std::cout<<*itr<<", ";
    }
    

    
}
