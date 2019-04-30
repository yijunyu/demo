FROM yijun/fast:latest
RUN apt-get install -y golang
ENV GOPATH /usr/bin
ENV CGO_ENABLED=1
ENV GOOS=linux
RUN addgroup --gid 33333 gitpod && \
    adduser --gecos "First Last,RoomNumber,WorkPhone,HomePhone" --gid 33333 --uid 33333 --shell /bin/bash --disabled-login --disabled-password gitpod
RUN chmod g+rw /home && \
    chown -R gitpod:gitpod /home/gitpod && \
    mkdir -p /workspace && \
    chown -R gitpod:gitpod /workspace;
RUN mkdir -p /root && touch /root/dontBreakMyBuild
ENV HOME=/home/gitpod
ENV GITPOD_HOME /home/gitpod
ENV GITPOD_UID_GID 33333
ENV SHELL /bin/bash
ENV USE_LOCAL_GIT true
WORKDIR $HOME
USER gitpod
