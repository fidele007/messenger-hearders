/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol FBCancelable;
@class NSString, NSDate;

@interface MNMessageLiveLocationUpdaterEntry : FBValueObject <NSCopying, NSCoding> {

	NSString* _offlineThreadingId;
	NSString* _messageLiveLocationId;
	id<FBCancelable> _cancelable;
	NSDate* _expirationTime;

}

@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                 //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageLiveLocationId;              //@synthesize messageLiveLocationId=_messageLiveLocationId - In the implementation block
@property (nonatomic,readonly) id<FBCancelable> cancelable;                        //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationTime;                       //@synthesize expirationTime=_expirationTime - In the implementation block
-(NSString *)offlineThreadingId;
-(NSString *)messageLiveLocationId;
-(id)initWithOfflineThreadingId:(id)arg1 messageLiveLocationId:(id)arg2 cancelable:(id)arg3 expirationTime:(id)arg4 ;
-(id<FBCancelable>)cancelable;
-(NSDate *)expirationTime;
@end

