#include"../lib/Domain/Services/Icommunication.hpp"
class Lora : public Icommunication
{
public:
   // Lora(IFile *file ,const char *serverUrl) : fileHandler(file) , serverUrl(serverUrl) {}
    bool fetchData() override;
    bool senddata();


private:

};