#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>
class PhoneBook {

    public:

        PhoneBook();
        
        void AddContact();
        void SearchContact();

    private:

        Contact contact[8];
        int contactCount;
        int contactIndex;
        int maxContact;

};


#endif
