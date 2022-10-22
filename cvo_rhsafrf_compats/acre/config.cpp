#include "\z\cvo_rhsafrf_compats\acre\macros.hpp"

#if ACRE_LOADED
class CfgPatches {
	class CVO_RHSAFRF_Compats_ACRE {
		addonRootClass = "CVO_RHSAFRF_Compats";

		requiredAddons[] = {
			"rhs_c_a2port_armor",
			"acre_sys_rack",
			"acre_sys_intercom"
		};
		requiredVersion = 2.02;

		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	#include "vehicles\rhs_btr60.hpp"
};
#endif
