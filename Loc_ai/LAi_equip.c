

//Экипировать NPC оружием и перками
void LAi_NPC_Equip(ref chr, int rank, bool isWeapons, bool isGun)
{
	int r = rank;
	//if(r < 1) r = 1;
	//chr.rank = r;
	r = rank + rand(5) - 2;
    if(r < 1) r = 1;
	if(r <= 0) return;
	if(r > 15) r = 15;

	// rank is based on random
    chr.rank = r;
	//Подберём саблю
	if(isWeapons)
	{
		string blade = LAi_NPC_EquipBladeSelection(r);
		GiveItem2Character(chr, blade);
		EquipCharacterByItem(chr, blade);
	}else{
		isGun = false;
	}
	//Назначаем всё
	switch(r)
	{
	case 1:
	    //KE: level 1:
	    // No skills or guns

		//-------------------------------------
//		if(rand(100) < 10)
//		{
//			chr.perks.list.BasicDefense = "1";
//		}
		break;
	case 2:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 20)
			{
				GiveItem2Character(chr, "pistol1");
				EquipCharacterByItem(chr, "pistol1");
			}
		}

		//KE: level 2:
		// basic defence only
		chr.perks.list.BasicDefense = "1";

		//-------------------------------------
//		if(rand(100) < 30)
//		{
//			chr.perks.list.BasicDefense = "1";
//		}
//		if(rand(100) < 10)
//		{
//			chr.perks.list.CriticalHit = "1";
//		}
		break;
	case 3:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 30)
			{
				GiveItem2Character(chr, "pistol1");
				EquipCharacterByItem(chr, "pistol1");
			}
		}

		//KE: level 3:
		// basic defence + critical hit
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";

		//-------------------------------------
//		if(rand(100) < 60)
//		{
//			chr.perks.list.BasicDefense = "1";
//		}
//		if(rand(100) < 10)
//		{
//			chr.perks.list.BasicDefense = "1";
//			chr.perks.list.AdvancedDefense = "1";
//		}
//		if(rand(100) < 10)
//		{
//			chr.perks.list.CriticalHit = "1";
//		}
		break;
	case 4:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 40)
			{
				GiveItem2Character(chr, "pistol1");
				EquipCharacterByItem(chr, "pistol1");
			}
		}
		//KE: level 4:
		// basic defence + critical hit + advanced defence
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";

		//-------------------------------------
//		if(rand(100) < 30)
//		{
//			chr.perks.list.CriticalHit = "1";
//		}
//		if(rand(100) < 80)
//		{
//			chr.perks.list.BasicDefense = "1";
//		}
//		if(rand(100) < 30)
//		{
//			chr.perks.list.BasicDefense = "1";
//			chr.perks.list.AdvancedDefense = "1";
//		}
//		if(rand(100) < 3)
//		{
//			chr.perks.list.BasicDefense = "1";
//			chr.perks.list.AdvancedDefense = "1";
//			chr.perks.list.SwordplayProfessional = "1";
//		}
//		if(rand(100) < 20)
//		{
//			chr.perks.list.Gunman = "1";
//		}
//		if(rand(100) < 10)
//		{
//			chr.perks.list.GunProfessional = "1";
//		}
		break;
	case 5:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 50)
			{
				GiveItem2Character(chr, "pistol2");
				EquipCharacterByItem(chr, "pistol2");
			}
		}
		//KE: level 5:
		// all have basic defence + critical hit + advanced defence + gunman
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";

		//-------------------------------------
//		if(rand(100) < 50)
//		{
//			chr.perks.list.CriticalHit = "1";
//		}
//		chr.perks.list.BasicDefense = "1";
//		if(rand(100) < 80)
//		{
//			chr.perks.list.AdvancedDefense = "1";
//		}
//		if(rand(100) < 20)
//		{
//			chr.perks.list.AdvancedDefense = "1";
//			chr.perks.list.SwordplayProfessional = "1";
//		}
//		if(rand(100) < 80)
//		{
//			chr.perks.list.Gunman = "1";
//		}
//		if(rand(100) < 30)
//		{
//			chr.perks.list.GunProfessional = "1";
//		}
		break;
	case 6:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 60)
			{
				if(rand(100) < 75)
				{
					GiveItem2Character(chr, "pistol2");
					EquipCharacterByItem(chr, "pistol2");
				}else{
					GiveItem2Character(chr, "pistol6");
					EquipCharacterByItem(chr, "pistol6");
				}
			}
		}

		//KE: level 6:
		// all have basic defence + critical hit + advanced defence + gunman + professional fencing
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";

		//-------------------------------------
