std::vector<int> vec = {1, 2, 3, 4, 5};
int* ptr = &vec[0];
ptr[5] = 6; // This will cause undefined behavior