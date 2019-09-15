// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
    class TA_I_DES_support {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"TA_I_DES"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "WO1 Rios";
    };
};

class CfgVehicles {
	class TA_I_RIFLEMAN_DES;
	class TA_I_WEAPOPMG_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMG_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPMOTAR_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPMOTAR_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_I_WEAPOPAT_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
	class TA_I_ASSWEAPOPAT_DES : TA_I_RIFLEMAN_DES {vehicleClass = "MenSupport";};
};