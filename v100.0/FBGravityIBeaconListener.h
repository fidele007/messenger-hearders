/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBCancelable, FBGravityIBeaconListenerDelegate;
@class FBGravityIBeaconExperimentContext, CLLocationManager, NSMutableDictionary, CLBeaconRegion, NSDate, NSString;

@interface FBGravityIBeaconListener : NSObject <CLLocationManagerDelegate> {

	FBGravityIBeaconExperimentContext* _context;
	CLLocationManager* _locationManager;
	NSMutableDictionary* _iBeacons;
	CLBeaconRegion* _mainRegion;
	BOOL _isRanging;
	BOOL _isListening;
	unsigned long long _backgroundTaskIdentifier;
	id<FBCancelable> _rangeTimeoutCancel;
	NSDate* _rangeStartTime;
	id<FBGravityIBeaconListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGravityIBeaconListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isStrictSubregion:(id)arg1 ;
-(void)onFinishedRanging;
-(id)iBeaconsInRangeNewerThan:(id)arg1 ;
-(void)_updateMonitoredRegions;
-(id)_identifiersToMonitor;
-(id)_newRegionForIBeacon:(id)arg1 ;
-(id)iBeaconsInRange;
-(void)setDelegate:(id<FBGravityIBeaconListenerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGravityIBeaconListenerDelegate>)delegate;
-(void)_endBackgroundTask;
-(void)startListening;
-(void)stopListening;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
-(void)_startBackgroundTask;
-(BOOL)isListening;
@end

