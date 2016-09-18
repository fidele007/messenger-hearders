/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class NSUserDefaults, NSNotificationCenter, FBMessengerRedirectionBadgingControllerListenerAnnouncer, NSString;

@interface FBMessengerRedirectionBadgingController : NSObject <FBViewerContextClassProvidable> {

	NSUserDefaults* _userDefaults;
	NSNotificationCenter* _notificationCenter;
	FBMessengerRedirectionBadgingControllerListenerAnnouncer* _announcer;

}

@property (assign,nonatomic) BOOL shouldBadgeWithRedirectionErrorIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startObservingApplicationLifecycleEvents;
-(void)_stopObservingApplicationLifecycleEvents;
-(id)initWithUserDefaults:(id)arg1 notificationCenter:(id)arg2 announcer:(id)arg3 ;
-(BOOL)shouldBadgeWithRedirectionErrorIndicator;
-(void)_applicationDidEnterBackgroundHandler;
-(void)_recordAppVisitationSinceErrorBadgeIfNecessary;
-(void)_dismissBadgeIfAppVisitationLimitReached;
-(void)setShouldBadgeWithRedirectionErrorIndicator:(BOOL)arg1 ;
-(void)addMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(void)removeMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(void)dealloc;
@end

