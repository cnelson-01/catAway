//
// Created by chrisn on 7/7/19.
//

#ifndef CATAWAY_LOGGER_H
#define CATAWAY_LOGGER_H


#include <string>

class Logger {

public:
   static Logger &getInstance() { return instance; };

   void logError(std::string mesg);
private:
   static Logger instance;

};


#endif //CATAWAY_LOGGER_H
