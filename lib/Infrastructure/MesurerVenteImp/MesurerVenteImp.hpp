#include "../lib/Domain/Services/ImesurerVente.hpp"
class MesurerVenteImp : public ImeasurerVente
{
public:
    void InitSensorVente() override;
    WindData measureWind() override;

private:
};