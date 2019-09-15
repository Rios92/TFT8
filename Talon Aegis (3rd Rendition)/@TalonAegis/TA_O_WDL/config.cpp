// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_O_WDL_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_O_WDL"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_O_RIFLEMAN_WDL;
	class TA_O_WEAPOPMG_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMG_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPMOTAR_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMOTAR_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPAT_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPAT_WDL : TA_O_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
};
