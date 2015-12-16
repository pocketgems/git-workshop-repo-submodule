#include <string.h>

void str_upper(char *s)
{
    int n = strlen(s);
    for (int i=0; i<n; ++i) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c += 'A' - 'a';
            s[i] = c;
        }
    }
}
