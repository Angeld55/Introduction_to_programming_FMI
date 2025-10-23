#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int fst = 0, snd = 0;

    fst = n % 10;
    n = n / 10;

    snd = n % 10;
    n = n / 10;

    snd = n % 10;
    n = n / 10;

    fst = n % 10;
    n = n / 10;

    // reverse fst and snd
    int fstReversed = fst % 10;
    fstReversed = fstReversed * 10;
    fst = fst / 10;
    fstReversed = fst % 10;

    int sndReversed = snd % 10;
    sndReversed = sndReversed * 10;
    snd = snd / 10;
    sndReversed = snd % 10;

    if (fstReversed == sndReversed) {
        cout << fstReversed << " = " << sndReversed;
    } else if (fstReversed < sndReversed) {
        cout << fstReversed << " < " << sndReversed;
    } else {
        cout << fstReversed << " > " << sndReversed;
    }
}