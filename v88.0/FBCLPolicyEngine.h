/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBCLPolicyEngineDelegate;
@class CLLocationManager, NSString;

@interface FBCLPolicyEngine : NSObject <CLLocationManagerDelegate> {

	shared_ptr<facebook::location::PolicyEngineBase>* _policyEngine;
	shared_ptr<(anonymous namespace)::FBCLPlatform>* _platform;
	CLLocationManager* _locationManager;
	id<FBCLPolicyEngineDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCLPolicyEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_addPolicy:(id)arg1 ;
-(void)onLocationUpdate:(id)arg1 ;
-(id)initWithPolicyEngine:(const shared_ptr<facebook::location::PolicyEngineBase>*)arg1 ;
-(void)adoptCollectionScheme:(long long)arg1 ;
-(void)beginMonitoringRegion:(const Region*)arg1 ;
-(void)endMonitoringRegion:(const Region*)arg1 ;
-(void)setDelegate:(id<FBCLPolicyEngineDelegate>)arg1 ;
-(id)init;
-(id<FBCLPolicyEngineDelegate>)delegate;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
@end

