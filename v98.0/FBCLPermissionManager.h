/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBBackgroundFetchObserver.h>

@class FBUserSession, CLLocationManager, FBBackgroundFetchManager, FBBackgroundFetchRequest, NSHashTable, NSString;

@interface FBCLPermissionManager : NSObject <CLLocationManagerDelegate, FBNetworkerRequestDelegate, FBBackgroundFetchObserver> {

	unsigned long long _authorizedStatus;
	FBUserSession* _session;
	CLLocationManager* _locationManager;
	BOOL _monitoringStarted;
	FBBackgroundFetchManager* _backgroundFetchManager;
	FBBackgroundFetchRequest* _fetchRequest;
	id _notificationFetchObserver;
	BOOL _lastGKCheck;
	NSHashTable* _delegates;

}

@property (assign,nonatomic) BOOL locationHistoryEnabled; 
@property (assign,nonatomic) BOOL locationSharingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)handleBackgroundFetchRequest:(id)arg1 ;
-(BOOL)locationHistoryEnabled;
-(void)stopMonitoringPermission;
-(void)setLocationHistoryEnabled:(BOOL)arg1 ;
-(void)setLocationHistoryEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLocationSharingEnabled:(BOOL)arg1 ;
-(void)fetchTrackingAndSharingStates;
-(void)_consistencyCheck;
-(void)_checkAuthorization:(BOOL)arg1 ;
-(void)_performPermissionChangeWithPermission:(BOOL)arg1 ;
-(void)_checkAuthorization:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkAuthorizationWithLocationStatus:(int)arg1 fetchIfNeeded:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_hasPermissionWithAuthorization:(int)arg1 isExpired:(BOOL*)arg2 ;
-(BOOL)_checkGK;
-(BOOL)_updateTrackingSetting:(BOOL)arg1 ;
-(BOOL)_updateSharingSetting:(BOOL)arg1 ;
-(unsigned long long)locationTrackingStatus;
-(id)initWithSession:(id)arg1 locationManager:(id)arg2 backgroundFetchManager:(id)arg3 ;
-(void)startMonitoringPermission;
-(BOOL)locationSharingEnabled;
-(void)removeSubscriber:(id)arg1 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)addSubscriber:(id)arg1 ;
@end

