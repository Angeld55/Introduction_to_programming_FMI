#include <iostream>

using namespace std;

const unsigned MIN_LEN = 2;
const unsigned MAX_LEN = 1024;
const int LENGTHS_INIT_VALUE = 1;
const int INDEXES_INIT_VALUE = -1;

bool isValidInput(int n) {
    return n >= MIN_LEN && n <= MAX_LEN;
}

void updateLengthsAndIndexes(int idx, const int numbers[], int lengths[], int indexes[]) {
    for (int j = 0; j < idx; ++j) {
        if (numbers[idx] > numbers[j] && lengths[idx] <= lengths[j]) {
            lengths[idx] = lengths[j] + 1;
            indexes[idx] = j;
        }
    }
}

void longestIncreasingSubsequence(const int numbers[], int n, int result[], int& resultLength) {
    int lengths[MAX_LEN];           // Lengths of sequences
    int indexes[MAX_LEN];       // Indexes of previous element
    int maxLength = 1;
    int endIndex = 0;

    //Set initial values to lengths and indexes arrays
    for (int i = 0; i < n; ++i) {
        lengths[i] = LENGTHS_INIT_VALUE; //each element is a sequence with length 1
        indexes[i] = INDEXES_INIT_VALUE; //in the start there are no previuos elements
    }

    //find the longest sequence
    for (int i = 1; i < n; ++i) {

        updateLengthsAndIndexes(i, numbers, lengths, indexes);

        //reset maxLength if needed after filling lengths array
        if (lengths[i] > maxLength) {
            maxLength = lengths[i];
            endIndex = i;
        }
    }

    resultLength = maxLength;
    int resultIndex = maxLength - 1;

    //fill result array
    for (int i = endIndex; i >= 0; i = indexes[i]) {
        result[resultIndex--] = numbers[i];
    }

}

int main() {
    int n;
    std::cin >> n;

    //validation
    if (!isValidInput(n)) {
        std::cout << "Incorrect data" << std::endl;
        return 0;
    }

    //input
    int numbers[MAX_LEN];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    //find longest sebsequence
    int result[MAX_LEN];
    int resultLength = 0;
    longestIncreasingSubsequence(numbers, n, result, resultLength);

    //print result
    for (int i = 0; i < resultLength; ++i) {
        cout << result[i] << " ";
    }
    cout << std::endl;

    return 0;
}
