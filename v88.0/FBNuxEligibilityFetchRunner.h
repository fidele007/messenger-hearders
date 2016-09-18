/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
@end

