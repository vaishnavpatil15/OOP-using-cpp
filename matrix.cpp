#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    
    Matrix() : rows(0), cols(0) {}

    Matrix(int rows, int cols) : rows(rows), cols(cols), data(std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0))) {}

    
    friend std::istream& operator>>(std::istream& in, Matrix& matrix) {
        for (auto& row : matrix.data) {
            for (auto& element : row) {
                in >> element;
            }
        }
        return in;
    }

    
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
        for (const auto& row : matrix.data) {
            for (const auto& element : row) {
                out << element << " ";
            }
            out << std::endl;
        }
        return out;
    }

    
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions don't match for addition.");
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

   
    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions don't match for subtraction.");
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix dimensions don't match for multiplication.");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix A(2, 3);
    Matrix B(3, 2);

    std::cout << "Enter elements of matrix A (2x3):" << std::endl;
    std::cin >> A;

    std::cout << "Enter elements of matrix B (3x2):" << std::endl;
    std::cin >> B;

    try {
        Matrix C = A * B;
        std::cout << "Result of multiplication (A * B):" << std::endl;
        std::cout << C;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}