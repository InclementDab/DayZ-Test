modded class PlayerBase
{
	void PlayerBase()
	{
		Print("AAA");
		SetEventMask(EntityEvent.SIMULATE);
	}	
	
	override void EOnSimulate(IEntity other, float dt)
	{
		
		array<Object> objs = {};
		GetGame().GetObjectsAtPosition(GetPosition(), 10, objs, null);
		
		vector pos, dir;
		int comp;
		set<Object> results = new set<Object>();
		DayZPhysics.RaycastRV(GetPosition(), GetPosition() + vector.Up * -1, pos, dir, comp, results, null, this);
		foreach (Object res: results) {
			Print(res);
			
			dBodyApplyForceAt(res, GetPosition(), Vector(0, dBodyGetMass(this) * dt * -9.81, 0));
		}
	}
}

modded class DayZPlayerImplementJumpClimb
{
    override private void Jump()
    {
        m_bIsJumpInProgress = true;
        m_Player.SetFallYDiff( m_Player.GetPosition()[1] );

        m_Player.OnJumpStart();
        m_Player.StartCommand_Fall(10.0);
        m_Player.StopHandEvent();
    }
} 