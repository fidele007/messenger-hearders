/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBSaveDashboardIntentTarget : FBIntentTarget {

	NSString* _section;
	NSString* _notificationId;

}

@property (nonatomic,copy,readonly) NSString * section;                     //@synthesize section=_section - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationId;              //@synthesize notificationId=_notificationId - In the implementation block
+(id)saveDashboardTargetWithSection:(id)arg1 referrer:(id)arg2 notificationId:(id)arg3 ;
-(id)fallbackURLs;
-(NSString *)notificationId;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)section;
@end

