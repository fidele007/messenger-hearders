/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMessagePhotosLayoutStrategy, MNPhotoViewImageDownloadControlling, MNPhotosViewDelegate;
@class NSArray, UIImageView, NSMutableArray, MNPhotoViewNodeReusePool, MNPhotosViewMaskAttributes;

@interface MNPhotosView : UIView {

	id<MNMessagePhotosLayoutStrategy> _photosLayoutStrategy;
	int _photoAttachmentImageSize;
	unsigned long long _imageFlags;
	CGRect _lastLayoutBounds;
	NSArray* _photoLayoutSpecs;
	UIImageView* _photosMaskingOverlayView;
	NSMutableArray* _photoViewNodes;
	id<MNPhotoViewImageDownloadControlling> _photoViewImageDownloadController;
	MNPhotoViewNodeReusePool* _photoViewNodeReusePool;
	BOOL _photosSending;
	BOOL _alignsToRight;
	NSArray* _photoViewModels;
	id<MNPhotosViewDelegate> _delegate;
	MNPhotosViewMaskAttributes* _photosViewMaskAttributes;

}

@property (nonatomic,copy,readonly) NSArray * photoViewModels;                                          //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotosViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL photosSending;                                                        //@synthesize photosSending=_photosSending - In the implementation block
@property (nonatomic,copy,readonly) MNPhotosViewMaskAttributes * photosViewMaskAttributes;              //@synthesize photosViewMaskAttributes=_photosViewMaskAttributes - In the implementation block
@property (nonatomic,readonly) BOOL alignsToRight;                                                      //@synthesize alignsToRight=_alignsToRight - In the implementation block
-(void)_logInlinePhotoViews:(id)arg1 ;
-(void)_updateVisiblePhotoViewNodes;
-(void)_updatePhotosOverlay;
-(void)_recyclePhotoViewNode:(id)arg1 ;
-(id)_photoViewNodeForModel:(id)arg1 ;
-(void)_addMaskViewForPhotoViewNodeIfNeeded:(id)arg1 ;
-(void)_logInlinePhotoView:(id)arg1 numImages:(int)arg2 ;
-(id)_dequeuePhotoViewNodeForModel:(id)arg1 ;
-(void)_setUpPhotoViewNode:(id)arg1 withPhotoViewModel:(id)arg2 photoAttachmentImageSize:(int)arg3 imageFlags:(unsigned long long)arg4 ;
-(id)_strongDelegate;
-(void)_generateLayoutSpecsForPhotoViewModels;
-(void)_updatePhotoMasks;
-(id)initWithFrame:(CGRect)arg1 photoViewImageDownloadController:(id)arg2 photoViewNodeReusePool:(id)arg3 photosLayoutStrategy:(id)arg4 ;
-(void)setPhotoViewModels:(id)arg1 photoAttachmentImageSize:(int)arg2 imageFlags:(unsigned long long)arg3 photosViewMaskAttributes:(id)arg4 alignsToRight:(BOOL)arg5 ;
-(void)setPhotosSending:(BOOL)arg1 ;
-(CGRect)closeFrameForPhotoView:(id)arg1 ;
-(id)maskForPhotoViewModel:(id)arg1 ;
-(id)photoViewForPhotoViewModel:(id)arg1 ;
-(id)photoViewNodeAtLocation:(CGPoint)arg1 ;
-(void)openPhotoWithViewModel:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)photoViewModels;
-(BOOL)photosSending;
-(MNPhotosViewMaskAttributes *)photosViewMaskAttributes;
-(BOOL)alignsToRight;
-(void)setDelegate:(id<MNPhotosViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPhotosViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
@end

