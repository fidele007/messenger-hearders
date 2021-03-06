/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(UIEdgeInsets)backgroundEdgeInsets;
-(id)_defaultConfig;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 color:(id)arg4 configuration:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 color:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(unsigned long long)buttonStyle;
@end

