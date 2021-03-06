/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNUserSetUpStatePersister, NSString;

@interface MNUserSetUpFlowViewControllerProvider : NSObject <FBClassProvidable> {

	id<FBProvider> _enterPhoneVCProvider;
	id<FBProvider> _requirePushVCProvider;
	id<FBProvider> _requestCIVCProvider;
	id<FBProvider> _welcomeVCProvider;
	id<FBProvider> _inviteFriendsVCProvider;
	id<FBProvider> _userSetUpPersisterProvider;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	MNUserSetUpStatePersister* _userSetUpPersister;

}

@property (nonatomic,readonly) BOOL shouldPresentUserSetUpFlow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldPresentUserSetUpFlow;
-(id)providersForSetUpFlow;
-(id)initWithEnterPhoneVCProvider:(id)arg1 requirePushVCProvider:(id)arg2 requestCIVCProvider:(id)arg3 welcomeVCProvider:(id)arg4 inviteFriendsVCProvider:(id)arg5 userSetUpStatePersisterProvider:(id)arg6 userSetUpFlowConfiguratorProvider:(id)arg7 ;
@end

