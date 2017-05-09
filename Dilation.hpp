#ifndef DILATION_H_
#define DILATION_H_

#include "Action.hpp"
#pragma once

using namespace cv;

class Dilation: public Action {

public:
	int dilation_type;
	int dilation_elem = 0;
	int dilation_size = 0;
	int const max_elem = 2;
	int const max_kernel_size = 21;	

virtual void run();
};


#endif
