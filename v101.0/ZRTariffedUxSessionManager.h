/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZRTariffedUxSessionDelegate.h>
#import <Messenger/FBUserSessionClassProvidable.h>

@protocol NSLocking;
@class ZRTariffedUxSessionTombstone, NSMutableSet, NSMutableArray, ZRApplicationState, NSObject, NSString;

@interface ZRTariffedUxSessionManager : NSObject <ZRTariffedUxSessionDelegate, FBUserSessionClassProvidable> {

	ZRTariffedUxSessionTombstone* _lastInvalidatedSession;
	unsigned long long _activeSessionCount;
	NSMutableSet* _validSessionsInternal;
	NSMutableArray* _shownFences;
	ZRApplicationState* _zeroRatingState;
	NSObject*<NSLocking> _sharedZeroTokenDataLock;

}

@property (nonatomic,copy) NSMutableSet * validSessionsInternal;                                 //@synthesize validSessionsInternal=_validSessionsInternal - In the implementation block
@property (nonatomic,retain) NSMutableArray * shownFences;                                       //@synthesize shownFences=_shownFences - In the implementation block
@property (nonatomic,retain) ZRApplicationState * zeroRatingState;                               //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionTombstone * lastInvalidatedSession;              //@synthesize lastInvalidatedSession=_lastInvalidatedSession - In the implementation block
@property (nonatomic,retain) NSObject*<NSLocking> sharedZeroTokenDataLock;                       //@synthesize sharedZeroTokenDataLock=_sharedZeroTokenDataLock - In the implementation block
@property (nonatomic,readonly) unsigned long long activeSessionCount;                            //@synthesize activeSessionCount=_activeSessionCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(id)invalidSessionNamed:(id)arg1 filter:(id)arg2 ;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 ;
-(BOOL)enterTariffedSessionWith:(/*^block*/id)arg1 throughFence:(id)arg2 ;
-(void)sessionDidValidate:(id)arg1 ;
-(id)initWithSharedZeroTokenDataLock:(id)arg1 zeroRatingState:(id)arg2 ;
-(unsigned long long)validSessionCount;
-(void)setLastInvalidatedSession:(ZRTariffedUxSessionTombstone *)arg1 ;
-(id)validSessions;
-(BOOL)isUserInTariffedSession;
-(ZRTariffedUxSessionTombstone *)lastInvalidatedSession;
-(unsigned long long)activeSessionCount;
-(NSMutableSet *)validSessionsInternal;
-(void)setValidSessionsInternal:(NSMutableSet *)arg1 ;
-(NSMutableArray *)shownFences;
-(void)setShownFences:(NSMutableArray *)arg1 ;
-(NSObject*<NSLocking>)sharedZeroTokenDataLock;
-(void)setSharedZeroTokenDataLock:(NSObject*<NSLocking>)arg1 ;
-(void)dealloc;
-(void)sessionDidInvalidate:(id)arg1 ;
@end

