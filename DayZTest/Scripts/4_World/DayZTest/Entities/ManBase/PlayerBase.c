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