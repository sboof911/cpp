#ifndef _Contact
#define _Contact

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
    
    public:

        Contact();
        ~Contact( void);
        
        void    SEARCH_contact( void );
        void    search_index(int index);
        void    ADD_contact( int i );

    private:
        int     	_index;
        std::string _NickName;
        std::string _Last_name;
        std::string _Fisrt_name;
        std::string _Phone_Number;
        std::string _Darkest_secret;
};

#endif