#ifndef ContactNode_h
#define ContactNode_h

#include <string>
using namespace std;

class ContactNode {
public:
    ContactNode(string name, string phone);
    void InsertAfter(ContactNode* nodeLoc);
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext();
    void PrintContactNode();
    
private:
    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr;
};

#endif /* ContactNode_h */
