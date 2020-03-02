class CfgPatches
{
    class 501ccHelmets
    {
        name = "501st Carnivore Company Aux - Helmets";
        author = "gunman435";

        requiredVersion = 0.1;
        requiredAddons[] = {};

        units[]={};
        weapons[]={};
    };
};

class CfgWeapons
{
    class itemCore;
    class HeadgearItem;

    class 501CC_infantry_helmet_jlts_recruit: itemCore
	{
		scope=2;
		author="gunman435 & RD501";
		weaponPoolAvailable=1;
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0;
		displayName="[501st CC] INF HELM Base";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\jlts\inf\recruit_helmet.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Helmets\_materials\clone_helmet_p2.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			material=-1;
			explosionShielding=2.2;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.60000002;
				};
			};
		};
	};

	class 501CC_arc_helmet_joe: 501CC_infantry_helmet_jlts_recruit
    {
        scope=2;
		author="gunman435 & RD501";
		displayName="[501st CC] ARC HELM ('Joe')";
		hiddenSelectionsTextures[]=
		{
			"\501ccHelmets\data\arc_helmet_joe.paa"
		};
    };

    class 501CC_arc_helmet_polar: 501CC_infantry_helmet_jlts_recruit
    {
        scope=2;
		author="gunman435 & RD501";
		displayName="[501st CC] ARC HELM ('Polar')";
		hiddenSelectionsTextures[]=
		{
			"\501ccHelmets\data\arc_helmet_polar.paa"
		};
    };

	class 501CC_inf_helmet_carver: 501CC_infantry_helmet_jlts_recruit
	{
		scope=2;
		author="gunman435 & RD501";
		displayName="[501st CC] INF HELM ('Carver')";
		hiddenSelectionsTextures[]=
		{
			"\501ccHelmets\data\inf_helmet_carver.paa"
		};
	};

	class 501CC_inf_helmet_gunman: 501CC_infantry_helmet_jlts_recruit
	{
		scope=2;
		author="gunman435 & RD501";
		displayName="[501st CC] INF HELM ('Gunman')";
		hiddenSelectionsTextures[]=
		{
			"\501ccHelmets\data\inf_helmet_gunman.paa"
		};
	};
};

class cfgMods
{
    author = "[TW] gunman435";
};