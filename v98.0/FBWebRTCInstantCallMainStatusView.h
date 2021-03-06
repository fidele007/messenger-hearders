/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel, FBWebRTCCircleAudioLevelView, UIImage, NSString;

@interface FBWebRTCInstantCallMainStatusView : UIView {

	UIView* _contentView;
	UIImageView* _profileImageView;
	UILabel* _primaryStatusLabel;
	UILabel* _secondaryStatusLabel;
	UIView* _voicemailDurationContainer;
	UILabel* _voicemailDurationLabel;
	FBWebRTCCircleAudioLevelView* _outputAudioLevelView;
	BOOL _voicemailDurationVisible;
	double _voicemailDuration;
	unsigned long long _textColorScheme;
	UIEdgeInsets _minimumMargins;

}

@property (nonatomic,retain) UIImage * profileImage; 
@property (nonatomic,copy) NSString * primaryStatus; 
@property (nonatomic,copy) NSString * secondaryStatus; 
@property (assign,nonatomic) double voicemailDuration;                                         //@synthesize voicemailDuration=_voicemailDuration - In the implementation block
@property (assign,nonatomic) BOOL voicemailDurationVisible;                                    //@synthesize voicemailDurationVisible=_voicemailDurationVisible - In the implementation block
@property (nonatomic,retain) FBWebRTCCircleAudioLevelView * outputAudioLevelView;              //@synthesize outputAudioLevelView=_outputAudioLevelView - In the implementation block
@property (assign,nonatomic) unsigned long long textColorScheme;                               //@synthesize textColorScheme=_textColorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumMargins;                                      //@synthesize minimumMargins=_minimumMargins - In the implementation block
-(void)setTextColorScheme:(unsigned long long)arg1 ;
-(CGSize)_contentViewSizeThatFits:(CGSize)arg1 ;
-(void)_layoutContentViewToSize:(CGSize)arg1 boundsSize:(CGSize)arg2 ;
-(NSString *)primaryStatus;
-(void)setPrimaryStatus:(NSString *)arg1 ;
-(NSString *)secondaryStatus;
-(void)setSecondaryStatus:(NSString *)arg1 ;
-(void)setMinimumMargins:(UIEdgeInsets)arg1 ;
-(void)setVoicemailDurationVisible:(BOOL)arg1 ;
-(void)setVoicemailDuration:(double)arg1 ;
-(double)voicemailDuration;
-(BOOL)voicemailDurationVisible;
-(FBWebRTCCircleAudioLevelView *)outputAudioLevelView;
-(void)setOutputAudioLevelView:(FBWebRTCCircleAudioLevelView *)arg1 ;
-(unsigned long long)textColorScheme;
-(UIEdgeInsets)minimumMargins;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
@end

