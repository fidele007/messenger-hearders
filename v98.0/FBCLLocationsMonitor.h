/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLLocationUpdateListener.h>

@protocol OS_dispatch_queue;
@class FBCLLocationUpdateListenerAnnouncer, NSObject, FBUserSession, FBCLEventChannel, NSString;

@interface FBCLLocationsMonitor : NSObject <FBCLLocationUpdateListener> {

	FBCLLocationUpdateListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _monitorQueue;
	BOOL _isStarted;
	FBUserSession* _session;
	FBCLEventChannel* _eventChannel;

}

@property (nonatomic,readonly) FBCLEventChannel * eventChannel;              //@synthesize eventChannel=_eventChannel - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isStarted;                               //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 locationUpdateAnnouncer:(id)arg2 eventChannel:(id)arg3 ;
-(void)locationUpdateDidFinishWithLocations:(id)arg1 ;
-(/*^block*/id)workBlock;
-(FBCLEventChannel *)eventChannel;
-(void)stop;
-(void)start;
-(BOOL)isStarted;
-(FBUserSession *)session;
-(BOOL)shouldStart;
@end
