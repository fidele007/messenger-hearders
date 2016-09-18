/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUserSessionClassProvidable.h>

@class FBTimer, ZRApplicationState, FBReachability, ZRTokenCurrentNetwork, FBExponentialBackoffTimer, ZRTokenUpdater, NSString;

@interface ZRTokenRefreshCoordinator : NSObject <FBUserSessionClassProvidable> {

	BOOL _started;
	FBTimer* _expiryTimer;
	ZRApplicationState* _zeroRatingState;
	FBReachability* _reachability;
	ZRTokenCurrentNetwork* _currentNetwork;
	FBExponentialBackoffTimer* _refreshRetryTimer;
	ZRTokenUpdater* _zeroTokenUpdater;

}

@property (nonatomic,retain) FBTimer * expiryTimer;                                      //@synthesize expiryTimer=_expiryTimer - In the implementation block
@property (nonatomic,retain) ZRApplicationState * zeroRatingState;                       //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) FBReachability * reachability;                              //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) ZRTokenCurrentNetwork * currentNetwork;                     //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (nonatomic,retain) FBExponentialBackoffTimer * refreshRetryTimer;              //@synthesize refreshRetryTimer=_refreshRetryTimer - In the implementation block
@property (nonatomic,retain) ZRTokenUpdater * zeroTokenUpdater;                          //@synthesize zeroTokenUpdater=_zeroTokenUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(void)setRefreshRetryTimer:(FBExponentialBackoffTimer *)arg1 ;
-(void)setZeroTokenUpdater:(ZRTokenUpdater *)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 reachability:(id)arg2 currentNetworkMonitor:(id)arg3 refreshRetryTimer:(id)arg4 zeroTokenUpdater:(id)arg5 ;
-(void)zeroTokenChanged:(id)arg1 ;
-(void)cancelTimers:(id)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 zeroTokenUpdater:(id)arg2 ;
-(void)setZeroRatingAllowed:(BOOL)arg1 ;
-(void)timerExpired;
-(void)_refreshWhenPossible;
-(void)setNextRefreshTime:(id)arg1 ;
-(FBExponentialBackoffTimer *)refreshRetryTimer;
-(ZRTokenUpdater *)zeroTokenUpdater;
-(void)setCurrentNetwork:(ZRTokenCurrentNetwork *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)reachabilityChanged:(id)arg1 ;
-(void)scheduleRefresh;
-(ZRTokenCurrentNetwork *)currentNetwork;
-(FBTimer *)expiryTimer;
-(void)setExpiryTimer:(FBTimer *)arg1 ;
-(FBReachability *)reachability;
-(void)setReachability:(FBReachability *)arg1 ;
@end

