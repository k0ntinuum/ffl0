int main() {
    cls();
    hide_cursor();
    start_raw_mode();
    bool quit = false;
    randomize_buffers();
    load_filters();
    while(!quit) {
        //plot_reading_buffer();
        random_plot_buffer(10000);
        quit = respond();
        for (int i = 0 ; i < num_filters ; i++) {
            apply_filter(i);
            reading = !reading;   
        }
    }
    cls();
    stop_raw_mode();
}