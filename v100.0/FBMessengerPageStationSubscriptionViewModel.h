/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMessengerPageStationSubscriptionViewModel : FBValueObject <NSCopying> {

	BOOL _isSubscribed;
	BOOL _isDefault;
	NSString* _stationId;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * stationId;                //@synthesize stationId=_stationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribed;                        //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                           //@synthesize isDefault=_isDefault - In the implementation block
-(id)initWithStationId:(id)arg1 displayName:(id)arg2 isSubscribed:(BOOL)arg3 isDefault:(BOOL)arg4 ;
-(NSString *)stationId;
-(NSString *)displayName;
-(BOOL)isDefault;
-(BOOL)isSubscribed;
@end
