int Whr_GetColor(aref arRef, string sAttribute)
{
	return sti(arRef.(sAttribute));
}

float Whr_GetFloat(aref arRef, string sAttribute)
{
	string sTmpAttr = sAttribute + ".max";
	if (CheckAttribute(arRef,sTmpAttr))
	{
		float fMin = stf(arRef.(sAttribute).min);
		float fMax = stf(arRef.(sAttribute).max);
		return fMin + frnd() * (fMax - fMin);
	}
	return stf(arRef.(sAttribute));
}

int Whr_GetLong(aref arRef, string sAttribute)
{
	string sTmpAttr = sAttribute + ".max";
	if (CheckAttribute(arRef,sTmpAttr))
	{
		int iMin = sti(arRef.(sAttribute).min);
		int iMax = sti(arRef.(sAttribute).max);
		return iMin + rand(iMax - iMin - 1);
	}
	return sti(arRef.(sAttribute));
}

string Whr_GetString(aref arRef, string sAttribute)
{
	return arRef.(sAttribute);
}
