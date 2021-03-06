/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBZoomingPhotoViewDelegate.h>
#import <Messenger/MNPhotoViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSavePhotoControlling, MNPhotoViewControllerDelegate;
@class MNPhotoViewImageDownloadController, UILongPressGestureRecognizer, UITapGestureRecognizer, UILabel, FBPagingView, FBDismissalDoneButton, UIButton, UIImageView, NSArray, NSString;

@interface MNPhotoViewController : UIViewController <FBPagingViewDelegate, FBPagingViewDataSource, UIGestureRecognizerDelegate, FBZoomingPhotoViewDelegate, MNPhotoViewDelegate, FBClassProvidable> {

	MNPhotoViewImageDownloadController* _photoViewImageDownloadController;
	id<MNSavePhotoControlling> _savePhotoController;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	CGRect _shareActionSheetRect;
	UILabel* _titleLabel;
	FBPagingView* _pagingView;
	FBDismissalDoneButton* _doneButton;
	UIButton* _shareButton;
	UIImageView* _backgroundGradientView;
	BOOL _chromeHidden;
	BOOL _shouldShowForwardOption;
	BOOL _shouldShowShareButton;
	NSArray* _photoViewModels;
	unsigned long long _photoIndex;
	id<MNPhotoViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * photoViewModels;                                        //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (assign,nonatomic) unsigned long long photoIndex;                                  //@synthesize photoIndex=_photoIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldShowForwardOption;                                   //@synthesize shouldShowForwardOption=_shouldShowForwardOption - In the implementation block
@property (assign,nonatomic) BOOL shouldShowShareButton;                                     //@synthesize shouldShowShareButton=_shouldShowShareButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)_didTapShareButton:(id)arg1 ;
-(void)setPhotoViewModels:(NSArray *)arg1 ;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(void)setShouldShowShareButton:(BOOL)arg1 ;
-(void)setShouldShowForwardOption:(BOOL)arg1 ;
-(NSArray *)photoViewModels;
-(void)photoViewWillDisplayImage:(id)arg1 ;
-(void)photoViewDidEndDisplayImage:(id)arg1 ;
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingView:(id)arg1 didEndDisplayingView:(id)arg2 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(void)pagingView:(id)arg1 willLayoutView:(id)arg2 ;
-(void)pagingView:(id)arg1 didLayoutView:(id)arg2 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)photoIndex;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(void)_presentShareActionSheetWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(void)_didSelectForward;
-(void)_didSelectSave;
-(id)_currentPhotoView;
-(id)_currentZoomingPhotoView;
-(void)_setChromeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_maximumZoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setChromeHidden:(BOOL)arg1 ;
-(BOOL)shouldShowForwardOption;
-(BOOL)shouldShowShareButton;
-(void)_resetZoom:(BOOL)arg1 ;
-(void)setDelegate:(id<MNPhotoViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<MNPhotoViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_handleTapGesture:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)_dismiss;
-(void)updateTitleLabel;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)_didTapDoneButton:(id)arg1 ;
-(unsigned long long)numberOfPagesInPagingView:(id)arg1 ;
@end

