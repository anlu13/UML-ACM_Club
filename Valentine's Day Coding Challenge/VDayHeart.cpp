#include <iostream>

// function draws the shape of the top half of the heart (ie the 2 round
// semi-circles)
void draw_heart_top(int triangle_height);
// function draws the shape of the  bottom half of the heart (ie the upside down
// triangle/V)
void draw_heart_bottom(int triangle_height);

// function draws the shape of the letter 'M'
void draw_letter_M(int M_height);
// function draws the shape of the letter 'L'
void draw_letter_L(int L_height);

// function draws the shape of the letter 'A'
void draw_letter_A(int A_height);
// function draws the shape of the letter 'C'
void draw_letter_C(int C_height);

int main() {
    // preset dimensions of each of the characters
    // specifically chosen for correct formatting and size in relation to one
    // another
    int triangle_height = 3, M_height = 6, L_height = 6, A_height = 9,
        C_height = 9;

    // draw the top of the heart
    draw_heart_top(triangle_height);

    // draw the bottom of the heart
    draw_heart_bottom(triangle_height);

    // separating line
    std::cout << std::endl;

    // draws the letter "M"
    draw_letter_M(M_height);

    // separating line
    std::cout << std::endl;

    // draws the letter "L"
    draw_letter_L(L_height);

    // separating space
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // separating line
    std::cout << std::endl;

    // draws the letter "A"
    draw_letter_A(A_height);

    // separating line
    std::cout << std::endl;

    // draws the letter "C"
    draw_letter_C(C_height);

    // separating line
    std::cout << std::endl;

    // draws the letter "M" again
    draw_letter_M(M_height);

    return 0;
}

void draw_heart_top(int triangle_height) {
    for (int i = 1; i <= triangle_height; i++) {
        for (int j = 1; j <= triangle_height - i; j++) {
            // spaces to the left
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            // left semi-circle
            std::cout << "* ";
        }
        for (int l = 1; l <= 2 * (triangle_height - i); l++) {
            // spaces in between
            std::cout << "  ";
        }
        for (int m = 1; m <= 2 * i - 1; m++) {
            // right semi-circle
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void draw_heart_bottom(int triangle_height) {
    for (int i = 2 * triangle_height - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * triangle_height - 1 - i; j++) {
            // spaces to the left
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i; k++) {
            // asterisks
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void draw_letter_M(int M_height) {
    for (int row = 1; row < M_height + 2; row++) {
        for (int col = 1; col < M_height; col++) {
            if ((col == 2 || col == 3 || col == 4 || col == 6) && (row == 1)) {
                // spaces inbetween for row 1
                std::cout << "  ";
                std::cout << "  ";
            } else if ((col == 3 || col == 6) && (row == 2)) {
                // spaces inbetween for row 1
                std::cout << "  ";
                std::cout << "  ";
            } else if ((col == 2 || col == 4 || col == 6) && (row == 3)) {
                // spaces inbetween for row 3
                std::cout << "  ";
                std::cout << "  ";
            } else if ((col == 2 || col == 3 || col == 4 || col == 6) &&
                       (row > 3)) {
                // spaces in between vertical ends after row 3
                std::cout << "  ";
                std::cout << "  ";
            } else {
                // asterisks
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
            // left vertical asterisks
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < L_height / 3; i++) {
        for (int k = 1; k < L_height; k++) {
            // bottom horizontal asterisks
            std::cout << "* * ";
        }
        std::cout << std::endl;
    }
}

void draw_letter_A(int A_height) {
    int A_width = 2 * A_height - 1;

    // n = counter for where to place the diagonal asterick in relation to the
    // previous above asterick, in order to maintain the straightness of a
    // diagonal line
    int n = A_width / 2;

    for (int i = 0; i < A_height; i++) {
        for (int j = 0; j <= A_width; j++) {
            if (i == (A_height / 2) && j > n && j < (A_width - n)) {
                // center horizontal asterisks
                // ISSUE: could not manage to figure out how to space out
                // astericks without impeding on right diagonal side asterisk
                std::cout << "*";
            } else if (j == n || j == (A_width - n)) {
                // diagonal side asterisks
                std::cout << "**";
            } else {
                // spaces in between sides
                std::cout << " ";
            }
        }
        std::cout << std::endl;
        n--;
    }
}

void draw_letter_C(int C_height) {
    for (int i = 0; i < C_height; i++) {
        // left vertical astericks
        std::cout << "* * ";
        for (int j = 0; j < (C_height - 1); j++) {
            if (i == 0 || i == 1 || i == C_height - 1 || i == C_height - 2) {
                // top & bottom horizontal astericks
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}