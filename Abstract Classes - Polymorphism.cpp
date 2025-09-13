
class LRUCache : public Cache {
public:
    LRUCache(int capacity) : Cache() {
        cp = capacity;
        head = new Node(0, 0); // Dummy head node
        tail = new Node(0, 0); // Dummy tail node
        head->next = tail;
        tail->prev = head;
    }

    void set(int key, int value) override {
        if (mp.find(key) != mp.end()) {
            Node* existing = mp[key];
            existing->value = value;
            remove(existing);
            insertAtHead(existing);
        } else {
            Node* newNode = new Node(key, value);
            if (mp.size() == cp) {
                mp.erase(tail->prev->key);
                remove(tail->prev);
            }
            insertAtHead(newNode);
            mp[key] = newNode;
        }
    }

    int get(int key) override {
        if (mp.find(key) == mp.end()) {
            return -1;
        } else {
            Node* node = mp[key];
            remove(node);
            insertAtHead(node);
            return node->value;
        }
    }

private:
    void remove(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insertAtHead(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }
};

