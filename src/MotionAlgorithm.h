//
// Created by chrisn on 7/7/19.
//

#ifndef CATAWAY_MOTIONALGORITHM_H
#define CATAWAY_MOTIONALGORITHM_H


#include "../opencv/3rdparty/protobuf/src/google/protobuf/stubs/shared_ptr.h"
#include "VideoEvent.h"

class MotionAlgorithm {

public:
   MotionAlgorithm();
   std::shared_ptr<VideoEvent> process(std::shared_ptr<Image> image);

private:
   std::vector<std::shared_ptr<Image>> images;
   cv::Mat average;
};


#endif //CATAWAY_MOTIONALGORITHM_H
