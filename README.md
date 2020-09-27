# BAZEL CPP EXAMPLE

## Prerepuiqites
- Install pistache [here](http://pistache.io/quickstart#installing-pistache)
- Install Bazel on Ubuntu ([here](https://docs.bazel.build/versions/master/install-ubuntu.html))


## Build solution
```bash
bazel build  //apps/app1:server
``` 

## Execute solution
```bash
./bazel-bin/apps/app1/server
``` 

## Test solution
```bash
curl http://localhost:9080/
``` 


## TODO
- [x] Write first app: app1
- [x] Write library used by app1  
- [ ] Add multiple routes 
- [ ] Add tests  