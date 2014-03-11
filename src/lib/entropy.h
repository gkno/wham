//
//  entropy.h
//  wham
//
//  Created by Zev Kronenberg on 2/19/13.
//  Copyright (c) 2013 Zev Kronenberg. All rights reserved.
//

#ifndef __wham__entropy__
#define __wham__entropy__

#endif /* defined(__wham__entropy__) */

#include <map>
#include <string>
#include <cmath>

using namespace std ;

class fastQ{
 private:
  string fastqSeq;
 public:
  
  void setDNA(string dna);

  double entropy(int size);
};
