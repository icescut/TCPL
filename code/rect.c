/**
 * 矩形操作
 */
#define min(a,b) ((a) < (b)) ? (a) : (b)
#define max(a,b) ((a) > (b)) ? (a) : (b)

struct Point {
    double x;
    double y;
};

struct Rect{
    struct Point pt1;
    struct Point pt2;
};

struct makepoint(int x, int y);
struct Point addpoint(struct Point p1, struct Point p2);
int ptinrect(struct Point p, struct Rect r);
struct Rect canonrect(struct Rect r);

int main(){
    return 0;
}

struct makepoint(int x, int y){
    struct Point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

struct Point addpoint(struct Point p1, struct Point p2){
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

int ptinrect(struct Point p, struct Rect r){
    return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

struct Rect canonrect(struct Rect r){
    struct Rect temp;
    temp.pt1.x = min(r.pt1.x, r.pt2.x);
    temp.pt1.y = min(r.pt1.y, r.pt2.y);
    temp.pt2.x = max(r.pt1.x, r.pt2.x);
    temp.pt2.y = max(r.pt1.y, r.pt2.y);
    return temp;
}
