int sum(int n) {
    int i;
    int s = 0;
#pragma omp parallel for
    for (i = 0; i < n; ++i) {
#pragma omp atomic
        s += i;
    }
    return s;
}

int main() {
    int s = sum(100);
    return 0;
}
