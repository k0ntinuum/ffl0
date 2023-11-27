void cls() {
    printf( "\x1b[2J");
}

void set_rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}