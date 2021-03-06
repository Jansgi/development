
class CfgSoundShaders
{
	// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class fin_66KES88_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_close_1.wav",1 }
		};	
		
		volume = 1.5; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 90; // maximum range in meters where sound is played
		rangeCurve = CannonCloseShotCurve;
		
		 	
	};

	class fin_66KES88_midShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_mid_1.wav",1 }
		};
		volume = 2.5;
		range = 350;
		rangeCurve = CannonMidShotCurve;
	};
	class fin_66KES88_distShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_dist_1.wav",1 }
		};
		volume = 5.5;
		range = 3000;
		rangeCurve = CannonDistShotCurve;
	};
	class fin_66KES12_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_close_1.wav",1 }
		};
		volume = 1; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 90; // maximum range in meters where sound is played
		rangeCurve = CannonCloseShotCurve;
		
			
							// curve class name (CfgSoundCurves) or specific curve definition (array of points)
							// note that curve is stretched to region <0;range>
	};

	class fin_66KES12_midShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_mid_1.wav",1 }
		};
		volume = 3;
		range = 350;
		rangeCurve = CannonMidShotCurve;
	};
	class fin_66KES12_distShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_launchers\66kesXX\sound\kes_shot_dist_1.wav",1 }
		};
		volume = 5.5;
		range = 3000;
		rangeCurve = CannonDistShotCurve;
	};

	// Reflection Tails ---------------------------------------------------------------------------------------------------------------------------
	// N�it� ei taida olla erikseen tehty, siis: etsit��n kiva vanilla pyssy joka about yht� voimakas ja k�yttet��n sen ��ni�
	// Katso sounds_f config.cpp, siell� esim. autocannon 30mm yms. muuta geneerist� my�s
	// Limitation: s��stet��n prosessointitehoa, kun vain voimakkaimmat ��net soitetaan. Jos limitation = true (1), niin mukana t�ss� vertailussa (SoundShadersLimit = max soitettavat ��net). Esim. t�ss� sis�tilojen kaiku soi aina vaikkei olisi ��nekk�in, muut kaiut mukana vertailussa
	class Launcher_RPG32_tailInterior_SoundShader;
	class Launcher_RPG32_tailTrees_SoundShader;
	class Launcher_RPG32_tailForest_SoundShader;
	class Launcher_RPG32_tailMeadows_SoundShader;
	class Launcher_RPG32_tailHouses_SoundShader;
	class fin_66KES88_tailInterior_SoundShader : Launcher_RPG32_tailInterior_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior.wss", 1 } };
		//volume = interior;
		//range = 75;
		//limitation = 0; // this SoundShader will always be played if interior>0
	};
	class fin_66KES88_tailTrees_SoundShader : Launcher_RPG32_tailTrees_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees.wss", 1 } };
		//volume = (1 - interior / 1.4)*trees / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES88_tailForest_SoundShader : Launcher_RPG32_tailForest_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_Forest.wss", 1 } };
		//volume = (1 - interior / 1.4)*forest / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES88_tailMeadows_SoundShader : Launcher_RPG32_tailMeadows_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows.wss", 1 } };
		//volume = (1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3;
		//range = 1000;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES88_tailHouses_SoundShader : Launcher_RPG32_tailHouses_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses.wss", 1 } };
		//volume = (1 - interior / 1.4)*houses / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_66KES12_tailInterior_SoundShader : fin_66KES88_tailInterior_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior.wss", 1 } };
		//volume = interior;
		//range = 75;
		//limitation = 0; // this SoundShader will always be played if interior>0
	};
	class fin_66KES12_tailTrees_SoundShader : fin_66KES88_tailTrees_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees.wss", 1 } };
		//volume = (1 - interior / 1.4)*trees / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES12_tailForest_SoundShader : fin_66KES88_tailForest_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_Forest.wss", 1 } };
		//volume = (1 - interior / 1.4)*forest / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES12_tailMeadows_SoundShader : fin_66KES88_tailMeadows_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows.wss", 1 } };
		//volume = (1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3;
		//range = 1000;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
	class fin_66KES12_tailHouses_SoundShader : fin_66KES88_tailHouses_SoundShader
	{
		//samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses.wss", 1 } };
		//volume = (1 - interior / 1.4)*houses / 3;
		//range = 300;
		//limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};
};

