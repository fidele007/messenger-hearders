/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBackgroundEventContributionListener, FBClock;
@class UIApplication, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface FBBackgroundEventList : NSObject {

	id<FBBackgroundEventContributionListener> _listener;
	UIApplication* _application;
	id<FBClock> _clock;
	NSMutableSet* _activeForegroundEventKeys;
	NSMutableArray* _activeBackgroundEventKeys;
	NSMutableDictionary* _eventKeyToStartTimeMap;

}
-(void)_startBackgroundEventWithKey:(id)arg1 ;
-(void)_removeBackgroundEventWithKey:(id)arg1 ;
-(void)_expireTimedOutEvents;
-(id)initWithListener:(id)arg1 application:(id)arg2 clock:(id)arg3 ;
-(void)startEventWithKey:(id)arg1 ;
-(void)endEventWithKey:(id)arg1 ;
-(void)transitionEventsIntoForeground;
-(void)transitionEventsIntoBackground;
-(void)triggerHeartbeatWithContribution:(double)arg1 ;
@end

