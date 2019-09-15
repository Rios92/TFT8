// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_O_WNT_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_O_WNT"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_O_RIFLEMAN_WNT;
	class TA_O_WEAPOPMG_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMG_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPMOTAR_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMOTAR_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPAT_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPAT_WNT : TA_O_RIFLEMAN_WNT {vehicleClass = "MenSupport";};
};