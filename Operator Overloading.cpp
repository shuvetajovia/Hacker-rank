
class Matrix {
public:
    vector<vector<int>> a;

    Matrix() {}

    Matrix operator+(const Matrix& other) {
        Matrix result;
        for (size_t i = 0; i < a.size(); ++i) {
            vector<int> row;
            for (size_t j = 0; j < a[i].size(); ++j) {
                row.push_back(a[i][j] + other.a[i][j]);
            }
            result.a.push_back(row);
        }
        return result;
    }
};

