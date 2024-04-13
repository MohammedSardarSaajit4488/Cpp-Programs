
int* createArray(int size) {
    int* arr = new int[size];
    return arr;
}

int main() {
    int* ptr = createArray(5);
    delete[] ptr;
	ptr = nullptr; 

    std::cout << ptr[0] << std::endl;

    return 0;
}
