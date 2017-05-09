#ifndef EROSION_H_
#define EROSION_H_

#include "Action.hpp"
#pragma once

using namespace cv;

class Erosion: public Action {

public:
int erosion_type;
	int erosion_elem = 0;
	int erosion_size = 0;
	int const max_elem = 2;
	int const max_kernel_size = 21;

virtual void run();
};


#endif
