#include <sys/socket.h>


class SimpleServer {
  /* Represents a simple server with a single open port for listening. */

  int domain;
  int socket_type;
  int protocol;
  int port;

  public:
    SimpleServer(int, int, int, int);
};
