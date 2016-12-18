/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxEligibilityFetchRunning.h>

@class FBNuxCatalog, FBUserSession, FBNuxCatalogUpdater, NSDate, FBNuxAppConfiguration, NSString;

@interface FBNuxEligibilityFetchRunner : NSObject <FBNuxEligibilityFetchRunning> {

	BOOL _isFetching;
	FBNuxCatalog* _nuxCatalog;
	FBUserSession* _userSession;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSDate* _lastFetchTime;
	FBNuxAppConfiguration* _nuxAppConfiguration;
	BOOL _devMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 nuxAppConfiguration:(id)arg2 nuxCatalog:(id)arg3 nuxCatalogUpdater:(id)arg4 devMode:(BOOL)arg5 ;
-(void)updateNuxEligibilityIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)forceUpdateEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isFetchingEligibility;
-(id)lastFetchTime;
-(void)_updateNuxEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxCatalogWithServerNuxes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_nuxFetchFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

