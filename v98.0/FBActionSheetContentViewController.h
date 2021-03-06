/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@class UIScrollView, FBActionSheetContentView, FBActionSheetButtonMetrics, FBPopoverActionSheetKeyboardShortcuts, UIView, FBPopoverActionSheet, NSArray;

@interface FBActionSheetContentViewController : UIViewController {

	UIScrollView* _scrollView;
	FBActionSheetContentView* _contentView;
	FBActionSheetContentView* _previousContentView;
	FBActionSheetButtonMetrics* _metrics;
	FBPopoverActionSheetKeyboardShortcuts* _keyboardShortcuts;
	UIView* _headerView;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (nonatomic,copy) NSArray * buttonItems; 
@property (nonatomic,retain) UIView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) FBPopoverActionSheet * popoverActionSheet;              //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
+(void)setKeyboardShortcutsEnabled:(BOOL)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)setButtonItems:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(void)invalidateFontSize;
-(CGPoint)_translationForAnimation:(unsigned long long)arg1 ;
-(id)_translationAnimationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSArray *)buttonItems;
-(void)setButtonItems:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)initWithMetrics:(id)arg1 ;
@end

