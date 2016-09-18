/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPopoverControllerDelegate.h>

@protocol FBSideFeedUnitContentViewDelegate;
@class UIButton, FBPopoverActionSheet, UIImage, NSArray, UIView, NSString;

@interface FBSideFeedUnitContentView : UIView <FBPopoverControllerDelegate> {

	UIButton* _xOutPopoverButton;
	FBPopoverActionSheet* _popoverActionSheet;
	UIImage* _popoverXOutButtonItemImage;
	NSArray* _accessibleElements;
	id<FBSideFeedUnitContentViewDelegate> _delegate;
	UIView* _contentView;
	NSString* _popoverXOutButtonItemText;
	NSString* _popoverXOutButtonItemDetailText;
	UIEdgeInsets _contentViewInsets;

}

@property (assign,nonatomic,__weak) id<FBSideFeedUnitContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;                                     //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
@property (assign,nonatomic) BOOL showXOutButton; 
@property (nonatomic,copy) NSString * popoverXOutButtonItemText;                                 //@synthesize popoverXOutButtonItemText=_popoverXOutButtonItemText - In the implementation block
@property (nonatomic,copy) NSString * popoverXOutButtonItemDetailText;                           //@synthesize popoverXOutButtonItemDetailText=_popoverXOutButtonItemDetailText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)setShowXOutButton:(BOOL)arg1 ;
-(void)_updateAccessibilityElements;
-(void)_cleanupPopover;
-(void)_createXOutButton;
-(BOOL)showXOutButton;
-(void)_xOutButtonTapped;
-(void)_dissmisPopoverWhenRotatingToPortrait:(id)arg1 ;
-(void)_xOutPopoverButtonTapped;
-(void)setPopoverXOutButtonItemText:(NSString *)arg1 ;
-(NSString *)popoverXOutButtonItemText;
-(NSString *)popoverXOutButtonItemDetailText;
-(void)setPopoverXOutButtonItemDetailText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBSideFeedUnitContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBSideFeedUnitContentViewDelegate>)delegate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

