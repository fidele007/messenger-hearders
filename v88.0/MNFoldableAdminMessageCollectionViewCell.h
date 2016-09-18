/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNFoldableAdminMessageViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNFoldableAdminMessageView, MNFoldableAdminMessageCollectionViewCellDelegate;
@class UIView, MNFoldableAdminMessageViewFactory, MNGenericAdminMessageViewModel, NSString;

@interface MNFoldableAdminMessageCollectionViewCell : UICollectionViewCell <MNFoldableAdminMessageViewDelegate, FBClassProvidable> {

	UIView*<MNFoldableAdminMessageView> _adminMessageView;
	MNFoldableAdminMessageViewFactory* _adminMessageViewFactory;
	MNGenericAdminMessageViewModel* _viewModel;
	id<MNFoldableAdminMessageCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,copy) MNGenericAdminMessageViewModel * viewModel;                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNFoldableAdminMessageCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAdminMessageViewFactory:(id)arg1 ;
-(void)foldableAdminMessageView:(id)arg1 didUpdateViewState:(long long)arg2 ;
-(void)setDelegate:(id<MNFoldableAdminMessageCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNFoldableAdminMessageCollectionViewCellDelegate>)delegate;
-(MNGenericAdminMessageViewModel *)viewModel;
-(void)setViewModel:(MNGenericAdminMessageViewModel *)arg1 ;
@end
