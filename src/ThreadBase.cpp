//
// Created by chrisn on 7/6/19.
//

#include "ThreadBase.h"

ThreadBase::ThreadBase() {
   keepRuning = false;
}

void ThreadBase::start() {
   keepRuning = true;
   runThread = std::thread(&ThreadBase::run, this);
}

void ThreadBase::stop() {
   keepRuning = false;
   notify();
   if (runThread.joinable()) {
      runThread.join();
   }
}
