

char getch() {
    char c = '\0';
    if (read(STDIN_FILENO, &c, 1) == -1 ) exit(1);
    return c;
}
void stop_raw_mode() {
  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1) exit(1);
}

void start_raw_mode() {
  if (tcgetattr(STDIN_FILENO, &orig_termios) == -1) exit(1);
  atexit(stop_raw_mode);
  struct termios raw = orig_termios;
  raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
  raw.c_oflag &= ~(OPOST);
  raw.c_cflag |= (CS8);
  //raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
  raw.c_lflag &= ~(ECHO | ICANON | IEXTEN );
  raw.c_cc[VMIN] = 0;
  raw.c_cc[VTIME] = 0;
  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) exit(1);
}