/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSingletonClassProvidable.h>

@class MNUrlRedirectHandler, FBKeychainItem, FBKeychainItemController, FBFacebookCredentials, NSString;

@interface MNMainAppCredentialsFetcher : NSObject <FBSingletonClassProvidable> {

	MNUrlRedirectHandler* _urlRedirectHandler;
	FBKeychainItem* _mainAppKeychainItem;
	FBKeychainItemController* _mainAppKeychainItemController;
	BOOL _mainAppSessionKeychainItemInvalidated;
	BOOL _didAttemptReloadingMainAppKeychainItem;

}

@property (nonatomic,readonly) BOOL canLoginWithMainApp; 
@property (nonatomic,readonly) FBFacebookCredentials * mainAppCredentials; 
@property (nonatomic,copy,readonly) NSString * mainAppUserName; 
@property (nonatomic,copy,readonly) NSString * mainAppUserID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)reloadMainAppCredentials_DEPRECATED_DO_NOT_USE;
-(void)invalidateMainAppCredentials;
-(NSString *)mainAppUserID;
-(NSString *)mainAppUserName;
-(FBFacebookCredentials *)mainAppCredentials;
-(BOOL)canLoginWithMainApp;
-(id)initWithUrlRedirectHandler:(id)arg1 mainAppKeychainItemController:(id)arg2 ;
-(void)_reloadMainAppCredentialsWithDidReloadBlock:(/*^block*/id)arg1 ;
-(void)_didLoadMainAppSessionKeychainItem:(id)arg1 ;
-(void)_didFailLoadingMainAppSessionKeychainItemWithError:(id)arg1 ;
-(void)fetchMainAppCredentialsWithDidFetchBlock:(/*^block*/id)arg1 isUnavailableBlock:(/*^block*/id)arg2 ;
@end
