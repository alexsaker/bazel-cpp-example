#include<iostream>
#include <memory>
#include "server.h"
#include "libs/utils/timestamp.h"
// #include "crow/crow_all.h"

#include "pistache/endpoint.h"

using namespace Pistache;

class HelloHandler : public Http::Handler
{
public:
    HTTP_PROTOTYPE(HelloHandler)

    void onRequest(const Http::Request &request, Http::ResponseWriter response) override
    {
        UNUSED(request);
        
        response.send(Pistache::Http::Code::Ok,Timestamp::toJson());
        

    }


};
// #include "nlohmann/json.hpp"
int main(void){
  int port = 9080;
  int thr = 2;
  std::cout << "Starting server @port " << port << std::endl;

    //   crow::SimpleApp app;

    // CROW_ROUTE(app, "/")([](){
    //     return "Hello world";
    // });

  // app.port(18080).multithreaded().run();
  Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(port));
  auto opts = Http::Endpoint::options().threads(thr);
  Http::listenAndServe<HelloHandler>(addr, opts);
  return 0;
}
