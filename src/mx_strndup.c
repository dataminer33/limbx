#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int len = mx_strlen(s1);
    
    if (len > (int)n)
        return mx_strncpy(mx_strnew(n), s1, n); 
    return mx_strncpy(mx_strnew(len), s1, len); 
}
