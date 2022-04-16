enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
