class Wheeled_APC_F;

class rhs_btr_base : Wheeled_APC_F {
	class AcreRacks {
		class Rack_1 {
			displayName = "STR_ACRE_sys_rack_dash";
			shortName = "STR_ACRE_sys_rack_dashShort";

			componentName = "ACRE_VRC64";
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
			defaultComponents[] = {};

			allowedPositions[] = {{"turret", [1]}};
			disablePositions[] = {};
			intercom[] = {"Intercom_1"};
		};
	};

	class AcreIntercoms {
		acre_hasInfantryPhone = 0;

		class Intercom_1 {
			displayName = "$STR_ACRE_sys_intercom_crewIntercom";
			shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

			allowedPositions[] = {"driver", "gunner", {"turret", [1]}};
			disablePositions[] = {};
			masterPositions[] = {{"turret", [1]}};

			limitedPositions[] = {};
			numLimitedPositions = 0;

			connectedByDefault = 1;
		};
	};
};