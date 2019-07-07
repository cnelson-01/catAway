//
// Created by chrisn on 7/6/19.
//

#ifndef CATAWAY_CAMERA_H
#define CATAWAY_CAMERA_H


#include <string>
#include <opencv2/videoio.hpp>
#include "ThreadBase.h"

class Camera : public ThreadBase {

public:
   Camera(std::string &deviceString, std::string &name, double moDetectThresh, std::string &savePath);


private:

   cv::VideoCapture vc;

   std::string deviceString;
   std::string name;
   std::string savePath;

   double moDetectThresh;

   void run();

};


#endif //CATAWAY_CAMERA_H
