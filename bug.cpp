int main() { int a = 10; int *ptr = &a; *ptr = 20; delete ptr; return 0; }