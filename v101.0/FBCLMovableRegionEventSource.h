/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>
#import <Messenger/FBCLEventChannelListener.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Messenger/FBCLLocationUpdateListener.h>

@class FBUserSession, FBCLEventChannel, FBCLLocationUpdateListenerAnnouncer, CLLocationManager, CLCircularRegion, NSString;

@interface FBCLMovableRegionEventSource : FBCLEventSource <FBCLEventChannelListener, CLLocationManagerDelegate, FBCLLocationUpdateListener> {

	BOOL _isStarted;
	FBUserSession* _session;
	FBCLEventChannel* _channel;
	FBCLLocationUpdateListenerAnnouncer* _locationUpdateAnnouncer;
	CLLocationManager* _locationManager;
	CLCircularRegion* _trackingRegion;
	double _regionRadius;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 eventChannel:(id)arg2 locationUpdateAnnouncer:(id)arg3 locationManager:(id)arg4 ;
-(id)queuePerformer;
-(void)onEvent:(id)arg1 ;
-(void)locationUpdateDidFinishWithLocations:(id)arg1 ;
-(void)_processLocation:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

