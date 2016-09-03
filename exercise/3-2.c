/**
 * 题目: 把不可见的字符转换为可见的转义字符
 */
void escape(char s[], char t[]){
    int i, j;
    for(i = j = 0; t[i] != '\0'; i++){
        switch(t[i]){
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        default:
            s[j++] = t[i];
            break;
        }
    }
    s[j] = '\0';
}

void unescape(char s[], char t[]){
    int i, j;
    for(i = j = 0; t[i] != '\0'; i++){
        if(t[i] == '\\'){
            switch(t[++i]){
            case 't':
                s[j++] = '\t';
                break;
            case 'n':
                s[j++] = '\n';
                break;
            default:
                s[j++] = t[i];
                break;
            }
        } else
            s[j++] = t[i];
    }
    s[j] = '\0';
}
