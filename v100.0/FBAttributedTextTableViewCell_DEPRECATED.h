/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/FBTextLabeling.h>

@class NSAttributedString, FBRichTextView, FBAttributedTextReusableView_DEPRECATED;

@interface FBAttributedTextTableViewCell_DEPRECATED : UITableViewCell <FBTextLabeling> {

	FBAttributedTextReusableView_DEPRECATED* _reusableView;
	NSAttributedString* _text;
	FBRichTextView* _attributedLabel;
	long long _verticalTextAlignment;
	CGRect _textLayoutFrame;

}

@property (nonatomic,copy) NSAttributedString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) FBRichTextView * attributedLabel;              //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (assign,nonatomic) long long verticalTextAlignment;                 //@synthesize verticalTextAlignment=_verticalTextAlignment - In the implementation block
@property (nonatomic,readonly) CGRect textLayoutFrame;                        //@synthesize textLayoutFrame=_textLayoutFrame - In the implementation block
-(UIEdgeInsets)textPadding;
-(FBRichTextView *)attributedLabel;
-(CGRect)textLayoutFrame;
-(void)layoutText;
-(long long)verticalTextAlignment;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
@end

