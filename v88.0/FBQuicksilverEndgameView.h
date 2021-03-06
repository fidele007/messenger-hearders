/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQuicksilverEndgameViewDelegate;
@class FBUserSession, UILabel, CAShapeLayer, UIImageView;

@interface FBQuicksilverEndgameView : UIView {

	FBUserSession* _session;
	UILabel* _scoreValue;
	UILabel* _scoreTitle;
	CAShapeLayer* _scoreCircleLayer;
	UIImageView* _replayImageView;
	CAShapeLayer* _replayCircleLayer;
	UILabel* _replayTitle;
	id<FBQuicksilverEndgameViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverEndgameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapReplayButton;
-(id)initWithSession:(id)arg1 frame:(CGRect)arg2 ;
-(void)setDelegate:(id<FBQuicksilverEndgameViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBQuicksilverEndgameViewDelegate>)delegate;
-(void)setScore:(id)arg1 ;
@end

