/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface FBDismissalDoneButton : UIButton {

	unsigned long long _buttonStyle;
	NSString* _title;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;              //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonStyle;               //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
+(id)accessibilityIdentifier;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 ;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_defaultConfig;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 color:(id)arg4 configuration:(id)arg5 ;
-(UIEdgeInsets)backgroundEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 color:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(unsigned long long)buttonStyle;
@end

