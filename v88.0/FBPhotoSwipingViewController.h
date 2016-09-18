/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPhotoSwipingViewDelegate.h>

@protocol FBPhotoSwipingViewDelegate;
@class UIScrollView, UIImage, UIImageView, NSString;

@interface FBPhotoSwipingViewController : UIViewController <FBPhotoSwipingViewDelegate> {

	BOOL _showSwipeNuxAnimation;
	id<FBPhotoSwipingViewDelegate> _delegate;
	UIScrollView* _containingScrollView;

}

@property (assign,nonatomic,__weak) id<FBPhotoSwipingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBEditableIdentifiablePhoto> photo; 
@property (assign,nonatomic,__weak) UIScrollView * containingScrollView;                  //@synthesize containingScrollView=_containingScrollView - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIImageView * currentImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfPagesInPhotoSwipingView:(id)arg1 ;
-(void)photoSwipingView:(id)arg1 photoAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)photoSwipingView:(id)arg1 didSwipeToIndex:(unsigned long long)arg2 automatically:(BOOL)arg3 ;
-(unsigned long long)photoSwipingView:(id)arg1 indexForPhoto:(id)arg2 ;
-(BOOL)shouldShowInstructionalNUXForSwipingView:(id)arg1 ;
-(BOOL)shouldShowReminderNUXForSwipingView:(id)arg1 ;
-(void)didEndShowingInstructionalNuxForPhotoSwipingView:(id)arg1 ;
-(void)updatePhotosForSwipingFromDataSource;
-(void)updateCurrentPhotoFromDataSource;
-(void)addSubviewBelowScrollView:(id)arg1 ;
-(void)swipeToIndex:(unsigned long long)arg1 ;
-(void)setContainingScrollView:(UIScrollView *)arg1 ;
-(UIImageView *)currentImageView;
-(UIScrollView *)containingScrollView;
-(void)_showSwipeNuxAnimationIfNecessary;
-(id)photoSwipingView;
-(id)initWithShowSwipeNuxAnimation:(BOOL)arg1 ;
-(void)setPhotoAndUpdateForSwipingNuxIfNeccesary:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoSwipingViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPhotoSwipingViewDelegate>)delegate;
-(void)loadView;
-(UIImage *)image;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<FBEditableIdentifiablePhoto>)photo;
@end
