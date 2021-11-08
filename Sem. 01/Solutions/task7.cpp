int main(){
    
    int x; cin >> x;
    int left;
    if (x >= 100) {
        cout <<x / 100<<" ";
        left = x % 100;
    }
    else {
        left = x;
    }
    if (left >= 50) {
        cout << left / 50<<" ";
        left = left % 50;
    }
    if (left >= 20) {
        cout <<left / 20 << " ";
        left = left % 20;
    }
    if (left >= 10) {
        cout << left/10<<" ";
        left %= 10;
    }
    if (left >= 5) {
        cout << left / 5 << " ";
        left % 5;
    }
    if (left >= 2) {
        cout << left / 2 << " ";
        left % 2; 
    }
    if (left == 1) {
        cout << 1;
    }
    return 0;
}
