/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBReachabilityListener.h>

@class MNVideoPlaybackConfigurationInjector, NSString;

@interface MNVideoPlaybackConfiguration : NSObject <FBClassInjectable, FBReachabilityListener> {

	MNVideoPlaybackConfigurationInjector* _injector;
	unsigned long long _currentReachabilityState;
	BOOL _isLowBatteryModeEnabled;
	long long _videoAutoPlayOption;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long videoAutoPlayOption;              //@synthesize videoAutoPlayOption=_videoAutoPlayOption - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)shouldAutoPlaybackVideoWithThreadSummary:(id)arg1 ;
-(BOOL)shouldLoopPlayback;
-(BOOL)videoAutoPlaybackFeatureEnabled;
-(long long)videoAutoPlayOption;
-(void)setVideoAutoPlayOption:(long long)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(BOOL)showSoundButton;
-(void)lowBatteryModeDidChange;
-(BOOL)_isReachabilityStateEligble;
-(BOOL)_isBatteryLevelEligble;
-(void)_initAutoPlayOptionIfNeeded;
-(unsigned long long)_eligibleVideoAutoPlayReachability;
-(unsigned long long)_eligibleVideoAutoPlayReachabilityFromMC;
-(void)dealloc;
@end
