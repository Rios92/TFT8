// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_O_DES_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_O_DES"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_O_RIFLEMAN_DES;
	class TA_O_WEAPOPMG_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMG_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPMOTAR_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPMOTAR_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_O_WEAPOPAT_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_O_ASSWEAPOPAT_DES : TA_O_RIFLEMAN_DES {vehicleClass = "MenSupport";};
};