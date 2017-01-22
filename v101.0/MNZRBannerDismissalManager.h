/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUserSessionClassProvidable.h>

@class NSMutableArray, MNUserSettings, NSString;

@interface MNZRBannerDismissalManager : NSObject <FBUserSessionClassProvidable> {

	NSMutableArray* _dismissedBannerHashes;
	MNUserSettings* _userSettings;

}

@property (nonatomic,retain) NSMutableArray * dismissedBannerHashes;              //@synthesize dismissedBannerHashes=_dismissedBannerHashes - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                       //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSettings:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(BOOL)hasUserDismissedBanner:(id)arg1 ;
-(void)userDismissedBanner:(id)arg1 ;
-(void)setDismissedBannerHashes:(NSMutableArray *)arg1 ;
-(void)_shrinkBannerHashArrayIfNeeded;
-(NSMutableArray *)dismissedBannerHashes;
-(void)clear;
-(MNUserSettings *)userSettings;
@end
