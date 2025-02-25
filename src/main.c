#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: mygit <command>\n");
        return 1;
    }

    if (strcmp(argv[1], "init") == 0) {
        printf("placeholder for init\n");
    } else if (strcmp(argv[1], "add") == 0) {
        printf("placeholder for add\n");
    } else if (strcmp(argv[1], "commit") == 0) {
        printf("placeholder for commit\n");
    } else {
        printf("Unknown command: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
