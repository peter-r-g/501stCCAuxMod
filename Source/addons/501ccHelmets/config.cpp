class CfgPatches
{
    class 501ccAux
    {
        name = "501st Carnivore Company Helmets";
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
		displayName="[501st] INF HELM 01 (Base)";
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

    class 501CC_arc_helmet_polar: 501CC_infantry_helmet_jlts_recruit
    {
        scope=2;
		displayName="[501st] ARC HELM ('Polar')";
		hiddenSelectionsTextures[]=
		{
			"\501ccHelmets\data\arc_helmet_polar.paa"
		};
    };
};
class cfgMods
{
    author = "gunman435";
};