//		if(rand(100) < 80)
//		{
//			chr.perks.list.CriticalHit = "1";
//		}
//		chr.perks.list.BasicDefense = "1";
//		chr.perks.list.AdvancedDefense = "1";
//		chr.perks.list.Gunman = "1";
//		if(rand(100) < 50)
//		{
//			chr.perks.list.SwordplayProfessional = "1";
//		}
//		if(rand(100) < 50)
//		{
//			chr.perks.list.GunProfessional = "1";
//		}
		break;
	case 7:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 70)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					GiveItem2Character(chr, "pistol6");
					EquipCharacterByItem(chr, "pistol6");
				}
			}
		}
		//KE: level 7:
		// all have basic defence + critical hit + advanced defence + gunman + professional fencing + sniper
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";

		//-------------------------------------
//		chr.perks.list.CriticalHit = "1";
//		chr.perks.list.BasicDefense = "1";
//		chr.perks.list.AdvancedDefense = "1";
//		chr.perks.list.Gunman = "1";
//		if(rand(100) < 80)
//		{
//			chr.perks.list.SwordplayProfessional = "1";
//		}
//		if(rand(100) < 80)
//		{
//			chr.perks.list.GunProfessional = "1";
//		}
		break;
	case 8:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 80)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					GiveItem2Character(chr, "pistol6");
					EquipCharacterByItem(chr, "pistol6");
				}
			}
		}
		//KE: level 8:
		// all have basic defence + critical hit + advanced defence + gunman + professional fencing + sniper + Rush
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		//-------------------------------------
//		chr.perks.list.CriticalHit = "1";
//		chr.perks.list.BasicDefense = "1";
//		chr.perks.list.AdvancedDefense = "1";
//		chr.perks.list.Gunman = "1";
//		if(rand(100) < 90)
//		{
//			chr.perks.list.SwordplayProfessional = "1";
//		}
//		if(rand(100) < 90)
//		{
//			chr.perks.list.GunProfessional = "1";
//		}
		break;
	case 9:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 90)
			{
				if(rand(100) < 40)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 80)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//KE: level 9+ all have all perks open:
		// all have basic defence + critical hit + advanced defence + gunman + professional fencing + sniper + Rush
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";

		//-------------------------------------
//		chr.perks.list.CriticalHit = "1";
//		chr.perks.list.BasicDefense = "1";
//		chr.perks.list.AdvancedDefense = "1";
//		chr.perks.list.Gunman = "1";
//		chr.perks.list.SwordplayProfessional = "1";
//		chr.perks.list.GunProfessional = "1";
		break;
	case 10:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 80)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	case 11:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 60)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	case 12:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 60)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	case 13:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 60)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	case 14:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 60)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	case 15:
		//-------------------------------------
		if(isGun)
		{
			if(rand(100) < 100)
			{
				if(rand(100) < 60)
				{
					GiveItem2Character(chr, "pistol3");
					EquipCharacterByItem(chr, "pistol3");
				}else{
					if(rand(100) < 60)
					{
						GiveItem2Character(chr, "pistol6");
						EquipCharacterByItem(chr, "pistol6");
					}else{
						GiveItem2Character(chr, "pistol4");
						EquipCharacterByItem(chr, "pistol4");
					}
				}
			}
		}
		//-------------------------------------
		chr.perks.list.CriticalHit = "1";
		chr.perks.list.BasicDefense = "1";
		chr.perks.list.AdvancedDefense = "1";
		chr.perks.list.Gunman = "1";
		chr.perks.list.SwordplayProfessional = "1";
		chr.perks.list.GunProfessional = "1";
		chr.perks.list.Rush = "1";
		break;
	}
}

string LAi_NPC_EquipBladeSelection(int rank)
{
	int min = rank - 2;
	if(min < 1) min = 1;
	int max = rank + 1;
	if(max > 14) max = 14;
	int sel = rand(max - min) + min;
	string blade = "blade7";
	switch(sel)
	{
	case 1:
		blade = "blade7";
		break;
	case 2:
		blade = "blade8";
		break;
	case 3:
		blade = "blade10";
		break;
	case 4:
		blade = "blade11";
		break;
	case 5:
		blade = "blade12";
		break;
	case 6:
		blade = "blade14";
		break;
	case 7:
		blade = "blade15";
		break;
	case 8:
		blade = "blade16";
		break;
	case 9:
		blade = "blade17";
		break;
	case 10:
		blade = "blade18";
		break;
	case 11:
		blade = "blade19";
		break;
	case 12:
		blade = "blade20";
		break;
	case 13:
		blade = "blade21";
		break;
	case 14:
		blade = "blade23";
		break;
	}
	return blade;
}


