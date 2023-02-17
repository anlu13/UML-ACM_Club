#include <iostream>

void draw_heart_top(int triangle_height);
void draw_heart_bottom(int triangle_height);

void draw_letter_M(int M_height);
void draw_letter_L(int L_height);

int main() {
    int triangle_height = 3, M_height = 6, L_height = 6;

    // draw the top of the heart
    draw_heart_top(triangle_height);

        // draw the bottom of the heart
    draw_heart_bottom(triangle_height);

    // separating space
    std::cout << std::endl;

    draw_letter_M(M_height);

    // separating space
    std::cout << std::endl;

    draw_letter_L(L_height);

    return 0;
}

void draw_heart_top(int triangle_height) {
    for (int i = 1; i <= triangle_height; i++) {
        for (int j = 1; j <= triangle_height - i; j++) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "* ";
        }
        for (int l = 1; l <= 2 * (triangle_height - i); l++) {
            std::cout << "  ";
        }
        for (int m = 1; m <= 2 * i - 1; m++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void draw_heart_bottom(int triangle_height) {
    for (int i = 2 * triangle_height - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * triangle_height - 1 - i; j++) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i; k++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void draw_letter_M(int M_height) {
    for (int i = 1; i <= M_height; i++) {
        for (int j = 1; j <= M_height; j++) {
            // top row
            if ((j == 2 || j == 3 || j == 4 || j == 6) && (i == 1)) {
                std::cout << "  ";
                std::cout << "  ";
            } else if ((j == 3 || j == 6) && (i == 2)) {
                // 2nd row
                std::cout << "  ";
                std::cout << "  ";
            } else if ((j == 2 || j == 4 || j == 6) && (i == 3)) {
                // 3rd row
                std::cout << "  ";
                std::cout << "  ";
            } else if ((j == 2 || j == 3 || j == 4 || j == 6) &&
                       (i == 4 || i == 5 || i == 6)) {
                std::cout << "  ";
                std::cout << "  ";
            } else {
                std::cout << "* ";
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}

void draw_letter_L(int L_height) {
    for (int i = 0; i < L_height; i++) {
        for (int j = 1; j < L_height / 2; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < L_height / 3; i++) {
        for (int k = 1; k < L_height; k++) {
            std::cout << "* * ";
        }
                std::cout << std::endl;
    }
}
