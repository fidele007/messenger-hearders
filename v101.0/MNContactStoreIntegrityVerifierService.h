/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, FBAnalytics, FBContactStore, MNContactSyncPolicy, UIApplication, NSString;

@interface MNContactStoreIntegrityVerifierService : NSObject <MNServiceControllable, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBContactStore* _contactStore;
	MNContactSyncPolicy* _contactSyncPolicy;
	id<FBServiceTransactionMutating> _transactionToken;
	UIApplication* _application;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_verifyContactStore;
-(void)_didReceiveGraphQLResponse:(id)arg1 ;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_setNextVerificationDateWithTimeInterval:(double)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)handleIdle;
@end
