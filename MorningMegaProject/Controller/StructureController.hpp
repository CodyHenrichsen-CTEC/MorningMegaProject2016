//
//  StructureController.hpp
//  MorningMegaProject
//
//  Created by Cody Henrichsen on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#include <string>
using namespace std;

class StructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    void testIntArray();
    void testNodeTypes();
public:
    StructureController();
    void start();
};

#endif /* StructureController_hpp */
