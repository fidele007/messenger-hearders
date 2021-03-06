/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>
#import <FBSharedFramework/MNMessageCellElementController.h>

@protocol FBProvider;
@class MNMessageMontageReplyContextView, MNMessageMontageReplyContextViewModel, MNMessageStore, MNMontageThumbnailController, MNThreadMontageThumbnailFactory, FBMLoggedInUserInfoManager, MNThreadMontageThumbnail, NSString;

@interface MNMessageMontageReplyContextController : NSObject <FBClassProvidable, MNMessageCellElementController> {

	MNMessageMontageReplyContextView* _view;
	MNMessageMontageReplyContextViewModel* _viewModel;
	id<FBProvider> _montageNavigationCoordinatorProvider;
	MNMessageStore* _messageStore;
	MNMontageThumbnailController* _montageThumbnailController;
	MNThreadMontageThumbnailFactory* _montageThumbnailFactory;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	unsigned long long _messageFetchRequestId;
	MNThreadMontageThumbnail* _montageThumbnail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)didTapInThread:(id)arg1 actionHandler:(id)arg2 ;
-(void)_fetchMessageLocallyWithMessageId:(id)arg1 threadKey:(id)arg2 ;
-(void)_handleMessageResponse:(id)arg1 forMessageId:(id)arg2 threadKey:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
@end

