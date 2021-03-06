/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MNMontageProgressIndicatorViewDelegate;
@class CAShapeLayer, NSString;

@interface MNMontageProgressIndicatorView : UIView <CAAnimationDelegate> {

	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _currentPageLayer;
	CAShapeLayer* _progressLayer;
	BOOL _hasStarted;
	double _duration;
	id<MNMontageProgressIndicatorViewDelegate> _delegate;
	unsigned long long _totalMessageCount;
	unsigned long long _currentMessageIndex;

}

@property (assign,nonatomic,__weak) id<MNMontageProgressIndicatorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long totalMessageCount;                                    //@synthesize totalMessageCount=_totalMessageCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentMessageIndex;                                  //@synthesize currentMessageIndex=_currentMessageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateProgressLayers;
-(void)resetProgressIndicator;
-(void)setTotalMessageCount:(unsigned long long)arg1 ;
-(void)setCurrentMessageIndex:(unsigned long long)arg1 ;
-(void)startProgressIndicatorWithDuration:(double)arg1 ;
-(void)pauseProgressIndicator;
-(void)resumeProgressIndicator;
-(unsigned long long)totalMessageCount;
-(unsigned long long)currentMessageIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageProgressIndicatorViewDelegate>)arg1 ;
-(id<MNMontageProgressIndicatorViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)updateProgress:(double)arg1 ;
@end

