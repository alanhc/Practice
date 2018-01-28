#include <ctype.h>
#include <stdio.h>

int console_getline(char buffer[], int max) {
    max = max -1; // reserve 1 char for '\0'
    int length = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            // a line can be terminated by a new line '\n'
            break;
        }
        buffer[length++] = c;
    }
    buffer[length] = '\0';
    return length;
}

main()
{
    char line[80];
    int total_cases;

    scanf("%d", &total_cases);
    // consume the tailing '\n' after the input of 'total_cases'
    console_getline(line, sizeof(line));

    for (; total_cases > 0; total_cases--) {
        // Process a test case

        // a test case starts with an empty line
        console_getline(line, sizeof(line));

        // read the 1st permutation array
        console_getline(line, sizeof(line));

        int permute[100];
        float value[100];

        char *p = line;
        int i, n = 0;
        while (sscanf(p, "%d", &i) > 0) {
            permute[n++] = i - 1;

            while (isdigit(*p)) {
                // goto the non-digit character
                p++;
            }
            while (*p != '\0' && !isdigit(*p)) {
                // goto the starting of a number
                p++;
            }
            if (*p == '\0') {
                // end of string -- no more numbers
                break;
            }
        }

        for (i = 0; i < n; i++) {
            scanf("%f", &value[permute[i]]);
        }
        // consume the tailing '\n' after the input values
        console_getline(line, sizeof(line));

        for (i = 0; i < n; i++) {
            printf("%g\n", value[i]);
        }
    }
}
