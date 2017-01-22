/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLLocationManager, CLLocation, FBTimeThrottler, NSString;

@interface MNMessageLiveLocationLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	double _updateInterval;
	/*^block*/id _updateBlock;
	/*^block*/id _failureBlock;
	CLLocationManager* _locationManager;
	CLLocation* _mostRecentLocation;
	FBTimeThrottler* _updateThrottler;
	BOOL _isRequestingLocationUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startRequestingLocationUpdates;
-(void)_createLocationManagerOnMainThreadAndStartRequestingLocationUpdates;
-(void)_createLocationManagerOnMainThread;
-(void)_stopRequestingLocationUpdates;
-(void)_createLocationManagerOnMainThreadAndStopRequestingLocationUpdates;
-(void)stopRequestingLocationUpdates;
-(void)_didReceiveLocationManagerUpdateWithLocation:(id)arg1 ;
-(void)_didReceiveLocationManagerError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 updateInterval:(double)arg2 updateBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)startRequestingLocationUpdates;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_sendLocationUpdate;
@end
