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
## Create base image and push to repository
```bash
docker build -f ./docker/Dockerfile.base  -t asaker/myubuntu:1.0 .
docker push  asaker/myubuntu:1.0  
```
## Run base docker image
```bash
 bazel run @ubuntu_with_pistache//image
```
## Build server image
```bash
  bazel run //apps/app1:v1
```
## Push image to repo
Prerequisites: Having logged to docker registry
```bash
bazel run //apps/app1:app1-v1
```


## Run container image
```bash
 docker run  -p 9080:9080 --name app1   asaker/apps/app1:v1
```

## TODO
- [x] Write first app: app1
- [x] Write library used by app1  
- [x] Add tests  
- [x] Add Docker build