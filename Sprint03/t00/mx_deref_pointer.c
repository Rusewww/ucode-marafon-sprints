void mx_deref_pointer(char ******str);

void mx_deref_pointer(char ******str) {
    char *strOne;
    char **strTwo;
    char ***strTree;
    char ****strFour;
    char *****strFive;
    strOne = "Follow the white rabbit!";
    strTwo = &strOne;
    strTree = &strTwo;
    strFour = &strTree;
    strFive = &strFour;
    str = &strFive;
}
