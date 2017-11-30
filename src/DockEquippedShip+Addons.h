#import "DockEquippedShip.h"

@class DockAdmiral;
@class DockCaptain;
@class DockFleetCaptain;
@class DockUpgrade;

@interface DockEquippedShip (Addons)
@property (nonatomic, readonly) NSString* title;
@property (nonatomic, readonly) int cost;
@property (nonatomic, readonly) DockCaptain* captain;
+(DockEquippedShip*)equippedShipWithShip:(DockShip*)ship;
+(DockEquippedShip*)import:(NSDictionary*)esDict context:(NSManagedObjectContext *)context;
-(void)importUpgrades:(NSDictionary*)esDict;
-(DockEquippedShip*)duplicate;
-(DockEquippedUpgrade*)equippedCaptain;
-(BOOL)canAddUpgrade:(DockUpgrade*)upgrade;
-(BOOL)canAddUpgrade:(DockUpgrade*)upgrade ignoreInstalled:(BOOL)ignoreInstalled;
-(BOOL)canAddUpgrade:(DockUpgrade*)upgrade ignoreInstalled:(BOOL)ignoreInstalled validating:(BOOL)validating;
-(BOOL)canAddFleetCaptain:(DockFleetCaptain*)fleetCaptain error:(NSError**)error;
-(DockEquippedUpgrade*)addUpgrade:(DockUpgrade*)upgrade;
-(DockEquippedUpgrade*)addUpgrade:(DockUpgrade*)upgrade maybeReplace:(DockEquippedUpgrade*)maybeReplace;
-(DockEquippedUpgrade*)addUpgrade:(DockUpgrade*)upgrade maybeReplace:(DockEquippedUpgrade*)maybeReplace establishPlaceholders:(BOOL)establish;
-(DockEquippedUpgrade*)addUpgrade:(DockUpgrade*)upgrade maybeReplace:(DockEquippedUpgrade*)maybeReplace establishPlaceholders:(BOOL)establish respectLimits:(BOOL)respectLimits;
-(DockEquippedUpgrade*)firstUpgrade:(NSString*)upType;
-(DockEquippedUpgrade*)mostExpensiveUpgradeOfFaction:(NSString*)faction upType:(NSString*)upType;
-(NSArray*)allUpgradesOfFaction:(NSString*)faction upType:(NSString*)upType;
-(void)removeUpgrade:(DockEquippedUpgrade*)upgrade;
-(void)removeUpgrade:(DockEquippedUpgrade*)upgrade establishPlaceholders:(BOOL)doEstablish;
-(void)removeCaptain;
-(int)talentCount;
-(int)upgradeCount;
-(int)captainCount;
-(int)admiralCount;
-(int)fleetCaptainCount;
-(int)techCount;
-(int)weaponCount;
-(int)crewCount;
-(int)borgCount;
-(int)squadronUpgradeCount;
-(int)resourceUpgradeCount;
-(int)officerLimit;
-(int)baseCost;
-(int)attack;
-(NSString*)attackString;
-(int)agility;
-(NSString*)agilityString;
-(int)hull;
-(NSString*)hullString;
-(int)shield;
-(NSString*)shieldString;
-(BOOL)isResourceSideboard;
-(BOOL)isFighterSquadron;
-(NSArray*)sortedUpgrades;
-(NSArray*)sortedUpgradesWithFlagship;
-(NSArray*)sortedUpgradesWithoutPlaceholders;
-(NSString*)plainDescription;
-(NSString*)descriptiveTitle;
-(NSString*)descriptiveTitleWithSet;
-(NSString*)upgradesDescription;
-(NSString*)factionCode;
-(BOOL)hasFaction:(NSString*)faction;
-(NSDictionary*)asJSON;
-(NSString*)asPlainTextFormat;
-(DockEquippedUpgrade*)containsUpgrade:(DockUpgrade*)theUpgrade;
-(DockEquippedUpgrade*)containsUpgradeWithName:(NSString*)theName;
-(DockEquippedUpgrade*)containsUniqueUpgradeWithName:(NSString*)theName;
-(DockEquippedUpgrade*)containsMirrorUniverseUniqueUpgradeWithName:(NSString*)theName;
-(DockEquippedUpgrade*)containsUpgradeWithId:(NSString*)theId;
-(DockEquippedUpgrade*)containsUpgradeWithSpecial:(NSString*)special;
-(NSArray*)upgradesWithSpecialTag:(NSString*)specialTag;
-(void)changeShip:(DockShip*)newShip;
-(NSDictionary*)explainCantAddUpgrade:(DockUpgrade*)upgrade;
-(void)establishPlaceholders;
-(NSDictionary*)becomeFlagship:(DockFlagship*)flagship;
-(void)removeFlagship;
-(DockEquippedUpgrade*)addAdmiral:(DockAdmiral*)admiral;
-(void)removeAdmiral;
-(DockEquippedUpgrade*)equippedAdmiral;
-(DockEquippedUpgrade*)equippedFleetCaptain;
-(DockEquippedUpgrade*)equippedResource;
-(void)purgeUpgrade:(DockUpgrade*)upgrade;
@end
