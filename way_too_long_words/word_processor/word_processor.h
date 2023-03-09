#include <string>
#include <sstream>

namespace prcs 
{    
    class Processor
    {
    private:
        static void AbbreviateWord( std::string& );
        static bool IsTooLong(const std::string& );
    public:
        static void ProcessWord( std::string& );
    };   
}