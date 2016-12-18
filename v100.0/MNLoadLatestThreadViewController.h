/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNExtensionThreadDataPreparing, MNAvatarImageDecorating, MNMessagePhotosLayoutStrategy;
@class MNInboxViewModelSubscriptionService, NSNumber, MNProfileImageViewController, MNExtensionMessageCellRegistrar, UILabel, NSString;

@interface MNLoadLatestThreadViewController : UIViewController <FBClassProvidable> {

	MNInboxViewModelSubscriptionService* _inboxVMSubscriptionService;
	NSNumber* _subscriptionId;
	id<MNExtensionThreadDataPreparing> _loader;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecorating;
	id<MNMessagePhotosLayoutStrategy> _messagePhotosLayoutStrategy;
	MNExtensionMessageCellRegistrar* _extensionMessageCellRegistrar;
	UILabel* _nameLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_handleViewModel:(id)arg1 ;
-(void)_createMSGVCWithViewModel:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
