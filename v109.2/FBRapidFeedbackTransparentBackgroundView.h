/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBRapidFeedbackTransparentBackgroundView : UIView {

	BOOL _shouldForwardEvents;
	UIView* _underlyingView;
	/*^block*/id _tapCallback;

}

@property (assign,nonatomic,__weak) UIView * underlyingView;              //@synthesize underlyingView=_underlyingView - In the implementation block
@property (assign,nonatomic) BOOL shouldForwardEvents;                    //@synthesize shouldForwardEvents=_shouldForwardEvents - In the implementation block
@property (nonatomic,copy) id tapCallback;                                //@synthesize tapCallback=_tapCallback - In the implementation block
-(UIView *)underlyingView;
-(void)setUnderlyingView:(UIView *)arg1 ;
-(BOOL)shouldForwardEvents;
-(void)setShouldForwardEvents:(BOOL)arg1 ;
-(id)tapCallback;
-(void)setTapCallback:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

