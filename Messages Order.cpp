
class Message {
public:
    Message() {}
    Message(const string& text, int id) : text_(text), id_(id) {}

    const string& get_text() const {
        return text_;
    }

    bool operator<(const Message& other) const {
        return id_ < other.id_;
    }

private:
    string text_;
    int id_;
};

class MessageFactory {
public:
    MessageFactory() : current_id(0) {}

    Message create_message(const string& text) {
        return Message(text, current_id++);
    }

private:
    int current_id;
};

