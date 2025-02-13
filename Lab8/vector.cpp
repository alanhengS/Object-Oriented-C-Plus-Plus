#include <iostream>
#include <vector>
using namespace std;

/**
 * 
 */

void printMemVec(vector<int> vec){
    printf("Array - Each int is worth %lu bytes\n", sizeof(vec.at(0)));
    for (int i = 0; i < vec.size(); i++){
        printf("Value: %i at Memory Location: %p\n", vec.at(i), &vec + i);
    }
}

void incVecBy10(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        vec.at(i) += 10;
    }
}

int main(){
    const int SIZE = 5;
    vector<int> vec(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        vec.at(i) += 100 + i;
    }
    printf("Before Increment-------\n");
    printMemVec(vec);
    incVecBy10(vec);
    printf("After Increment--------\n");
    printMemVec(vec);
    vec.pop_back();
    printf("After Pop--------\n");
    printMemVec(vec);
    vec.push_back(101);
    vec.push_back(102);
    printf("After Push--------\n");
    printMemVec(vec);
    return 0;

}