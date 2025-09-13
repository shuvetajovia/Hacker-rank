
ostream& operator<<(ostream& os, const Person& p) {
    return os << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
}
