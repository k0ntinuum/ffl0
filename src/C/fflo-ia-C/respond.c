bool respond() {
    int c = getch();
    switch (c) {
        case 'q': return true;
        case 's': randomize_buffers();break;
        case 'f': load_filters();break;
        case 'p': power = 5*rnd();load_filters();break;
        case 'x': randomize_buffers();load_filters();break;
        case '1': f[0] = random_filter();break;
        case '2': f[1] = random_filter();break;
        case '3': f[2] = random_filter();break;
        case '4': f[3] = random_filter();break;
        case '5': f[4] = random_filter();break;
        case '6': f[5] = random_filter();break;
        case '7': f[6] = random_filter();break;
        case '8': f[7] = random_filter();break;
        case '9': f[8] = random_filter();break;
        case '0': f[9] = random_filter();break;
    }
    return false;
 }

