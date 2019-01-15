#ifndef OPENMW_RECORDSDYNAMICAPI_HPP
#define OPENMW_RECORDSDYNAMICAPI_HPP

#include "../Types.hpp"

#include "../api.h"

#define RECORDSDYNAMICAPI \
    {"ClearRecords",                            RecordsDynamicFunctions::ClearRecords},\
    \
    {"GetRecordType",                           RecordsDynamicFunctions::GetRecordType},\
    {"GetRecordCount",                          RecordsDynamicFunctions::GetRecordCount},\
    {"GetRecordEffectCount",                    RecordsDynamicFunctions::GetRecordEffectCount},\
    \
    {"GetRecordId",                             RecordsDynamicFunctions::GetRecordId},\
    {"GetRecordBaseId",                         RecordsDynamicFunctions::GetRecordBaseId},\
    \
    {"GetRecordSubtype",                        RecordsDynamicFunctions::GetRecordSubtype},\
    {"GetRecordName",                           RecordsDynamicFunctions::GetRecordName},\
    {"GetRecordModel",                          RecordsDynamicFunctions::GetRecordModel},\
    {"GetRecordIcon",                           RecordsDynamicFunctions::GetRecordIcon},\
    {"GetRecordScript",                         RecordsDynamicFunctions::GetRecordScript},\
    {"GetRecordEnchantmentId",                  RecordsDynamicFunctions::GetRecordEnchantmentId},\
    {"GetRecordEnchantmentCharge",              RecordsDynamicFunctions::GetRecordEnchantmentCharge},\
    \
    {"GetRecordAutoCalc",                       RecordsDynamicFunctions::GetRecordAutoCalc},\
    {"GetRecordCharge",                         RecordsDynamicFunctions::GetRecordCharge},\
    {"GetRecordCost",                           RecordsDynamicFunctions::GetRecordCost},\
    {"GetRecordFlags",                          RecordsDynamicFunctions::GetRecordFlags},\
    {"GetRecordValue",                          RecordsDynamicFunctions::GetRecordValue},\
    {"GetRecordWeight",                         RecordsDynamicFunctions::GetRecordWeight},\
    \
    {"GetRecordEffectId",                       RecordsDynamicFunctions::GetRecordEffectId},\
    {"GetRecordEffectAttribute",                RecordsDynamicFunctions::GetRecordEffectAttribute},\
    {"GetRecordEffectSkill",                    RecordsDynamicFunctions::GetRecordEffectSkill},\
    {"GetRecordEffectRangeType",                RecordsDynamicFunctions::GetRecordEffectRangeType},\
    {"GetRecordEffectArea",                     RecordsDynamicFunctions::GetRecordEffectArea},\
    {"GetRecordEffectDuration",                 RecordsDynamicFunctions::GetRecordEffectDuration},\
    {"GetRecordEffectMagnitudeMax",             RecordsDynamicFunctions::GetRecordEffectMagnitudeMax},\
    {"GetRecordEffectMagnitudeMin",             RecordsDynamicFunctions::GetRecordEffectMagnitudeMin},\
    \
    {"SetRecordType",                           RecordsDynamicFunctions::SetRecordType},\
    \
    {"SetRecordId",                             RecordsDynamicFunctions::SetRecordId},\
    {"SetRecordBaseId",                         RecordsDynamicFunctions::SetRecordBaseId},\
    {"SetRecordInventoryBaseId",                RecordsDynamicFunctions::SetRecordInventoryBaseId},\
    \
    {"SetRecordSubtype",                        RecordsDynamicFunctions::SetRecordSubtype},\
    {"SetRecordName",                           RecordsDynamicFunctions::SetRecordName},\
    {"SetRecordModel",                          RecordsDynamicFunctions::SetRecordModel},\
    {"SetRecordIcon",                           RecordsDynamicFunctions::SetRecordIcon},\
    {"SetRecordScript",                         RecordsDynamicFunctions::SetRecordScript},\
    {"SetRecordEnchantmentId",                  RecordsDynamicFunctions::SetRecordEnchantmentId},\
    {"SetRecordEnchantmentCharge",              RecordsDynamicFunctions::SetRecordEnchantmentCharge},\
    \
    {"SetRecordAutoCalc",                       RecordsDynamicFunctions::SetRecordAutoCalc},\
    {"SetRecordCharge",                         RecordsDynamicFunctions::SetRecordCharge},\
    {"SetRecordCost",                           RecordsDynamicFunctions::SetRecordCost},\
    {"SetRecordFlags",                          RecordsDynamicFunctions::SetRecordFlags},\
    {"SetRecordValue",                          RecordsDynamicFunctions::SetRecordValue},\
    {"SetRecordWeight",                         RecordsDynamicFunctions::SetRecordWeight},\
    \
    {"SetRecordArmorRating",                    RecordsDynamicFunctions::SetRecordArmorRating},\
    {"SetRecordHealth",                         RecordsDynamicFunctions::SetRecordHealth},\
    \
    {"SetRecordDamageChop",                     RecordsDynamicFunctions::SetRecordDamageChop},\
    {"SetRecordDamageSlash",                    RecordsDynamicFunctions::SetRecordDamageSlash},\
    {"SetRecordDamageThrust",                   RecordsDynamicFunctions::SetRecordDamageThrust},\
    {"SetRecordReach",                          RecordsDynamicFunctions::SetRecordReach},\
    {"SetRecordSpeed",                          RecordsDynamicFunctions::SetRecordSpeed},\
    \
    {"SetRecordKeyState",                       RecordsDynamicFunctions::SetRecordKeyState},\
    {"SetRecordScrollState",                    RecordsDynamicFunctions::SetRecordScrollState},\
    {"SetRecordSkillId",                        RecordsDynamicFunctions::SetRecordSkillId},\
    {"SetRecordText",                           RecordsDynamicFunctions::SetRecordText},\
    \
    {"SetRecordHair",                           RecordsDynamicFunctions::SetRecordHair},\
    {"SetRecordHead",                           RecordsDynamicFunctions::SetRecordHead},\
    {"SetRecordGender",                         RecordsDynamicFunctions::SetRecordGender},\
    {"SetRecordRace",                           RecordsDynamicFunctions::SetRecordRace},\
    {"SetRecordClass",                          RecordsDynamicFunctions::SetRecordClass},\
    {"SetRecordFaction",                        RecordsDynamicFunctions::SetRecordFaction},\
    \
    {"SetRecordLevel",                          RecordsDynamicFunctions::SetRecordLevel},\
    {"SetRecordMagicka",                        RecordsDynamicFunctions::SetRecordMagicka},\
    {"SetRecordFatigue",                        RecordsDynamicFunctions::SetRecordFatigue},\
    {"SetRecordAIFight",                        RecordsDynamicFunctions::SetRecordAIFight},\
    \
    {"SetRecordIdByIndex",                      RecordsDynamicFunctions::SetRecordIdByIndex},\
    {"SetRecordEnchantmentIdByIndex",           RecordsDynamicFunctions::SetRecordEnchantmentIdByIndex},\
    \
    {"SetRecordEffectId",                       RecordsDynamicFunctions::SetRecordEffectId},\
    {"SetRecordEffectAttribute",                RecordsDynamicFunctions::SetRecordEffectAttribute},\
    {"SetRecordEffectSkill",                    RecordsDynamicFunctions::SetRecordEffectSkill},\
    {"SetRecordEffectRangeType",                RecordsDynamicFunctions::SetRecordEffectRangeType},\
    {"SetRecordEffectArea",                     RecordsDynamicFunctions::SetRecordEffectArea},\
    {"SetRecordEffectDuration",                 RecordsDynamicFunctions::SetRecordEffectDuration},\
    {"SetRecordEffectMagnitudeMax",             RecordsDynamicFunctions::SetRecordEffectMagnitudeMax},\
    {"SetRecordEffectMagnitudeMin",             RecordsDynamicFunctions::SetRecordEffectMagnitudeMin},\
    \
    {"SetRecordBodyPartType",                   RecordsDynamicFunctions::SetRecordBodyPartType},\
    {"SetRecordBodyPartIdForMale",              RecordsDynamicFunctions::SetRecordBodyPartIdForMale},\
    {"SetRecordBodyPartIdForFemale",            RecordsDynamicFunctions::SetRecordBodyPartIdForFemale},\
    \
    {"SetRecordInventoryItemId",                RecordsDynamicFunctions::SetRecordInventoryItemId},\
    {"SetRecordInventoryItemCount",             RecordsDynamicFunctions::SetRecordInventoryItemCount},\
    \
    {"AddRecord",                               RecordsDynamicFunctions::AddRecord},\
    {"AddRecordEffect",                         RecordsDynamicFunctions::AddRecordEffect},\
    {"AddRecordBodyPart",                       RecordsDynamicFunctions::AddRecordBodyPart},\
    {"AddRecordInventoryItem",                  RecordsDynamicFunctions::AddRecordInventoryItem},\
    \
    {"SendRecordDynamic",                       RecordsDynamicFunctions::SendRecordDynamic}

