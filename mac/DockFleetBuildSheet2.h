#import <Foundation/Foundation.h>

@class DockSquad;

@interface DockFleetBuildSheet2 : NSObject
-(void)show:(DockSquad*)squad;
@property (strong, nonatomic) NSDate* eventDate;
@property (strong, nonatomic, readonly) NSString* eventDateString;
@property (strong, nonatomic) NSString* eventName;
@property (strong, nonatomic) NSString* faction;
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* email;
@end
