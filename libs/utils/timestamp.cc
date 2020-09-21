
#include "timestamp.h"
#include<ctime>
#include<iostream>
#include<string>
 
std::string Timestamp::toJson(){
return "{\"timestamp\":" + std::to_string(std::time(0)) + "}" ;
}

 Timestamp GetTimestamp() {
     Timestamp t;
     t.timestamp = std::time(0);
     return t;
 }
    