NAMESPACE_BEGIN(RecordsDynamicFunctions)
    /**
    * \brief Clear the data from the records stored on the server.
    *
    * \return void
    */
    API_FUNCTION void CDECL ClearRecords() noexcept;

    /**
    * \brief Get the type of records in the read worldstate's dynamic records.
    *
    * \return The type of records (0 for SPELL, 1 for POTION, 2 for ENCHANTMENT,
    *         3 for NPC).
    */
    API_FUNCTION unsigned short CDECL GetRecordType() noexcept;

    /**
    * \brief Get the number of records in the read worldstate's dynamic records.
    *
    * \return The number of records.
    */
    API_FUNCTION unsigned int CDECL GetRecordCount() noexcept;

    /**
    * \brief Get the number of effects for the record at a certain index in the read
    * worldstate's current records.
    *
    * \param recordIndex The index of the record.
    * \return The number of effects.
    */
    API_FUNCTION unsigned int CDECL GetRecordEffectCount(unsigned int recordIndex) noexcept;

    /**
    * \brief Get the id of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The id of the record.
    */
    API_FUNCTION const char *CDECL GetRecordId(unsigned int index) noexcept;

    /**
    * \brief Get the base id (i.e. the id this record should inherit default
    * values from) of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The base id of the record.
    */
    API_FUNCTION const char *CDECL GetRecordBaseId(unsigned int index) noexcept;

    /**
    * \brief Get the subtype of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The type of the record.
    */
    API_FUNCTION int CDECL GetRecordSubtype(unsigned int index) noexcept;

    /**
    * \brief Get the name of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The name of the record.
    */
    API_FUNCTION const char *CDECL GetRecordName(unsigned int index) noexcept;

    /**
    * \brief Get the model of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The model of the record.
    */
    API_FUNCTION const char *CDECL GetRecordModel(unsigned int index) noexcept;

    /**
    * \brief Get the icon of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The icon of the record.
    */
    API_FUNCTION const char *CDECL GetRecordIcon(unsigned int index) noexcept;

    /**
    * \brief Get the script of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The script of the record.
    */
    API_FUNCTION const char *CDECL GetRecordScript(unsigned int index) noexcept;

    /**
    * \brief Get the enchantment id of the record at a certain index in the read
    * worldstate's dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The enchantment id of the record.
    */
    API_FUNCTION const char *CDECL GetRecordEnchantmentId(unsigned int index) noexcept;

    /**
    * \brief Get the enchantment charge of the record at a certain index in
    * the read worldstate's dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The enchantment charge of the record.
    */
    API_FUNCTION int CDECL GetRecordEnchantmentCharge(unsigned int index) noexcept;

    /**
    * \brief Get the auto-calculation flag value of the record at a certain index in
    * the read worldstate's dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The auto-calculation flag value of the record.
    */
    API_FUNCTION int CDECL GetRecordAutoCalc(unsigned int index) noexcept;

    /**
    * \brief Get the charge of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The charge of the record.
    */
    API_FUNCTION int CDECL GetRecordCharge(unsigned int index) noexcept;

    /**
    * \brief Get the cost of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The cost of the record.
    */
    API_FUNCTION int CDECL GetRecordCost(unsigned int index) noexcept;

    /**
    * \brief Get the flags of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The flags of the spell as an integer.
    */
    API_FUNCTION int CDECL GetRecordFlags(unsigned int index) noexcept;

    /**
    * \brief Get the value of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The value of the record.
    */
    API_FUNCTION int CDECL GetRecordValue(unsigned int index) noexcept;

    /**
    * \brief Get the weight of the record at a certain index in the read worldstate's
    * dynamic records of the current type.
    *
    * \param index The index of the record.
    * \return The weight of the record.
    */
    API_FUNCTION double CDECL GetRecordWeight(unsigned int index) noexcept;

    /**
    * \brief Get the ID of the effect at a certain index in the read worldstate's
    * current records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The ID of the effect.
    */
    API_FUNCTION unsigned int CDECL GetRecordEffectId(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the ID of the attribute modified by the effect at a certain index in the
    * read worldstate's current records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The attribute ID for the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectAttribute(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the ID of the skill modified by the effect at a certain index in the
    * read worldstate's current records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The skill ID for the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectSkill(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the range type of the effect at a certain index in the read worldstate's
    * current records (0 for self, 1 for touch, 2 for target).
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The range of the effect.
    */
    API_FUNCTION unsigned int CDECL GetRecordEffectRangeType(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the area of the effect at a certain index in the read worldstate's current
    * records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The area of the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectArea(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the duration of the effect at a certain index in the read worldstate's current
    * records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The duration of the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectDuration(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the maximum magnitude of the effect at a certain index in the read
    * worldstate's current records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The maximum magnitude of the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectMagnitudeMax(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the minimum magnitude of the effect at a certain index in the read
    * worldstate's current records.
    *
    * \param recordIndex The index of the record.
    * \param effectIndex The index of the effect.
    * \return The minimum magnitude of the effect.
    */
    API_FUNCTION int CDECL GetRecordEffectMagnitudeMin(unsigned int recordIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Set which type of temporary records stored on the server should have
    * their data changed via setter functions.
    *
    * \param type The type of records.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordType(unsigned int type) noexcept;

    /**
    * \brief Set the id of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param id The id of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordId(const char* id) noexcept;

    /**
    * \brief Set the base id (i.e. the id this record should inherit default
    * values from) of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param baseId The baseId of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordBaseId(const char* baseId) noexcept;

    /**
    * \brief Set the inventory base id (i.e. the id this record should inherit
    * its inventory contents from) of the temporary record stored on the server for
    * the currently specified record type.
    *
    * \param inventoryBaseId The inventoryBaseId of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordInventoryBaseId(const char* inventoryBaseId) noexcept;

    /**
    * \brief Set the subtype of the temporary record stored on the server for
    * the currently specified record type.
    *
    * \param type The spell type.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordSubtype(unsigned int subtype) noexcept;

    /**
    * \brief Set the name of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param name The name of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordName(const char* name) noexcept;

    /**
    * \brief Set the model of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param model The model of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordModel(const char* model) noexcept;

    /**
    * \brief Set the icon of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param icon The icon of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordIcon(const char* icon) noexcept;

    /**
    * \brief Set the script of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param script The script of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordScript(const char* script) noexcept;

    /**
    * \brief Set the enchantment id of the temporary record stored on the server
    * for the currently specified record type.
    *
    * \param enchantmentId The enchantment id of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEnchantmentId(const char* enchantmentId) noexcept;

    /**
    * \brief Set the enchantment charge of the temporary record stored on the server
    * for the currently specified record type.
    *
    * \param enchantmentCharge The enchantmentCharge of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEnchantmentCharge(int enchantmentCharge) noexcept;

    /**
    * \brief Set the auto-calculation flag value of the temporary record stored
    * on the server for the currently specified record type.
    *
    * \param autoCalc The auto-calculation flag value of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordAutoCalc(int autoCalc) noexcept;

    /**
    * \brief Set the charge of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param charge The charge of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordCharge(int charge) noexcept;

    /**
    * \brief Set the cost of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param cost The cost of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordCost(int cost) noexcept;

    /**
    * \brief Set the flags of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param flags The flags of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordFlags(int flags) noexcept;

    /**
    * \brief Set the value of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param value The value of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordValue(int value) noexcept;

    /**
    * \brief Set the weight of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param weight The weight of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordWeight(double weight) noexcept;

    /**
    * \brief Set the armor rating of the temporary record stored on the server
    * for the currently specified record type.
    *
    * \param armorRating The armor rating of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordArmorRating(int armorRating) noexcept;

    /**
    * \brief Set the health of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param health The health of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordHealth(int health) noexcept;

    /**
    * \brief Set the chop damage of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param minDamage The minimum damage of the record.
    * \param maxDamage The maximum damage of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordDamageChop(unsigned int minDamage, unsigned int maxDamage) noexcept;

    /**
    * \brief Set the slash damage of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param minDamage The minimum damage of the record.
    * \param maxDamage The maximum damage of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordDamageSlash(unsigned int minDamage, unsigned int maxDamage) noexcept;

    /**
    * \brief Set the thrust damage of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param minDamage The minimum damage of the record.
    * \param maxDamage The maximum damage of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordDamageThrust(unsigned int minDamage, unsigned int maxDamage) noexcept;

    /**
    * \brief Set the reach of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param reach The reach of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordReach(double reach) noexcept;

    /**
    * \brief Set the speed of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param speed The speed of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordSpeed(double speed) noexcept;

    /**
    * \brief Set whether the temporary record stored on the server for the
    * currently specified record type is a key.
    *
    * Note: This is only applicable to Miscellaneous records.
    *
    * \param keyState Whether the record is a key.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordKeyState(bool keyState) noexcept;

    /**
    * \brief Set whether the temporary record stored on the server for the
    * currently specified record type is a scroll.
    *
    * Note: This is only applicable to Book records.
    *
    * \param scrollState Whether the record is a scroll.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordScrollState(bool scrollState) noexcept;

    /**
    * \brief Set the skill ID of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param skillId The skill ID of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordSkillId(int skillId) noexcept;

    /**
    * \brief Set the text of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param text The text of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordText(const char* text) noexcept;

    /**
    * \brief Set the hair of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param hair The hair of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordHair(const char* hair) noexcept;

    /**
    * \brief Set the head of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param hair The head of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordHead(const char* head) noexcept;

    /**
    * \brief Set the gender of the temporary record stored on the server for the
    * currently specified record type (0 for female, 1 for male).
    *
    * \param hair The race of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordGender(unsigned int gender) noexcept;

    /**
    * \brief Set the race of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param hair The race of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordRace(const char* race) noexcept;

    /**
    * \brief Set the character class of the temporary record stored on the server
    * for the currently specified record type.
    *
    * \param hair The character class of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordClass(const char* charClass) noexcept;

    /**
    * \brief Set the faction of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param faction The faction of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordFaction(const char* faction) noexcept;

    /**
    * \brief Set the level of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param level The level of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordLevel(int level) noexcept;

    /**
    * \brief Set the magicka of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param magicka The magicka of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordMagicka(int magicka) noexcept;

    /**
    * \brief Set the fatigue of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param fatigue The fatigue of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordFatigue(int fatigue) noexcept;

    /**
    * \brief Set the AI fight value of the temporary record stored on the server for the
    * currently specified record type.
    *
    * \param aiFight The AI fight value of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordAIFight(int aiFight) noexcept;

    /**
    * \brief Set the id of the record at a certain index in the records stored on the server.
    *
    * When resending a received RecordsDynamic packet, this allows you to set the server-generated
    * id of a record without having to clear and recreate the packet.
    *
    * \param index The index of the record.
    * \param id The id of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordIdByIndex(unsigned int index, const char* id) noexcept;

    /**
    * \brief Set the enchantment id of the record at a certain index in the records stored on
    * the server.
    *
    * When resending a received RecordsDynamic packet, this allows you to set the server-generated
    * enchantment id of a record without having to clear and recreate the packet.
    *
    * \param index The index of the record.
    * \param enchantmentId The enchantment id of the record.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEnchantmentIdByIndex(unsigned int index, const char* enchantmentId) noexcept;

    /**
    * \brief Set the ID of the temporary effect stored on the server.
    *
    * \param effectId The ID of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectId(unsigned int effectId) noexcept;

    /**
    * \brief Set the ID of the attribute modified by the temporary effect stored on
    * the server.
    *
    * \param attributeId The ID of the attribute.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectAttribute(int attributeId) noexcept;

    /**
    * \brief Set the ID of the skill modified by the temporary effect stored on the
    * server.
    *
    * \param skillId The ID of the skill.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectSkill(int skillId) noexcept;

    /**
    * \brief Set the range type of the temporary effect stored on the server (0 for
    * self, 1 for touch, 2 for target).
    *
    * \param rangeType The range type of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectRangeType(unsigned int rangeType) noexcept;

    /**
    * \brief Set the area of the temporary effect stored on the server.
    *
    * \param area The area of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectArea(int area) noexcept;

    /**
    * \brief Set the duration of the temporary effect stored on the server.
    *
    * \param duration The duration of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectDuration(int duration) noexcept;

    /**
    * \brief Set the maximum magnitude of the temporary effect stored on the server.
    *
    * \param magnitudeMax The maximum magnitude of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectMagnitudeMax(int magnitudeMax) noexcept;

    /**
    * \brief Set the minimum magnitude of the temporary effect stored on the server.
    *
    * \param magnitudeMin The minimum magnitude of the effect.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordEffectMagnitudeMin(int magnitudeMin) noexcept;

    /**
    * \brief Set the type of the temporary body part stored on the server.
    *
    * \param partType The type of the body part.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordBodyPartType(unsigned int partType) noexcept;

    /**
    * \brief Set the id of the male version of the temporary body part stored on the
    * server.
    *
    * \param partId The id of the body part.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordBodyPartIdForMale(const char* partId) noexcept;

    /**
    * \brief Set the id of the female version of the temporary body part stored on the
    * server.
    *
    * \param partId The id of the body part.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordBodyPartIdForFemale(const char* partId) noexcept;

    /**
    * \brief Set the id of the of the temporary inventory item stored on the server.
    *
    * \param partId The id of the inventory item.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordInventoryItemId(const char* itemId) noexcept;

    /**
    * \brief Set the count of the of the temporary inventory item stored on the server.
    *
    * \param count The count of the inventory item.
    * \return void
    */
    API_FUNCTION void CDECL SetRecordInventoryItemCount(unsigned int count) noexcept;

    /**
    * \brief Add a copy of the server's temporary record of the current specified
    * type to the stored records.
    *
    * In the process, the server's temporary record will automatically be cleared
    * so a new one can be set up.
    *
    * \return void
    */
    API_FUNCTION void CDECL AddRecord() noexcept;

    /**
    * \brief Add a copy of the server's temporary effect to the temporary record
    * of the current specified type.
    *
    * In the process, the server's temporary effect will automatically be cleared
    * so a new one can be set up.
    *
    * \return void
    */
    API_FUNCTION void CDECL AddRecordEffect() noexcept;

    /**
    * \brief Add a copy of the server's temporary body part to the temporary record
    * of the current specified type.
    *
    * In the process, the server's temporary body part will automatically be cleared
    * so a new one can be set up.
    *
    * \return void
    */
    API_FUNCTION void CDECL AddRecordBodyPart() noexcept;

    /**
    * \brief Add a copy of the server's temporary inventory item to the temporary record
    * of the current specified type.
    *
    * In the process, the server's temporary inventory item will automatically be cleared
    * so a new one can be set up.
    *
    * Note: Any items added this way will be ignored if the record already has a valid
    *       inventoryBaseId.
    *
    * \return void
    */
    API_FUNCTION void CDECL AddRecordInventoryItem() noexcept;

    /**
    * \brief Send a RecordDynamic packet with the current specified record type.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    API_FUNCTION void CDECL SendRecordDynamic(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;
NAMESPACE_END()

#endif //OPENMW_RECORDSDYNAMICAPI_HPP