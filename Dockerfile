FROM debian:buster
RUN apt-get update && apt-get install --no-install-recommends --yes \
    autoconf \
    automake \
    autotools-dev \
    build-essential \
    libopenal-dev \
    libsdl2-dev \
    libtool \
    libwxgtk3.0-dev  \
    pkg-config \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY . .
RUN autoreconf -i
RUN ./configure
RUN make
ENV DISPLAY=host.docker.internal:0
CMD ["/app/arculator"]
