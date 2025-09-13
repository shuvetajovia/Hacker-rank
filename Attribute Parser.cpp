#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>  // Include string for string handling
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> attributeMap;
    vector<string> tagStack;
    string line;

    // Reading the HRML lines
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        line = line.substr(1, line.length() - 2);  // Removing '<' and '>'
        
        if (line[0] == '/') {
            // Closing tag: pop from the stack
            tagStack.pop_back();
        } else {
            // Extracting tag name
            stringstream ss(line);  // Fixed: Added stringstream to properly parse the line
            string tagName;
            ss >> tagName;

            // Building the current path for the tag
            string currentPath = "";
            if (!tagStack.empty()) {
                currentPath = tagStack.back() + ".";
            }
            currentPath += tagName;
            tagStack.push_back(currentPath);

            // Parsing attributes
            string attrName, equalSign, attrValue;
            while (ss >> attrName >> equalSign >> attrValue) {
                // Removing quotes from attribute value
                attrValue = attrValue.substr(1, attrValue.length() - 2);
                attributeMap[currentPath + "~" + attrName] = attrValue;
            }
        }
    }

    // Processing queries
    for (int i = 0; i < q; i++) {
        getline(cin, line);
        if (attributeMap.find(line) != attributeMap.end()) {
            cout << attributeMap[line] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}

