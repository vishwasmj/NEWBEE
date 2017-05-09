#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "Erosion.hpp"

using namespace std;
using namespace cv;
//static void onChange(int pos, void* userInput);
//void Erosion1(int, void*);
void Erosion::run(){
	string img;
	
	
	cout<<"It's a erosion class inherit the function of abstract class action"<<endl;
	cout<<"Enter the inputs for erosion class."<<endl;

	cout<<"enter the name of input image :"<<endl;
	cin>>img;
	cout<<"enter the erosion size :"<<endl;
	cin>>erosion_size;
	cout<<"enter the erosion type like 'MORPH_RECT,MORPH_CROSS,MORPH_ELLIPSE':"<<endl;
	cin>>erosion_type;
	Mat original_img = imread(img);

	if(!original_img.data ) {
	    std::cerr << " Wrong file image";
	   }

	namedWindow("Erosion", WINDOW_NORMAL);

	imshow("Erosion", original_img);
	/*//Create Erosion Trackbar
  	createTrackbar( "Element:\n 0: Rect \n 1: Cross \n 2: Ellipse", "Erosion",
                  &erosion_elem, max_elem,
                  Erosion1 );

  createTrackbar( "Kernel size:\n 2n +1", "Erosion",
                  &erosion_size, max_kernel_size,
                  Erosion1 );

	Erosion1(0,0);*/
	Mat element = getStructuringElement( erosion_type,
                                       Size( 2*erosion_size + 1, 2*erosion_size+1 ),
                                       Point( 0, 0 ) );
/// Apply the erosion operation
Mat erosion_dst;
  erode( original_img, erosion_dst, element );
  imshow( "Erosion1", erosion_dst );

	   waitKey (0);
	   std::cout << "Erosion done"<<endl;
	
  }

   

