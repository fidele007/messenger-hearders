/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBadgeCountUpdateWriting.h>

@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, FBUserSession, NSDictionary, NSString;

@interface MNBadgeCountStore : NSObject <MNBadgeCountUpdateWriting> {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	FBUserSession* _userSession;
	NSDictionary* _badgeCounts;

}

@property (copy) NSDictionary * badgeCounts;                        //@synthesize badgeCounts=_badgeCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeSourceState:(id)arg1 ;
-(void)setBadgeCounts:(NSDictionary *)arg1 ;
-(NSDictionary *)badgeCounts;
-(void)_clearBadgeCountHistory;
-(void)restoreBadgeCounts;
-(id)initWithUserSession:(id)arg1 userDefaults:(id)arg2 writeQueue:(id)arg3 ;
-(void)synchronizeBadgeCountsToDisk;
-(id)allBadgeCounts;
@end

