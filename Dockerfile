FROM --platform=linux/amd64 ubuntu:20.04 
RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential dos2unix libboost-all-dev texinfo texi2html libxml2-dev subversion bison flex zlib1g-dev m4 libtemplate-perl libtemplate-plugin-yaml-perl libfile-slurp-perl ragel re2c
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y git

ADD . /z88dk
WORKDIR /z88dk
RUN chmod 777 ./build.sh
RUN ./build.sh -l
