/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNLastActivityTracking.h>

@protocol FBClock;
@class NSNotificationCenter, NSMutableDictionary, MNLastActivityTrackingListeningAnnouncer, NSString;

@interface MNTypingLastActivityTracker : NSObject <FBViewerContextClassProvidable, MNLastActivityTracking> {

	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	NSMutableDictionary* _personIdToLastActiveMap;
	NSMutableDictionary* _personIdToLastUpdateMap;
	MNLastActivityTrackingListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startNotificationObservations;
-(void)_stopNotificationObservations;
-(id)lastActivityDateForPersonWithId:(id)arg1 ;
-(id)lastUpdateTimeForPersonWithId:(id)arg1 ;
-(void)addLastActivityTrackingListener:(id)arg1 ;
-(void)removeLastActivityTrackingListener:(id)arg1 ;
-(id)personIdToLastActivityMap;
-(id)initWithNotificationCenter:(id)arg1 clock:(id)arg2 ;
-(void)_didReceiveTypingNotification:(id)arg1 ;
-(void)_updateLastActiveTimeForPersonWithId:(id)arg1 typingState:(int)arg2 ;
-(void)dealloc;
@end
