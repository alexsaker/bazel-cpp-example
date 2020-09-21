#include <iostream>
    struct Timestamp
    {
        public:
        unsigned long int timestamp;
        static std::string toJson();
    };

    Timestamp GetTimestamp();
    