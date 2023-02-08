#include <iostream>

int main() {

    // Image
    constexpr int height = 300;
    constexpr int width = 600;
    constexpr int shine = 255;

    // Render
    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for(int i = 0; i<height; i++) {
        for(int j = 0; j<width; j++) {
            double r = static_cast<double>(i) / (height - 1);
            double g = static_cast<double>(j) / (width - 1);
            double b = 0.25;

            int ir = static_cast<int>(shine * r);
            int ig = static_cast<int>(shine * g);
            int ib = static_cast<int>(shine * b);

            std::cout << ir << ' ' << ig << ' ' << ib << "\n";
        }
    }

    return 0;
}