/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MNAccountNotification : FBValueObject <NSCopying> {

	NSString* _accountFBID;
	long long _badgeCount;
	long long _badgeCountSinceLastUpdateTime;
	NSString* _notificationText;
	NSDate* _lastUpdateTime;

}

@property (nonatomic,copy,readonly) NSString * accountFBID;                          //@synthesize accountFBID=_accountFBID - In the implementation block
@property (nonatomic,readonly) long long badgeCount;                                 //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) long long badgeCountSinceLastUpdateTime;              //@synthesize badgeCountSinceLastUpdateTime=_badgeCountSinceLastUpdateTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationText;                     //@synthesize notificationText=_notificationText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastUpdateTime;                         //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
-(id)initWithAccountFBID:(id)arg1 badgeCount:(long long)arg2 badgeCountSinceLastUpdateTime:(long long)arg3 notificationText:(id)arg4 lastUpdateTime:(id)arg5 ;
-(NSString *)accountFBID;
-(long long)badgeCountSinceLastUpdateTime;
-(NSString *)notificationText;
-(NSDate *)lastUpdateTime;
-(long long)badgeCount;
@end
