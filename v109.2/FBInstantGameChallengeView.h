/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBInstantGameChallengeHeaderViewDelegate.h>

@protocol FBInstantGameChallengeViewDelegate;
@class FBInstantGameUIMetrics, FBInstantGameChallengeHeaderView, UIView, FBCustomActivityIndicatorView;

@interface FBInstantGameChallengeView : UIView <FBInstantGameChallengeHeaderViewDelegate> {

	FBInstantGameUIMetrics* _metrics;
	FBInstantGameChallengeHeaderView* _headerView;
	UIView* _contentView;
	FBCustomActivityIndicatorView* _loadingIndicator;
	BOOL _showLoadingIndicator;
	id<FBInstantGameChallengeViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                                           //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(void)tableHeaderViewDidTapCloseButton:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithContentView:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGameChallengeViewDelegate>)arg1 ;
-(id<FBInstantGameChallengeViewDelegate>)delegate;
-(BOOL)showLoadingIndicator;
@end

