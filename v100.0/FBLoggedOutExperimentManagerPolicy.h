/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentManagerPolicy.h>

@class FBExperimentDebugHelper, NSString;

@interface FBLoggedOutExperimentManagerPolicy : NSObject <FBExperimentManagerPolicy> {

	FBExperimentDebugHelper* _debugHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmployee;
-(id)allExperimentsInCatalogAsShortDescription;
-(id)gatekeepers;
-(BOOL)sessionless;
-(void)setupDebugHelperWithExperimentCatalog:(id)arg1 debugInfoProvider:(id)arg2 ;
-(id)plistKey;
-(void)fetchWithExperimentCatalog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 withAllGroupsAndParameters:(BOOL)arg3 scenePath:(id)arg4 ;
-(double)expirationTimeIntervalInSeconds;
-(void)loadExperiments:(/*^block*/id)arg1 ;
-(void)loadOverrides:(/*^block*/id)arg1 ;
-(void)persistExperiments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)persistOverrides:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)store;
-(id)keyValueStore;
@end

