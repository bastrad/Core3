/*
 *	server/zone/objects/tangible/pharmaceutical/WoundPack.cpp generated by engine3 IDL compiler 0.61
 */

#include "WoundPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/managers/player/PlayerManager.h"

/*
 *	WoundPackStub
 */

WoundPack::WoundPack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	WoundPackImplementation* _implementation = new WoundPackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

WoundPack::WoundPack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
}

WoundPack::~WoundPack() {
}


void WoundPack::updateCraftingValues(ManufactureSchematic* schematic) {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(schematic);
}

void WoundPack::loadTemplateData(SharedObjectTemplate* templateData) {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void WoundPack::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int WoundPack::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

unsigned int WoundPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
}

float WoundPack::getEffectiveness() {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

bool WoundPack::isWoundPack() {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWoundPack();
}

byte WoundPack::getAttribute() {
	WoundPackImplementation* _implementation = (WoundPackImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithByteReturn();
	} else
		return _implementation->getAttribute();
}

DistributedObjectServant* WoundPack::_getImplementation() {
	return _impl;}

void WoundPack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	WoundPackImplementation
 */

WoundPackImplementation::WoundPackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


WoundPackImplementation::~WoundPackImplementation() {
}


void WoundPackImplementation::finalize() {
}

void WoundPackImplementation::_initializeImplementation() {
	_setClassHelper(WoundPackHelper::instance());

	_serializationHelperMethod();
}

void WoundPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WoundPack*) stub;
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WoundPackImplementation::_getStub() {
	return _this;
}

WoundPackImplementation::operator const WoundPack*() {
	return _this;
}

void WoundPackImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WoundPackImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WoundPackImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WoundPackImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WoundPackImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WoundPackImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WoundPackImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WoundPackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("WoundPack");

	addSerializableVariable("effectiveness", &effectiveness);
	addSerializableVariable("attribute", &attribute);
}

WoundPackImplementation::WoundPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(67):  		setLoggingName("WoundPack");
	setLoggingName("WoundPack");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(69):  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(70):  		attribute = 0;
	attribute = 0;
}

void WoundPackImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(75):  		CraftingValues craftingValues = schematic.getCraftingValues();
	CraftingValues* craftingValues = schematic->getCraftingValues();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(77):  		effectiveness = craftingValues.getCurrentValue("power");
	effectiveness = craftingValues->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(78):  		super.medicineUseRequired = craftingValues.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = craftingValues->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(79):  		setUseCount(craftingValues.getCurrentValue("charges"));
	setUseCount(craftingValues->getCurrentValue("charges"));
}

void WoundPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(90):  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(92):  		WoundPackTemplate 
	if (!templateData->isWoundPackTemplate())	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(93):  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(95):  stimPackTemplate = (WoundPackTemplate) templateData;
	WoundPackTemplate* stimPackTemplate = (WoundPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(97):  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(98):  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(99):  		attribute = stimPackTemplate.getAttribute();
	attribute = stimPackTemplate->getAttribute();
}

void WoundPackImplementation::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(111):  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(113):  		msg.insertAttribute("examine_heal_wound_" + CreatureAttribute.getName(attribute), Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_wound_" + CreatureAttribute::getName(attribute), Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(114):  		msg.insertAttribute("healing_ability", super.medicineUseRequired);
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::medicineUseRequired);
}

int WoundPackImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(126):  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(127):  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(129):  
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(130):  			player.sendSystemMessage("error_message", "insufficient_skill");
	player->sendSystemMessage("error_message", "insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(132):  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(134):  			string command = "/healwound ";
	String command = "/healwound ";
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(135):  			command = command + CreatureAttribute.getName(attribute);
	command = command + CreatureAttribute::getName(attribute);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(136):  			command = command + "|";
	command = command + "|";
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(137):  			command = command + String.valueOf(super.getObjectID());
	command = command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID());
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(139):  			player.sendExecuteConsoleCommand(command);
	player->sendExecuteConsoleCommand(command);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(141):  			return 0;
	return 0;
}
}

unsigned int WoundPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(147):  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(149):  		ZoneServer 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(150):  			power = power - power * patient.calculateBFRatio();
	power = power - power * patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(153):  zoneServer = super.getZoneServer();
	ZoneServer* zoneServer = PharmaceuticalObjectImplementation::getZoneServer();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(154):  		PlayerManager playerManager = zoneServer.getPlayerManager();
	PlayerManager* playerManager = zoneServer->getPlayerManager();
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(156):  		float modEnvironment = playerManager.getMedicalFacilityRating(healer);
	float modEnvironment = playerManager->getMedicalFacilityRating(healer);
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(158):  		float modSkill = (float) healer.getSkillMod("healing_wound_treatment");
	float modSkill = (float) healer->getSkillMod("healing_wound_treatment");
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(159):  		float modCityBonus = 1;
	float modCityBonus = 1;
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(161):  		return (power * modCityBonus * modEnvironment * (100.0f + modSkill) / 10000.0f);
	return (power * modCityBonus * modEnvironment * (100.0f + modSkill) / 10000.0f);
}

float WoundPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(165):  		return effectiveness;
	return effectiveness;
}

bool WoundPackImplementation::isWoundPack() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(169):  		return true;
	return true;
}

byte WoundPackImplementation::getAttribute() {
	// server/zone/objects/tangible/pharmaceutical/WoundPack.idl(173):  		return attribute;
	return attribute;
}

/*
 *	WoundPackAdapter
 */

WoundPackAdapter::WoundPackAdapter(WoundPackImplementation* obj) : PharmaceuticalObjectAdapter(obj) {
}

Packet* WoundPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 7:
		resp->insertInt(calculatePower((CreatureObject*) inv->getObjectParameter(), (CreatureObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 8:
		resp->insertFloat(getEffectiveness());
		break;
	case 9:
		resp->insertBoolean(isWoundPack());
		break;
	case 10:
		resp->insertByte(getAttribute());
		break;
	default:
		return NULL;
	}

	return resp;
}

int WoundPackAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((WoundPackImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

unsigned int WoundPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return ((WoundPackImplementation*) impl)->calculatePower(healer, patient, applyBattleFatigue);
}

float WoundPackAdapter::getEffectiveness() {
	return ((WoundPackImplementation*) impl)->getEffectiveness();
}

bool WoundPackAdapter::isWoundPack() {
	return ((WoundPackImplementation*) impl)->isWoundPack();
}

byte WoundPackAdapter::getAttribute() {
	return ((WoundPackImplementation*) impl)->getAttribute();
}

/*
 *	WoundPackHelper
 */

WoundPackHelper* WoundPackHelper::staticInitializer = WoundPackHelper::instance();

WoundPackHelper::WoundPackHelper() {
	className = "WoundPack";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WoundPackHelper::finalizeHelper() {
	WoundPackHelper::finalize();
}

DistributedObject* WoundPackHelper::instantiateObject() {
	return new WoundPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* WoundPackHelper::instantiateServant() {
	return new WoundPackImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WoundPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WoundPackAdapter((WoundPackImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

