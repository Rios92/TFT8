// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_I_WNT_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_I_WNT"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_I_RIFLEMAN_WNT;
	class TA_I_WEAPOPMG_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMG_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPMOTAR_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMOTAR_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPAT_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPAT_WNT : TA_I_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
};