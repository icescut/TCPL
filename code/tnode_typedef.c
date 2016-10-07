/**
 * 统计输入中所有单词出现的次数
 * gcc -o exe\tnode_typedef.exe tnode_typedef.c getch.c
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXWORD 100

typedef struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
} Treenode;

typedef struct tnode *Treeptr;

int getch(void);
void ungetch(int c);
Treeptr talloc(void);
//char *strdup(char *);
Treeptr addtree(Treeptr, char *);
void treeprint(Treeptr);
int getword(char *, int);

int main(int argc, char const *argv[]) {
    Treeptr root;
    char word[MAXWORD];

    root = NULL;
    while (getword(word, MAXWORD) != EOF) {
        if(isalpha(word[0]))
            root = addtree(root, word);
    }
    treeprint(root);
    return 0;
}

/**
 * 创建一个tnode
 */
Treeptr talloc(void) {
    return (Treeptr) malloc(sizeof(Treenode));
}

/**
 * 复制s到某个位置
 */
/*
char *strdup(char *s) {
    char *p;

    p = (char *)malloc(strlen(s) + 1);
    if(p != NULL)
        strcpy(p, s);
    return p;
}
*/

/**
 * 在p的位置或p的下方增加一个w节点
 */
Treeptr addtree(Treeptr p, char *w) {
    int cond;

    if(p == NULL) { //新单词
        p = talloc();
        p->word = strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    } else if((cond = strcmp(w, p->word)) == 0)
        p->count++;
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);
    return p;
}

/**
 * 按序打印树p
 */
void treeprint(Treeptr p) {
    if(p != NULL) {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

/**
 * 从输入中读取下一个单词或字符
 */
int getword(char * word, int lim) {
    int c;
    char *w = word;

    //跳过空白
    while (isspace(c = getch()))
        ;

    if(c != EOF)
        *w++ = c;
    //只能以字符开头
    if(!isalpha(c)) {
        *w = '\0';
        //能够返回EOF
        return c;
    }

    for (; --lim > 0; w++) {
        if(!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}
