/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBComposerPhotoOverlaysViewProtocol.h>
#import <Messenger/FBComposerPhotoOverlayAttachmentGestureHandlerDelegate.h>
#import <Messenger/FBMediaGalleryTopBarDelegate.h>

@protocol FBComposerPhotoOverlayAttachmentLogger;
@class FBMediaAddAndTrashButton, NSString, UIImage, UIView, UILabel, NSMutableOrderedSet, FBComposerPhotoOverlayGestureHandlerFactory, FBMediaGallerySecondaryBar, FBMediaGalleryTopBarConfiguration, NSMutableArray, UIImageView, FBMediaGalleryTopBar, FBComposerPhotoOverlayView, FBUserSession;

@interface FBComposerPhotoOverlaysView : UIView <UIGestureRecognizerDelegate, FBComposerPhotoOverlaysViewProtocol, FBComposerPhotoOverlayAttachmentGestureHandlerDelegate, FBMediaGalleryTopBarDelegate> {

	FBMediaAddAndTrashButton* _addDeleteButton;
	NSString* _assetID;
	UIImage* _backgroundImage;
	UIView* _bannerView;
	UILabel* _deleteLabel;
	BOOL _crossedDeletingZone;
	BOOL _deleting;
	UIView* _gesturesView;
	BOOL _hasMovedPhotoOverlayView;
	BOOL _hasRotatedPhotoOverlayView;
	BOOL _hasSizedPhotoOverlayView;
	CGRect _lastVisibleFrameForSelectedAttachment;
	UIView* _lineView;
	id<FBComposerPhotoOverlayAttachmentLogger> _logger;
	CGRect _originalSelectedAttachmentBounds;
	UIImage* _photoOverlayLayer;
	NSMutableOrderedSet* _photoOverlaysApplied;
	FBComposerPhotoOverlayGestureHandlerFactory* _photoOverlayGestureHandlerFactory;
	UIView* _privacyMessageView;
	FBMediaGallerySecondaryBar* _secondaryBar;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	NSMutableArray* _gestureRecognizers;
	UIImageView* _backgroundImageView;
	UIImageView* _overlayImageView;
	FBMediaGalleryTopBar* _mediaGalleryTopBar;
	double _topLayoutGuideLength;
	long long _numberOfPhotoOverlayViews;
	FBComposerPhotoOverlayView* _selectedPhotoOverlayView;
	double _imageRotation;
	FBUserSession* _session;

}

@property (nonatomic,readonly) UIImageView * backgroundImageView;                                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * overlayImageView;                                     //@synthesize overlayImageView=_overlayImageView - In the implementation block
@property (nonatomic,readonly) FBMediaGalleryTopBar * mediaGalleryTopBar;                          //@synthesize mediaGalleryTopBar=_mediaGalleryTopBar - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                          //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) long long numberOfPhotoOverlayViews;                                  //@synthesize numberOfPhotoOverlayViews=_numberOfPhotoOverlayViews - In the implementation block
@property (nonatomic,readonly) FBComposerPhotoOverlayView * selectedPhotoOverlayView;              //@synthesize selectedPhotoOverlayView=_selectedPhotoOverlayView - In the implementation block
@property (nonatomic,readonly) double imageRotation;                                               //@synthesize imageRotation=_imageRotation - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                            //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)overlayImageView;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)galleryTopBarDidTapSelectButton:(id)arg1 ;
-(void)galleryTopBarDidTapBackButton:(id)arg1 ;
-(FBMediaGalleryTopBar *)mediaGalleryTopBar;
-(CGRect)maxBackgroundImageSize;
-(id)addImageToUseForBarForPhotoOverlay:(id)arg1 ;
-(id)addAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(id)deleteAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(void)_addDeleteButtonTapped;
-(void)_addGestureRecognizersToView:(id)arg1 ;
-(CGRect)_addDeleteButtonFrame;
-(void)_animatePhotoOverlayView:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didAddPhotoOverlayView:(id)arg2 ;
-(void)setSelectedPhotoOverlayView:(FBComposerPhotoOverlayView *)arg1 ;
-(long long)numberOfPhotoOverlayViews;
-(void)setNumberOfPhotoOverlayViews:(long long)arg1 ;
-(id)createPhotoOverlayViewForPhotoOverlay:(id)arg1 ;
-(id)createPhotoOverlayForOverlayView:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapCancel:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapDone:(id)arg1 ;
-(CGRect)_computedLastVisibleFrameFromFrame:(CGRect)arg1 ;
-(CGRect)_deleteableRectForSelectedAttachment;
-(void)_handleDeletionZoneAnimation;
-(void)_deletePhotoOverlayView:(id)arg1 ;
-(void)_handlePanGestureEndedCompletion:(/*^block*/id)arg1 ;
-(void)didChangePhotoAttachmentOverlay;
-(FBComposerPhotoOverlayView *)selectedPhotoOverlayView;
-(double)_deletableHeightForSelectedAttachment;
-(void)composerPhotoOverlaysViewDidTapAddAttachmentsButton:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didRemovePhotoOverlayView:(id)arg2 ;
-(void)photoOverlayAttachmentGestureHandler:(id)arg1 didChangeGesture:(id)arg2 ;
-(void)photoOverlayAttachmentGestureHandler:(id)arg1 didFinishGesture:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 photoOverlayLayer:(id)arg2 backgroundImage:(id)arg3 imageRotation:(double)arg4 topBarConfiguration:(id)arg5 session:(id)arg6 logger:(id)arg7 assetID:(id)arg8 bannerView:(id)arg9 privacyMessageView:(id)arg10 ;
-(id)getOverlayLayer;
-(void)addPhotoOverlayView:(id)arg1 ;
-(void)removePhotoOverlayView:(id)arg1 ;
-(void)replacePhotoOverlayView:(id)arg1 withPhotoOverlayView:(id)arg2 ;
-(void)handleInitialPhotoOverlayAttachments:(id)arg1 ;
-(id)getPhotoOverlayAttachmentsInformation;
-(void)handlePhotoOverlaysOutofRange;
-(void)_didTapAddAttachmentsButton;
-(void)fadeOutUnselectedOverlays;
-(void)fadeInUnselectedOverlays;
-(double)imageRotation;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)_handleDoubleTap:(id)arg1 ;
-(FBUserSession *)session;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
@end
