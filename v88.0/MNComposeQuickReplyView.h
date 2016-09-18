/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNComposeQuickReplyViewDelegate;
@class UIScrollView, NSArray, FBCache, UIColor, MNLoadingView;

@interface MNComposeQuickReplyView : UIView {

	UIScrollView* _scrollView;
	NSArray* _quickReplyButtons;
	FBCache* _quickReplyButtonCache;
	BOOL _showsLoading;
	UIColor* _bubbleTintColor;
	id<MNComposeQuickReplyViewDelegate> _delegate;
	NSArray* _quickReplies;
	MNLoadingView* _loadingView;

}

@property (nonatomic,retain) MNLoadingView * loadingView;                                      //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposeQuickReplyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * quickReplies;                                             //@synthesize quickReplies=_quickReplies - In the implementation block
@property (nonatomic,retain) UIColor * bubbleTintColor;                                        //@synthesize bubbleTintColor=_bubbleTintColor - In the implementation block
@property (assign,nonatomic) BOOL showsLoading;                                                //@synthesize showsLoading=_showsLoading - In the implementation block
-(NSArray *)quickReplies;
-(void)setQuickReplies:(NSArray *)arg1 ;
-(void)_deduplicateQuickReplies;
-(void)_reloadQuickReplyButtons;
-(void)_tintAndReapplyBorderToQuickReplyButtons;
-(void)_quickReplyPressed:(id)arg1 ;
-(void)setBubbleTintColor:(UIColor *)arg1 ;
-(UIColor *)bubbleTintColor;
-(id)initWithFrame:(CGRect)arg1 quickReplies:(id)arg2 ;
-(void)setShowsLoading:(BOOL)arg1 ;
-(BOOL)showsLoading;
-(void)setDelegate:(id<MNComposeQuickReplyViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNComposeQuickReplyViewDelegate>)delegate;
-(void)setTintColor:(id)arg1 ;
-(MNLoadingView *)loadingView;
-(void)setLoadingView:(MNLoadingView *)arg1 ;
@end
