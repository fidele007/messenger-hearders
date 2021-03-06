/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNUserInfoUpdateAction.h>

@protocol MNUserInfoUpdateActionDelegate;
@class MNSettingsTabConfiguration, MNUserSetUpStatePersister, FBMLoggedInUserInfoManager, MNPhoneVerificationCoordinator, FBMUser, NSString;

@interface MNUserInfoPhoneNumberUpdateAction : NSObject <FBClassProvidable, MNUserInfoUpdateAction> {

	MNSettingsTabConfiguration* _settingsTabConfiguration;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNPhoneVerificationCoordinator* _phoneVerificationCoordinator;
	FBMUser* _user;
	id<MNUserInfoUpdateActionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserInfoUpdateActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)presentWithSourceView:(id)arg1 ;
-(id)initWithSettingsTabConfiguration:(id)arg1 userSetUpStatePersister:(id)arg2 loggedInUserInfoManager:(id)arg3 phoneVerificationCoordinator:(id)arg4 ;
-(id)_prefilledPhoneNumber;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)actionTitle;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
@end

