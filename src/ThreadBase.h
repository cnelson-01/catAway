//
// Created by chrisn on 7/6/19.
//

#ifndef CATAWAY_THREADBASE_H
#define CATAWAY_THREADBASE_H


#include <thread>

class ThreadBase {
public:
   ThreadBase();

   void start();

   void stop();

protected:
   std::thread runThread;
   bool keepRuning;

   //override if run loop is blocking
   void notify() {};

   virtual void run() = 0;

};


#endif //CATAWAY_THREADBASE_H
