/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNEditUsernameViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserInfoUpdateAction.h>

@protocol MNModalPresentation, FBProvider, MNUserInfoUpdateActionDelegate;
@class MNSettingsTabConfiguration, FBAnalytics, FBMUser, NSString;

@interface MNUserInfoChangeUsernameAction : NSObject <MNEditUsernameViewControllerDelegate, FBClassProvidable, MNUserInfoUpdateAction> {

	MNSettingsTabConfiguration* _settingsTabConfiguration;
	id<MNModalPresentation> _modalPresenter;
	id<FBProvider> _editUsernameViewControllerProvider;
	FBAnalytics* _analytics;
	FBMUser* _user;
	id<MNUserInfoUpdateActionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserInfoUpdateActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentWithSourceView:(id)arg1 ;
-(id)initWithSettingsTabConfiguration:(id)arg1 modalPresenter:(id)arg2 editUsernameViewControllerProvider:(id)arg3 analytics:(id)arg4 ;
-(void)editUsernameViewControllerDidCancel:(id)arg1 ;
-(void)editUsernameViewControllerDidSaveSuccess:(id)arg1 ;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(id)actionTitle;
@end
