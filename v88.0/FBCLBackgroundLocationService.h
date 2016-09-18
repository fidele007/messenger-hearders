/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLPermissionManagerDelegate.h>
#import <Messenger/FBCLPolicyEngineDelegate.h>
#import <Messenger/FBAppService.h>
#import <Messenger/FBScenePathHolding.h>

@class FBCLEventChannel, NSArray, FBCLLocationUpdaterDecider, FBUserSession, FBCLTickEventSource, FBCLPermissionManager, FBBackgroundTaskHandler, FBCLLocationLogger, FBScenePath, FBLocationGraphRequestFactory, FBGeoFenceEventListener, FBGeoFenceLogger, FBCLLocationCache, FBCLLocationUpdaterSender, CLLocation, NSString;

@interface FBCLBackgroundLocationService : NSObject <FBCLPermissionManagerDelegate, FBCLPolicyEngineDelegate, FBAppService, FBScenePathHolding> {

	FBCLEventChannel* _eventChannel;
	NSArray* _producers;
	FBCLLocationUpdaterDecider* _decider;
	FBUserSession* _session;
	FBCLTickEventSource* _tickEventProd;
	FBCLPermissionManager* _permissionManager;
	unsigned long long _taskIdent;
	FBBackgroundTaskHandler* _backgroundTaskHandler;
	BOOL _isStarted;
	FBCLLocationLogger* _logger;
	FBScenePath* _scenePath;
	FBLocationGraphRequestFactory* _requestFactory;
	FBGeoFenceEventListener* _geoFenceVisitListener;
	FBGeoFenceLogger* _geofenceLogger;
	long long _currentCollectionScheme;
	FBCLLocationCache* _locationCache;
	FBCLLocationUpdaterSender* _locationSender;

}

@property (assign,nonatomic) long long currentCollectionScheme;                       //@synthesize currentCollectionScheme=_currentCollectionScheme - In the implementation block
@property (nonatomic,retain) FBCLLocationCache * locationCache;                       //@synthesize locationCache=_locationCache - In the implementation block
@property (nonatomic,retain) FBCLLocationUpdaterSender * locationSender;              //@synthesize locationSender=_locationSender - In the implementation block
@property (nonatomic,readonly) CLLocation * mostRecentLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_startService;
-(void)setLocationHistoryEnabled:(BOOL)arg1 ;
-(void)updateLocationSettings;
-(void)setLocationHistoryEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLocationSharingEnabled:(BOOL)arg1 ;
-(BOOL)updateLocationWithDesiredAccuracy:(double)arg1 acquisionTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 backgroundTaskHandler:(id)arg2 eventChannel:(id)arg3 locationCache:(id)arg4 locationLogger:(id)arg5 ;
-(void)_stopTaskHandler;
-(void)_startBackgroundLocation:(/*^block*/id)arg1 ;
-(void)_stopBackgroundLocation:(/*^block*/id)arg1 ;
-(void)setLocationSender:(FBCLLocationUpdaterSender *)arg1 ;
-(void)setCurrentCollectionScheme:(long long)arg1 ;
-(id)eventSourcesForDefaultCollectionScheme;
-(void)_teardownEventProducers;
-(unsigned long long)_invalidateIdentifier;
-(BOOL)_updateLocationWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)eventSourcesForLowPowerCollectionScheme;
-(void)permissionManager:(id)arg1 permissionDidChanged:(BOOL)arg2 ;
-(void)policyEngine:(id)arg1 didAdoptCollectionScheme:(long long)arg2 ;
-(BOOL)updateLocationWithDesiredAccuracy:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)currentCollectionScheme;
-(FBCLLocationCache *)locationCache;
-(void)setLocationCache:(FBCLLocationCache *)arg1 ;
-(FBCLLocationUpdaterSender *)locationSender;
-(CLLocation *)mostRecentLocation;
-(void)increaseTickFrequency;
-(void)dealloc;
-(BOOL)updateLocation:(/*^block*/id)arg1 ;
@end
