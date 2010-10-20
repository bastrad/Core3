/*
 *	server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.h generated by engine3 IDL compiler 0.61
 */

#ifndef STARTINGLOCATIONTERMINAL_H_
#define STARTINGLOCATIONTERMINAL_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace startinglocation {

class StartingLocationTerminal : public Terminal {
public:
	StartingLocationTerminal();

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StartingLocationTerminal(DummyConstructorParameter* param);

	virtual ~StartingLocationTerminal();

	friend class StartingLocationTerminalHelper;
};

} // namespace startinglocation
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::startinglocation;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace startinglocation {

class StartingLocationTerminalImplementation : public TerminalImplementation {

public:
	StartingLocationTerminalImplementation();

	StartingLocationTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	StartingLocationTerminal* _this;

	operator const StartingLocationTerminal*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~StartingLocationTerminalImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class StartingLocationTerminal;
};

class StartingLocationTerminalAdapter : public TerminalAdapter {
public:
	StartingLocationTerminalAdapter(StartingLocationTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

};

class StartingLocationTerminalHelper : public DistributedObjectClassHelper, public Singleton<StartingLocationTerminalHelper> {
	static StartingLocationTerminalHelper* staticInitializer;

public:
	StartingLocationTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StartingLocationTerminalHelper>;
};

} // namespace startinglocation
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::startinglocation;

#endif /*STARTINGLOCATIONTERMINAL_H_*/
