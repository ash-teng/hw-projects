int main() {
    FILE* fp = fopen("data.txt", "w");
    fputs("Good morning!", fp);
    fputsc('\n', fp);
    fclose(fp);
    return EXIT_SUCCESS;
}
