//
// Created by chrisn on 7/7/19.
//

#ifndef CATAWAY_VIDEOEVENT_H
#define CATAWAY_VIDEOEVENT_H

#include <chrono>
#include "Image.h"

class VideoEvent {
public:
   VideoEvent();

   std::vector<std::shared_ptr<Image>> images;
   std::chrono::time_point<std::chrono::high_resolution_clock> eventTime;

   bool isInit() { return init; }

private:
   bool init;
};


#endif //CATAWAY_VIDEOEVENT_H
