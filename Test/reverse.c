void rev(char *s)
{
    if (*s == '\0')
        return;
    else
        rev(s + 1);

    // 'Hello\0' Hello

    printf("%s\n", s);
    printf("\n");
}