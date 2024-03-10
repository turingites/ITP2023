int printArray(int array1[], int size1, int index) {
    if(index == size1 - 1) {
        return array1[index];
    } else {
        return printArray(array1, size1, index + 1);
    }
}
