#include <iostream>

#define PROJECT_NAME "TrialMeson"

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        std::cout << argv[0] << "takes no arguments." << std::endl;
        return 1;
    }
    std::cout << "This is project " << PROJECT_NAME << "." << std::endl;
    return 0;
}
