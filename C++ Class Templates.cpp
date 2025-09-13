


template <class T>
class AddElements {
    T element;
public:
    AddElements(T arg) { element = arg; }
    T add(T other) { return element + other; }
};

template <>
class AddElements<string> {
    string element;
public:
    AddElements(string arg) { element = arg; }
    string concatenate(string other) { return element + other; }
};

/*Write the class AddElements here*/

