#ifndef _Contact
#define _Contact

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
    
    public:

        Contact();
        ~Contact( void);
        
        void    ADD_contact( int i );
        void    SEARCH_contact( void );

    private:
        int     	index;
        std::string NickName;
        std::string Last_name;
        std::string Fisrt_name;
        std::string _Phone_Number;
        std::string _Darkest_secret;
};

#endif