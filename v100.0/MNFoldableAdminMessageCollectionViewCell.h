/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNFoldableAdminMessageViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNCollectionViewLayoutAttributesTracking.h>

@protocol MNFoldableAdminMessageView, MNFoldableAdminMessageCollectionViewCellDelegate;
@class UIView, MNFoldableAdminMessageViewFactory, MNGenericAdminMessageViewModel, UICollectionViewLayoutAttributes, NSString;

@interface MNFoldableAdminMessageCollectionViewCell : UICollectionViewCell <MNFoldableAdminMessageViewDelegate, FBClassProvidable, MNCollectionViewLayoutAttributesTracking> {

	UIView*<MNFoldableAdminMessageView> _adminMessageView;
	MNFoldableAdminMessageViewFactory* _adminMessageViewFactory;
	MNGenericAdminMessageViewModel* _viewModel;
	id<MNFoldableAdminMessageCollectionViewCellDelegate> _delegate;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes;                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
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
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(MNGenericAdminMessageViewModel *)viewModel;
-(void)setViewModel:(MNGenericAdminMessageViewModel *)arg1 ;
@end

