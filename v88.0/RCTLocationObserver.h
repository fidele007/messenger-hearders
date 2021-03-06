/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTEventEmitter.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSDictionary* _lastLocationEvent;
	NSMutableArray* _pendingRequests;
	BOOL _observingLocation;
	UIEdgeInsets _observerOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__1750;
+(id)__rct_export__1892;
+(id)__rct_export__2023;
+(void)load;
-(id)supportedEvents;
-(id)methodQueue;
-(void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 ;
-(void)getCurrentPosition:(UIEdgeInsets)arg1 withSuccessCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)timeout:(id)arg1 ;
-(void)startObserving:(UIEdgeInsets)arg1 ;
-(void)stopObserving;
@end

