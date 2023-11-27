void respond() {
    if (IsKeyDown(KEY_Q)) exit(0);
    if (IsKeyReleased(KEY_S) ) randomize_buffers();
    if (IsKeyReleased(KEY_F) ) load_filters(r_span,c_span);
    if (IsKeyReleased(KEY_P)) { power = 5*rnd();load_filters(r_span,c_span);}

    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_ZERO) ) {
        R = 20; //pix rows
        C = 40; //pix cols
        H = 50; //pix height
        W = 25; //pix width
        randomize_buffers();  
    };
        if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_NINE) ) {
        R = 100; //pix rows
        C = 200; //pix cols
        H = 10; //pix height
        W = 5; //pix width
        randomize_buffers();  
    };
    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_EIGHT) ) {
        R = 250; //pix rows
        C = 500; //pix cols
        H = 4; //pix height
        W = 2; //pix width
        randomize_buffers();  
    };
    
    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_ONE) ) {
        R = 50; //pix rows
        C = 50; //pix cols
        H = 20; //pix height
        W = 20; //pix width
        randomize_buffers();

        
    };
    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_ONE) ) {
        R = 50; //pix rows
        C = 50; //pix cols
        H = 20; //pix height
        W = 20; //pix width
        randomize_buffers();

        
    };

    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_TWO) ) {
        R = 100; //pix rows
        C = 100; //pix cols
        H = 10; //pix height
        W = 10; //pix width
        randomize_buffers();

        
    };
    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_THREE) ) {
        R = 200; //pix rows
        C = 200; //pix cols
        H = 5; //pix height
        W = 5; //pix width
        randomize_buffers();       
    };
    if (IsKeyDown(KEY_RIGHT_SHIFT) && IsKeyDown(KEY_FOUR) ) {      
        R = 500; //pix rows
        C = 500; //pix cols
        H = 2; //pix height
        W = 2; //pix width
        randomize_buffers();   

    }
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_TWO) ) num_filters = 2;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_THREE) ) num_filters = 3;

    if (IsKeyReleased(KEY_ONE)) f[0] = random_filter();
    if (IsKeyReleased(KEY_TWO)) f[1] = random_filter();
    if (IsKeyReleased(KEY_THREE)) f[2] = random_filter();
    if (IsKeyReleased(KEY_FOUR)) f[3] = random_filter();
    if (IsKeyReleased(KEY_FIVE)) f[4] = random_filter();
    if (IsKeyReleased(KEY_SIX)) f[5] = random_filter();
    if (IsKeyReleased(KEY_SEVEN)) f[6] = random_filter();
    if (IsKeyReleased(KEY_EIGHT)) f[7] = random_filter();
    if (IsKeyReleased(KEY_NINE)) f[8] = random_filter();
    if (IsKeyReleased(KEY_ZERO)) f[9] = random_filter();
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_ONE) ) num_filters = 1;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_TWO) ) num_filters = 2;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_THREE) ) num_filters = 3;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_FOUR) ) num_filters = 4;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_FIVE) ) num_filters = 5;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_SIX) ) num_filters = 6;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_SEVEN) ) num_filters = 7;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_EIGHT) ) num_filters = 8;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_NINE) ) num_filters = 9;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_ZERO) ) num_filters = 10;

}