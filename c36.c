#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

void http_hello_page(int sockfd) {
    char username[100];
    char outputbuf[1000];
    int n;

    // Read the request body (the username) into the username variable
    n = read(sockfd, username, sizeof(username));
    if (n < 0) {