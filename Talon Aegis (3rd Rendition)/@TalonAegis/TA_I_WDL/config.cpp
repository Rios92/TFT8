// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_I_WDL_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_I_WDL"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_I_RIFLEMAN_WDL;
	class TA_I_WEAPOPMG_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMG_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPMOTAR_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMOTAR_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPAT_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPAT_WDL : TA_I_RIFLEMAN_WDL {vehicleClass = "MenSupport";};
};