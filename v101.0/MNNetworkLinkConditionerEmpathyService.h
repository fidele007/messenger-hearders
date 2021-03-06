/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class NSCalendar, FBUserPreferences, NSDate, FBApplicationStatusBarOverlayer, UIAlertView, FBAlertViewCoordinator, FBAnalytics, MNNetworkLinkConditionerConfig, NSString;

@interface MNNetworkLinkConditionerEmpathyService : NSObject <UIAlertViewDelegate, MNServiceControllable, FBViewerContextClassProvidable> {

	NSCalendar* _gregorianCalendar;
	FBUserPreferences* _userPreferences;
	BOOL _serviceStarted;
	NSDate* _nextCheckScheduledAt;
	NSDate* _lastReminderToast;
	FBApplicationStatusBarOverlayer* _statusBarOverlayer;
	UIAlertView* _snoozeBarAlert;
	FBAlertViewCoordinator* _alertViewCoordinator;
	FBAnalytics* _analytics;
	MNNetworkLinkConditionerConfig* _config;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_configurationWithConfigContextManager:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)createSettingsViewController;
-(void)_startIfNeeded;
-(id)initWithSession:(id)arg1 calendar:(id)arg2 statusBarOverlayer:(id)arg3 alertViewCoordinator:(id)arg4 analytics:(id)arg5 contextManager:(id)arg6 ;
-(void)_registerBugReportHandler;
-(void)_stopIfNeeded;
-(BOOL)hasUserEnabledService;
-(void)_serviceEnabledStatusChanged;
-(void)_checkIfEnabled;
-(void)_removeObserver;
-(void)_turnOffLinkConditioner;
-(void)_showStatusBarOverLayerIfNeeded;
-(id)_eligibleDays;
-(BOOL)_shouldStartAtDate:(id)arg1 fromEligibleDays:(id)arg2 ;
-(BOOL)isServicePaused;
-(void)_turnOnLinkConditioner;
-(double)_scheduleNextCheckFromDate:(id)arg1 fromEligibleDays:(id)arg2 ;
-(id)_servicePausedDate;
-(id)_nextEligibleStartOfDay:(id)arg1 fromEligibleDays:(id)arg2 ;
-(void)_didTapStatusBar;
-(id)_nextStartDateFrom:(id)arg1 fromEligibleDays:(id)arg2 ;
-(id)_nextStopDateFrom:(id)arg1 fromEligibleDays:(id)arg2 ;
-(void)setPauseServiceEnabled:(BOOL)arg1 ;
-(id)_generateDebugLog;
-(BOOL)setUserEnabledService:(BOOL)arg1 ;
-(BOOL)canPauseService;
-(id)eligibleDaysNames;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(BOOL)isAvailable;
-(unsigned long long)upstreamBandwidth;
-(unsigned long long)downstreamBandwidth;
-(void)handleIdle;
-(void)_setupObserver;
@end

