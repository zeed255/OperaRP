public OnPlayerCommandReceived(playerid, cmd[], params[], flags)
{
	if(PlayerInfo[playerid][pAdmin] < flags && !IsPlayerAdmin(playerid))
	{
		SendClientMessageEx(playerid,-1,"El comando \"/%s\" es inv�lido, us� /ayuda.", cmd);
		return 0;
	}
	return 1;
}