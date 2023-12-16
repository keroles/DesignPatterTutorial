/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"

namespace VeryLongAndComplexNamespaceName {
    void myFunction() {
        // Implementation
    	printf("myFunction Implementation \n");
    }
}
namespace MyProject {
    namespace Utilities {
        namespace Math {
            int add(int a, int b) {
                return a + b;
            }
        }
    }
}

// Create an alias for the namespace
namespace VLN = VeryLongAndComplexNamespaceName;
namespace myPutMath = MyProject::Utilities::Math ;
int main() {
    // Now you can use the alias instead of the full namespace name
    VLN::myFunction();
//    int result = MyProject::Utilities::Math::add(5, 3);
    printf("myPutMath =%d",myPutMath::add(3,1));

}

