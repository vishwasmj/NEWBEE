#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "Dilation.hpp"

using namespace std;
using namespace cv;
void Dilation::run(){
	string img;
	
	
	cout<<"It's a dilation class inherit the function of abstract class action"<<endl;
	cout<<"Enter the inputs for dilation class."<<endl;

	cout<<"enter the name of input image :"<<endl;
	cin>>img;
	cout<<"enter the dilation size :"<<endl;
	cin>>dilation_size;
	cout<<"enter the dilation type like 'MORPH_RECT,MORPH_CROSS,MORPH_ELLIPSE':"<<endl;
	cin>>dilation_type;
	Mat original_img = imread(img);

	if(!original_img.data ) {
	    std::cerr << " Wrong file image";
	   }

	namedWindow("Dilation", WINDOW_NORMAL);

	imshow("Dilation", original_img);
	
	Mat element = getStructuringElement( dilation_type,
                                       Size( 2*dilation_size + 1, 2*dilation_size+1 ),
                                       Point( 0, 0 ) );
/// Apply the erosion operation
Mat dilation_dst;
  dilate( original_img, dilation_dst, element );
  imshow( "Dilation1", dilation_dst );

	   waitKey (0);
	   std::cout << "Dilation done"<<endl;
	
  }

   

