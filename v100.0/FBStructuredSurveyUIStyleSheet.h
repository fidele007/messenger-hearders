/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDictionary, UIColor;

@interface FBStructuredSurveyUIStyleSheet : NSObject {

	BOOL _hideBottomSeparatorForLastCell;
	NSDictionary* _responseTextAttributes;
	NSDictionary* _freeTextAttributes;
	NSDictionary* _messageTitleAttributes;
	NSDictionary* _messageTextAttributes;
	NSDictionary* _questionTextAttributes;
	NSDictionary* _questionNumberTextAttributes;
	NSDictionary* _subquestionTextAttributes;
	NSDictionary* _questionSubtitleAttributes;
	UIColor* _textViewPlaceholderTextColor;
	UIColor* _separatorLineColor;
	UIColor* _accentedSeparatorLineColor;
	double _defaultTopBottomPadding;
	double _questionTitleTopPadding;
	double _questionTitleBottomPadding;
	double _responseOptionCellIndent;
	UIEdgeInsets _surveyHeaderInsets;

}

@property (nonatomic,copy) NSDictionary * responseTextAttributes;                    //@synthesize responseTextAttributes=_responseTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * freeTextAttributes;                        //@synthesize freeTextAttributes=_freeTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * messageTitleAttributes;                    //@synthesize messageTitleAttributes=_messageTitleAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * messageTextAttributes;                     //@synthesize messageTextAttributes=_messageTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * questionTextAttributes;                    //@synthesize questionTextAttributes=_questionTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * questionNumberTextAttributes;              //@synthesize questionNumberTextAttributes=_questionNumberTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * subquestionTextAttributes;                 //@synthesize subquestionTextAttributes=_subquestionTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * questionSubtitleAttributes;                //@synthesize questionSubtitleAttributes=_questionSubtitleAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textViewPlaceholderTextColor;                 //@synthesize textViewPlaceholderTextColor=_textViewPlaceholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorLineColor;                           //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (nonatomic,retain) UIColor * accentedSeparatorLineColor;                   //@synthesize accentedSeparatorLineColor=_accentedSeparatorLineColor - In the implementation block
@property (assign,nonatomic) BOOL hideBottomSeparatorForLastCell;                    //@synthesize hideBottomSeparatorForLastCell=_hideBottomSeparatorForLastCell - In the implementation block
@property (assign,nonatomic) double defaultTopBottomPadding;                         //@synthesize defaultTopBottomPadding=_defaultTopBottomPadding - In the implementation block
@property (assign,nonatomic) double questionTitleTopPadding;                         //@synthesize questionTitleTopPadding=_questionTitleTopPadding - In the implementation block
@property (assign,nonatomic) double questionTitleBottomPadding;                      //@synthesize questionTitleBottomPadding=_questionTitleBottomPadding - In the implementation block
@property (assign,nonatomic) double responseOptionCellIndent;                        //@synthesize responseOptionCellIndent=_responseOptionCellIndent - In the implementation block
@property (assign,nonatomic) UIEdgeInsets surveyHeaderInsets;                        //@synthesize surveyHeaderInsets=_surveyHeaderInsets - In the implementation block
-(NSDictionary *)responseTextAttributes;
-(void)setResponseTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)questionTextAttributes;
-(void)setQuestionTextAttributes:(NSDictionary *)arg1 ;
-(void)setSubquestionTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)messageTextAttributes;
-(void)setMessageTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)freeTextAttributes;
-(void)setFreeTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)questionNumberTextAttributes;
-(void)setQuestionNumberTextAttributes:(NSDictionary *)arg1 ;
-(void)setTextViewPlaceholderTextColor:(UIColor *)arg1 ;
-(void)setAccentedSeparatorLineColor:(UIColor *)arg1 ;
-(void)setMessageTitleAttributes:(NSDictionary *)arg1 ;
-(void)setQuestionSubtitleAttributes:(NSDictionary *)arg1 ;
-(void)setDefaultTopBottomPadding:(double)arg1 ;
-(void)setQuestionTitleTopPadding:(double)arg1 ;
-(void)setQuestionTitleBottomPadding:(double)arg1 ;
-(void)setResponseOptionCellIndent:(double)arg1 ;
-(void)setSurveyHeaderInsets:(UIEdgeInsets)arg1 ;
-(double)defaultTopBottomPadding;
-(UIColor *)textViewPlaceholderTextColor;
-(UIColor *)accentedSeparatorLineColor;
-(NSDictionary *)messageTitleAttributes;
-(NSDictionary *)questionSubtitleAttributes;
-(double)questionTitleTopPadding;
-(double)questionTitleBottomPadding;
-(double)responseOptionCellIndent;
-(NSDictionary *)subquestionTextAttributes;
-(BOOL)hideBottomSeparatorForLastCell;
-(void)setHideBottomSeparatorForLastCell:(BOOL)arg1 ;
-(UIEdgeInsets)surveyHeaderInsets;
-(UIColor *)separatorLineColor;
-(void)setSeparatorLineColor:(UIColor *)arg1 ;
@end

