/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCAudioClipViewDelegate;
@class UILabel, UIButton, FBWebRTCAudioClip;

@interface FBWebRTCAudioClipView : UIView {

	UILabel* _soundName;
	UILabel* _soundDuration;
	UIButton* _button;
	id<FBWebRTCAudioClipViewDelegate> _delegate;
	FBWebRTCAudioClip* _audioClip;

}

@property (nonatomic,retain) FBWebRTCAudioClip * audioClip;                                  //@synthesize audioClip=_audioClip - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCAudioClipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)downloadAndPlayAudioClip;
-(void)setAudioClip:(FBWebRTCAudioClip *)arg1 ;
-(void)setThemeToNormal;
-(void)setThemeToVideoCalling;
-(id)initWithFrame:(CGRect)arg1 audioClip:(id)arg2 ;
-(void)setDelegate:(id<FBWebRTCAudioClipViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCAudioClipViewDelegate>)delegate;
-(FBWebRTCAudioClip *)audioClip;
@end

