/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNStickerPreviewing.h>

@protocol FBStickerResourceManager, MNMediaCollectionViewCellDelegate;
@class UIImageView, UIView, UIButton, FBShimmeringView, UIAccessibilityElement, FBLazyCreator, MNPhotoView, FBMStickerView, MNSimpleVideoPreviewView, MNMediaCollectionIconView, NSIndexPath, MNTextAndAttachmentForwardContent, MNMediaCollectionCellViewModel, NSString;

@interface MNMediaCollectionViewCell : UICollectionViewCell <MNPhotoPreviewing, MNStickerPreviewing> {

	UIImageView* _strokeView;
	double _scrollOffset;
	double _checkmarkOffset;
	UIView* _blurView;
	UIButton* _sendButton;
	UIView* _mediaContainerView;
	UIImageView* _blueCheckImageView;
	UIImageView* _checkImageView;
	FBShimmeringView* _shimmeringView;
	UIAccessibilityElement* _mediaElement;
	UIAccessibilityElement* _sendButtonElement;
	UIAccessibilityElement* _appIconElement;
	FBLazyCreator* _accessibleElementsCreator;
	MNPhotoView* _photoView;
	FBMStickerView* _stickerView;
	MNSimpleVideoPreviewView* _videoPreview;
	MNMediaCollectionIconView* _iconView;
	NSIndexPath* _indexPath;
	MNTextAndAttachmentForwardContent* _content;
	MNMediaCollectionCellViewModel* _viewModel;
	id<FBStickerResourceManager> _stickerResourceManager;
	UIView* _decorateView;
	id<MNMediaCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) MNPhotoView * photoView;                                          //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) FBMStickerView * stickerView;                                     //@synthesize stickerView=_stickerView - In the implementation block
@property (nonatomic,readonly) MNSimpleVideoPreviewView * videoPreview;                          //@synthesize videoPreview=_videoPreview - In the implementation block
@property (nonatomic,readonly) MNMediaCollectionIconView * iconView;                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) MNTextAndAttachmentForwardContent * content;                        //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) MNMediaCollectionCellViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<FBStickerResourceManager> stickerResourceManager;                //@synthesize stickerResourceManager=_stickerResourceManager - In the implementation block
@property (nonatomic,retain) UIView * decorateView;                                              //@synthesize decorateView=_decorateView - In the implementation block
@property (assign,nonatomic,__weak) id<MNMediaCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBStickerResourceManager>)stickerResourceManager;
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableStickerAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)_createAccessibleElementsCreator;
-(void)_onSelectTapSend:(id)arg1 ;
-(id)_createAccessibleElements;
-(void)_updateStrokeView;
-(void)_layoutCheckView;
-(void)_layoutIconView;
-(void)_updateBlurView;
-(void)_updateCheckImage;
-(void)_updateIconView;
-(void)_updateMediaContainerView;
-(void)_initBlurViewIfNeeded;
-(void)_initSendButtonIfNeeded;
-(void)_photoPreviewSendAction;
-(void)_stickerPreviewSendAction;
-(void)_updateAccessibleElements;
-(void)setVideoPreview:(MNSimpleVideoPreviewView *)arg1 ;
-(void)setCheckmarkOffset:(double)arg1 ;
-(void)setHidesIcon:(BOOL)arg1 ;
-(MNSimpleVideoPreviewView *)videoPreview;
-(UIView *)decorateView;
-(void)setDecorateView:(UIView *)arg1 ;
-(void)setStickerResourceManager:(id<FBStickerResourceManager>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMediaCollectionViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaCollectionViewCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(MNTextAndAttachmentForwardContent *)content;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)stopLoading;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setContent:(MNTextAndAttachmentForwardContent *)arg1 ;
-(void)startLoading;
-(MNMediaCollectionCellViewModel *)viewModel;
-(void)setViewModel:(MNMediaCollectionCellViewModel *)arg1 ;
-(MNPhotoView *)photoView;
-(FBMStickerView *)stickerView;
-(MNMediaCollectionIconView *)iconView;
-(void)setScrollOffset:(double)arg1 ;
-(void)_updateStickerView;
-(void)_updateSendButton;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
@end

