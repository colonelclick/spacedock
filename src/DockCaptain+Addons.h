#import "DockCaptain.h"

@interface DockCaptain (Addons)
@property (nonatomic, readonly) int talentCount;
+(DockUpgrade*)zeroCostCaptain:(NSString*)faction context:(NSManagedObjectContext*)context;
+(DockUpgrade*)captainForId:(NSString*)externalId context:(NSManagedObjectContext*)context;
-(BOOL)isZeroCost;
-(BOOL)isKirk;
-(BOOL)isTholian;
-(int)additionalTechSlots;
-(int)additionalCrewSlots;
@end
