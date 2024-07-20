#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void http_hello_page(FILE* request, FILE* response) {
    char username[100];
    fgets(username, 100, request);
    username[strlen(username) - 1] = '\0'; // Remove newline character
    char* escaped_username = escape_html(username);
    char* response_message = "hello ";
    char* response_message_with_username = (char*)malloc(strlen(response_message));
}