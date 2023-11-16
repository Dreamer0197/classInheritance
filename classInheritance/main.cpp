//
//  main.cpp
//  classInheritance
//
//  Created by Kaan Şengün on 15.11.2023.
//

#include <iostream>
#include "classInheritance.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
/*    derivedClass obj1;
      baseClass obj2;
      obj2.setX(3);
      obj1.setX(5);
      obj1.print();
      obj1.setY(12);
      obj1.print2();*/
    baseClass obj1(5);//constructorlarda yukarıdan aşağıya bir yapım var
    derivedClass obj2(8,3);//destructorlarda aşağıdan yukarı bir yıkım söz konusu
    derivedClass obj3(obj2);
    
    obj1.print();
    obj2.print();
    
    /*
    cout<<"For base; X:"<<obj1.getX()<<endl;
    cout<<"For derived; X:"<<obj2.getX()<<" Y:"<<obj2.getY()<<endl;
    */
    /*CClass cObject;
    cObject.a=5;
    cObject.b=10;*/
    return 0;
}
