FROM --platform=linux/amd64 ubuntu:20.04 as builder
RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential dos2unix libboost-all-dev texinfo texi2html libxml2-dev subversion bison flex zlib1g-dev m4 libtemplate-perl libtemplate-plugin-yaml-perl libfile-slurp-perl ragel re2c git

ADD . /z88dk
WORKDIR /z88dk
RUN chmod 777 ./build.sh
RUN ./build.sh -l

RUN mkdir -p /deps
RUN ldd /z88dk/bin/z80asm | tr -s '[:blank:]' '\n' | grep '^/' | xargs -I % sh -c 'cp % /deps;'

FROM ubuntu:20.04 as package

COPY --from=builder /deps /deps
COPY --from=builder /z88dk/bin/z80asm /z88dk/bin/z80asm
ENV LD_LIBRARY_PATH=/deps
