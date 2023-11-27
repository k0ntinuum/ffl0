

void hide_cursor() {
    printf("\x1b[?25l");
}

int hue_from(real x) { 
    return (int)trunc( (128.0 *(x + 1.0)) ); 
}

real rnd() {
    return 1.0 - 2*(rand()/((real)RAND_MAX));
}

void randomize_buffers() { 
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) {
        B[reading][r][c] = rnd();
        B[!reading][r][c] = rnd();
    }      
}


void plot_pixel(int r, int c, int h) {
    cursor_to(r,c);
    set_rgb(h,h,h);
    printf("\u2588");
}

void plot_reading_buffer() {
    int h = 0;
    int r_adj = 2;
    int c_adj = 2;
    cursor_to(0,c_adj);
    set_rgb(255,255,255);
    printf("c0ntinuum");
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) 
        plot_pixel(r+r_adj,c+c_adj,hue_from(B[reading][r][c]));

}

void random_plot_buffer(int n) {
    int h = 0;int r = 0 ; int c = 0;
    for (int i = 0 ; i < n ; i++) {
        r = random_i64()%R;
        c = random_i64()%C;
        plot_pixel(r+2,c+2,hue_from(B[reading][r][c]));
    }

}