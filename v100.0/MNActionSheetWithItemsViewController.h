/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNActionSheetPresentationDelegate;
@class UIView, NSArray, MNActionSheetCancelItem, MNActionSheetWithItemsView, NSString;

@interface MNActionSheetWithItemsViewController : FBContainerViewController <MNActionSheetPresenting> {

	UIView* _headerView;
	NSArray* _actionItems;
	NSArray* _actionIconItems;
	MNActionSheetCancelItem* _cancelItem;
	MNActionSheetWithItemsView* _actionSheetWithItemsView;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(id)initWithHeaderView:(id)arg1 actionItems:(id)arg2 cancelItem:(id)arg3 ;
-(id)initWithHeaderView:(id)arg1 actionIconItems:(id)arg2 cancelItem:(id)arg3 ;
-(id)_initWithHeaderView:(id)arg1 cancelItem:(id)arg2 ;
-(void)loadView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

