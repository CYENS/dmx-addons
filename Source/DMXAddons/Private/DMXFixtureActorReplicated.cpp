


#include "DMXFixtureActorReplicated.h"

ADMXFixtureActorReplicated::ADMXFixtureActorReplicated() : ADMXFixtureActor()
{
	SetReplicates(true);
	Base->SetIsReplicated(true);
	Yoke->SetIsReplicated(true);
	Head->SetIsReplicated(true);
	
}

