class CfgPatches
{
    class 501ccWeapons
    {
        name = "501st Carnivore Company Aux - Weapons";
        author = "gunman435";

        requiredVersion = 0.1;
        requiredAddons[] = {};

        units[]={};
        weapons[]={};
    };
};

class CfgMagazines
{
    class SWOP_DC15ABlasterRifle_Mag;

    class 501CC_DC15a_Low_x60_mag: SWOP_DC15ABlasterRifle_Mag
	{
        author="gunman435 & RD501";
        scope=2;
        model="\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture="\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName="60Rnd DC-15A Low Energy Rounds";
		ammo="RD501_dc15a_low_ammo";
        tracersEvery=1;
		count=60;
		descriptionShort="60Rnd DC15A Low Energy";
		mass=30;
        initSpeed=1200;
	};
	class 501CC_DC15a_Med_x30_mag: SWOP_DC15ABlasterRifle_Mag
	{
		author="gunman435 & RD501";
		scope=2;
		model="\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture="\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName="30Rnd DC-15A Mid Energy Rounds";
		ammo="RD501_dc15a_med_ammo";
		tracersEvery=1;
		count=30;
		descriptionShort="30Rnd DC15A Mid Energy";
		mass=30;
		initSpeed=1200;
	};
	class 501CC_DC15a_High_x15_mag: SWOP_DC15ABlasterRifle_Mag
	{
        author="gunman435 & RD501";
        scope=2;
        model="\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture="\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName="15Rnd DC-15A High Energy Rounds";
		ammo="RD501_dc15a_high_ammo";
        tracersEvery=1;
		count=15;
		descriptionShort="15Rnd DC15A High Energy Rounds";
		mass=30;
		initSpeed=1200;
	};
};

class cfgMods
{
    author = "[TW] gunman435";
};