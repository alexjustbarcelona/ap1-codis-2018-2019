
/* Què escriu aquest programa? */


// pas de paràmetre per còpia (= pas per valor)
void (int i) {
    cout << i << endl;
    ++i;
    cout << i << endl;
}

int main() {
    int x = 3;
    cout << x << endl;
    inc(x);
    cout << x << endl;
}
