#include <iostream>
#include <memory>
#include "server.h"
#include "libs/utils/timestamp.h"

#include "pistache/endpoint.h"
#include "nlohmann/json.hpp"
using namespace Pistache;

class HelloHandler : public Http::Handler
{
public:
  HTTP_PROTOTYPE(HelloHandler)

  void onRequest(const Http::Request &request, Http::ResponseWriter response) override
  {
    UNUSED(request);
    nlohmann::json obj = {
        {"pi", 3.141},
        {"happy", true},
        {"name", "Niels"},
        {"nothing", nullptr},
        {"answer", {{"everything", 42}}},
        {"list", {1, 0, 2}},
        {"object", {{"currency", "USD"}, {"value", 42.99}}}};
    std::cout << obj.dump(4) << std::endl;

    // response.send(Pistache::Http::Code::Ok, Timestamp::toJson());
     response.send(Pistache::Http::Code::Ok, obj.dump(4));
  }
};
int main(void)
{
  int port = 9080;
  int thr = 2;
  std::cout << "Starting server @port " << port << std::endl;
  Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(port));
  auto opts = Http::Endpoint::options().threads(thr);
  Http::listenAndServe<HelloHandler>(addr, opts);
  return 0;
}
