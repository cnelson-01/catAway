//
// Created by chrisn on 7/6/19.
//

#include "Camera.h"

Camera::Camera(std::string &deviceString, std::string &name, double moDetectThresh, std::string &savePath) {
   this->deviceString = deviceString;
   this->name = name;
   this->moDetectThresh = moDetectThresh;
   this->savePath = savePath;
}

void Camera::run() {

//   vc = cv::VideoCapture("rtsp://admin:admin@192.168.0.2:554/11");
   vc = cv::VideoCapture(deviceString);
   cv::Mat tmp;
   while (keepRuning) {
      vc.read(tmp);
      if (tmp.rows) {

      }
      tmp.rows = 0;
   }
}
