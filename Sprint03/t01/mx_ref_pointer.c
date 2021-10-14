void mx_ref_pointer(int i, int ******ptr);

void mx_ref_pointer(int i, int ******ptr) {
    int *ptrOne;
    int **ptrTwo;
    int ***ptrTree;
    int ****ptrFour;
    int *****ptrFive;
    ptrOne = &i;
    ptrTwo = &ptrOne;
    ptrTree = &ptrTwo;
    ptrFour = &ptrTree;
    ptrFive = &ptrFour;
    ptr = &ptrFive;
}
