/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhotoLocationSuggestionViewDelegate.h>

@protocol FBPhotoLocationSuggestionPopoverControllerDelegate;
@class FBPopoverView, UIView, FBUserSession, POPSpringAnimation, NSMutableSet, FBMemPhoto, FBPhotoLocationSuggestionView, NSString;

@interface FBPhotoLocationSuggestionPopoverController : NSObject <FBPhotoLocationSuggestionViewDelegate> {

	FBPopoverView* _popoverView;
	UIView* _parentView;
	FBUserSession* _session;
	CGPoint _viewPosition;
	BOOL _showArrow;
	id<FBPhotoLocationSuggestionPopoverControllerDelegate> _delegate;
	POPSpringAnimation* _scaleAnimation;
	NSMutableSet* _userTouchedPhotos;
	FBMemPhoto* _photo;
	FBPhotoLocationSuggestionView* _suggestionContentView;

}

@property (assign,nonatomic,__weak) id<FBPhotoLocationSuggestionPopoverControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMemPhoto * photo;                                                                //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL popoverDismissed; 
@property (nonatomic,readonly) FBPhotoLocationSuggestionView * suggestionContentView;                             //@synthesize suggestionContentView=_suggestionContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)popoverDismissed;
-(id)initWithParentView:(id)arg1 session:(id)arg2 showArrow:(BOOL)arg3 ;
-(void)showSuggestionForPhoto:(id)arg1 atPointInParentView:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(FBPhotoLocationSuggestionView *)suggestionContentView;
-(void)_layout:(CGPoint)arg1 ;
-(void)_presentPopoverAnimated:(BOOL)arg1 atPointInParentView:(CGPoint)arg2 ;
-(void)_dismissPopoverAnimated:(BOOL)arg1 ;
-(CGSize)_contentSizeForViewInPopover;
-(CGRect)_centeredBounds;
-(void)didAcceptLocationSuggestionForPhoto:(id)arg1 ;
-(void)didRejectLocationSuggestionForPhoto:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoLocationSuggestionPopoverControllerDelegate>)arg1 ;
-(id<FBPhotoLocationSuggestionPopoverControllerDelegate>)delegate;
-(void)_stopAnimating;
-(FBMemPhoto *)photo;
-(void)dismiss:(BOOL)arg1 ;
@end

