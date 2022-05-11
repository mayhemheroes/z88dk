# Build Stage
FROM --platform=linux/amd64 ubuntu:20.04 as builder
RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y vim less man wget tar git gzip unzip make cmake software-properties-common curl 
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential dos2unix libboost-all-dev texinfo texi2html libxml2-dev subversion bison flex zlib1g-dev m4 libtemplate-perl libtemplate-plugin-yaml-perl libfile-slurp-perl ragel re2c

ADD . /z88dk
WORKDIR /z88dk
RUN chmod 777 ./build.sh
RUN ./build.sh -l
