
#include <stdio.h>

/* ========== WITHOUT POINTER ARITHMETIC ========== */

/* a) Find length */
int length1(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

/* b) Copy string */
void copy1(char dest[], char src[]) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

/* c) Concatenate into first string */
void concat1(char s1[], char s2[]) {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        i++;
    }

    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

/* d) Compare two strings */
int compare1(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }

    if (s1[i] == s2[i])
        return 0;
    else if (s1[i] < s2[i])
        return -1;
    else
        return 1;
}

/* e) Reverse string */
void reverse1(char s[]) {
    int i = 0;
    int j = length1(s) - 1;
    char temp;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

/* f) Check palindrome */
int palindrome1(char s[]) {
    int i = 0;
    int j = length1(s) - 1;

    while (i < j) {
        if (s[i] != s[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

/* g) Find substring: return starting index or -1 */
int substring1(char s[], char sub[]) {
    int i, j;

    if (sub[0] == '\0')
        return 0;

    for (i = 0; s[i] != '\0'; i++) {
        j = 0;

        while (sub[j] != '\0' &&
               s[i + j] == sub[j]) {
            j++;
        }

        if (sub[j] == '\0')
            return i;
    }

    return -1;
}


/* ========== WITH POINTERS ========== */

/* a) Find length */
int length2(char *s) {
    int len = 0;

    while (*s != '\0') {
        len++;
        s++;
    }

    return len;
}

/* b) Copy string */
void copy2(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

/* c) Concatenate into first string */
void concat2(char *s1, char *s2) {
    while (*s1 != '\0') {
        s1++;
    }

    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}

/* d) Compare two strings */
int compare2(char *s1, char *s2) {
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }

    if (*s1 == *s2)
        return 0;
    else if (*s1 < *s2)
        return -1;
    else
        return 1;
}

/* e) Reverse string */
void reverse2(char *s) {
    char *left = s;
    char *right = s;
    char temp;

    while (*right != '\0') {
        right++;
    }

    if (right == left)
        return;

    right--;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

/* f) Check palindrome */
int palindrome2(char *s) {
    char *left = s;
    char *right = s;

    while (*right != '\0') {
        right++;
    }

    if (right == left)
        return 1;

    right--;

    while (left < right) {
        if (*left != *right)
            return 0;

        left++;
        right--;
    }

    return 1;
}

/* g) Find substring */
int substring2(char *s, char *sub) {
    char *start = s;
    char *p, *q;

    if (*sub == '\0')
        return 0;

    while (*start != '\0') {
        p = start;
        q = sub;

        while (*q != '\0' && *p == *q) {
            p++;
            q++;
        }

        if (*q == '\0')
            return (int)(start - s);

        start++;
    }

    return -1;
}


/* ========== MAIN FUNCTION ========== */

int main() {
    char s1[200], s2[200], sub[200];
    char c1[200], c2[200];
    char r1[200], r2[200];
    char a1[200], a2[200];

    int i;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    printf("Enter substring to find: ");
    fgets(sub, sizeof(sub), stdin);

    /* Remove newline added by fgets */
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
    }

    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
    }

    for (i = 0; sub[i] != '\0'; i++) {
        if (sub[i] == '\n') {
            sub[i] = '\0';
            break;
        }
    }

    printf("\n--- WITHOUT POINTER ARITHMETIC ---\n");

    printf("Length: %d\n", length1(s1));

    copy1(c1, s1);
    printf("Copied string: %s\n", c1);

    copy1(a1, s1);
    concat1(a1, s2);
    printf("Concatenated string: %s\n", a1);

    printf("Comparison result: %d\n", compare1(s1, s2));

    copy1(r1, s1);
    reverse1(r1);
    printf("Reversed string: %s\n", r1);

    if (palindrome1(s1))
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    printf("Substring index: %d\n", substring1(s1, sub));


    printf("\n--- WITH POINTERS ---\n");

    printf("Length: %d\n", length2(s1));

    copy2(c2, s1);
    printf("Copied string: %s\n", c2);

    copy2(a2, s1);
    concat2(a2, s2);
    printf("Concatenated string: %s\n", a2);

    printf("Comparison result: %d\n", compare2(s1, s2));

    copy2(r2, s1);
    reverse2(r2);
    printf("Reversed string: %s\n", r2);

    if (palindrome2(s1))
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    printf("Substring index: %d\n", substring2(s1, sub));

    return 0;
}