class CfgSoundSets
{
	class fin_66KES88_Shot_SoundSet
	{
		// Ampuessa pelaajille soi n�itten ��ni shaderien yhteiskikkare, 
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"fin_66KES88_closeShot_SoundShader",
			"fin_66KES88_midShot_SoundShader",
			"fin_66KES88_distShot_SoundShader"
		};

		volumeFactor = 1.35; // volume multiplicator factor
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType = "WeaponHeavyShot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
		// spatial aina (ACEn syd�mentykytys -> false, me ei tehd� varmaan yht��n ei spatial ��nt�) edit: paitsi ehk� ajoneuvon sis�ll� ��net
		spatial = 1; // is sound considered as positional
		// nopeasti liikkuville asioille doppler = true, paitsi jos ��ni liian nopea (luoti, itse *viuuh* ��ness� on doppler mukana)
		doppler = 0; // doppler effect simulation
		// loop = false: "This is WIP, not sure how it works, will add information as soon as the feature becomes more prevalent." -Wiki
		loop = 0;
	};
	class fin_66KES12_Shot_SoundSet
	{
		// Ampuessa pelaajille soi n�itten ��ni shaderien yhteiskikkare, 
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"fin_66KES12_closeShot_SoundShader",
			"fin_66KES12_midShot_SoundShader",
			"fin_66KES12_distShot_SoundShader"
		};

		volumeFactor = 1.35; // volume multiplicator factor
		sound3DProcessingType = "WeaponHeavyShot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
																   // spatial aina (ACEn syd�mentykytys -> false, me ei tehd� varmaan yht��n ei spatial ��nt�) edit: paitsi ehk� ajoneuvon sis�ll� ��net
		spatial = 1; // is sound considered as positional
						// nopeasti liikkuville asioille doppler = true, paitsi jos ��ni liian nopea (luoti, itse *viuuh* ��ness� on doppler mukana)
		doppler = 0; // doppler effect simulation
						 // loop = false: "This is WIP, not sure how it works, will add information as soon as the feature becomes more prevalent." -Wiki
		loop = 0;
	};
	
	class fin_66KES88_Tail_SoundSet
	{
		soundShaders[] =
		{
			"fin_66KES88_tailInterior_SoundShader",
			"fin_66KES88_tailTrees_SoundShader",
			"fin_66KES88_tailForest_SoundShader",
			"fin_66KES88_tailMeadows_SoundShader",
			"fin_66KES88_tailHouses_SoundShader"
		};

		soundShadersLimit = 6;		// Kuinka monta ��nt� tarvitaan maksimissa kuulumaan? (sis�tila-, mets�-, yms. kaiut samaan aikaan)
									// engine will play only soundShadersLimit number of SoundShaders with highest volume value (including calculation of rangeCurve) from the group of SoundShaders which has limitation parameter set to true plus all the others

		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizerMin = 0.01; // parameters for randomization of frequency to avoid flanging effect when the same sounds are playing in high rate
									   // Ylempi varmistaa, ett� kaksi samaa ��nt� (2 laukausta) erotettavissa (eri taajuus == eri ��ni)
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponHeavyShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class fin_66KES12_Tail_SoundSet
	{
		soundShaders[] =
		{
			"fin_66KES12_tailInterior_SoundShader",
			"fin_66KES12_tailTrees_SoundShader",
			"fin_66KES12_tailForest_SoundShader",
			"fin_66KES12_tailMeadows_SoundShader",
			"fin_66KES12_tailHouses_SoundShader"
		};
		soundShadersLimit = 6;
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizerMin = 0.01;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponHeavyShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};