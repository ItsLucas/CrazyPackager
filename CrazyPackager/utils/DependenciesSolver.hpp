//
//  DependenciesSolver.hpp
//  CrazyPackager
//
//  Created by Lucas on 7/28/15.
//  Copyright © 2015 CrazyMCP. All rights reserved.
//

#ifndef DependenciesSolver_cpp
#define DependenciesSolver_cpp

#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

list<string> resolveDependencies(string depfilename);
list<string> getCpkDeps(string cpkname);

#endif /* DependenciesSolver_cpp */
