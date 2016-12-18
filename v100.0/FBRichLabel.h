/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, NSAttributedString, NSString, UIColor, UIFont;

@interface FBRichLabel : UIView {

	FBRichTextView* _view;
	long long _lineBreakMode;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) long long lineBreakMode;                            //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
-(void)_updateTruncationSuffix;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)shadowColor;
-(BOOL)isHighlighted;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(unsigned long long)numberOfLines;
@end

