void tg_main() {
    start_raw_mode();
    bool quit = false;
    randomize_buffers();
    load_filters(7,7);
    while(!quit) {
        plot_reading_buffer();
        //random_plot_buffer(R*C);
        quit = respond();
        for (int i = 0 ; i < num_filters ; i++) {
            apply_filter(i);
            reading = !reading;   
        }
    }
    cls();
    stop_raw_mode();
}