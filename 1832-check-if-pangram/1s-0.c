int checkIfPangram(char* sentence) {
    char *firstposition = sentence;
    int word = 'a';
    while(word <= 'z')
    {
        while(*sentence != '\0')
        {
            if (*sentence == word)
                break;
            else if (*++sentence == '\0')
                return (0);
        }
        sentence = firstposition;
        word++;
    }
    return (1);
}
