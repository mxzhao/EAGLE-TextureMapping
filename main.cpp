#include "settings.h"
#include "Eagle_Utils.h"
#include "getalignresults.h"

int main()
{

    Settings settings = Settings();
    //settings.init_zhou_small();
    EAGLE::checkPath(settings.keyFramesPath);
    getAlignResults align(settings);
    return 0;
}
