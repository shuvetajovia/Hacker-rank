
class BadLengthException : public exception {
private:
    int length;
    string message;

public:
    // Constructor to initialize the length and message
    BadLengthException(int n) : length(n), message(to_string(n)) {}

    // Overriding the what() function to return the length as a C-string
    const char* what() const noexcept override {
        return message.c_str();
    }
};
