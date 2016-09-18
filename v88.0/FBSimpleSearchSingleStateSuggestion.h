/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchSuggestionProtocol.h>

@class NSString, FBSearchStructuredText, NSAttributedString;

@interface FBSimpleSearchSingleStateSuggestion : NSObject <FBSearchSuggestionProtocol> {

	BOOL _isSelected;
	BOOL _showQueryFormationAffordance;
	BOOL _isNonCacheable;
	unsigned long long _cacheType;
	NSString* _text;
	NSString* _semantic;
	unsigned long long _resultType;
	FBSearchStructuredText* _structuredText;
	NSAttributedString* _summaryAttributedText;

}

@property (assign,nonatomic) unsigned long long cacheType;                                   //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL isNonCacheable;                                            //@synthesize isNonCacheable=_isNonCacheable - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                                     //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                                //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) FBSearchStructuredText * structuredText;                      //@synthesize structuredText=_structuredText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * summaryAttributedText;              //@synthesize summaryAttributedText=_summaryAttributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isSelected;                                                //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL showQueryFormationAffordance;                              //@synthesize showQueryFormationAffordance=_showQueryFormationAffordance - In the implementation block
@property (nonatomic,copy) NSString * suggestionServerSource; 
+(id)createSuggestionForStructuredText:(id)arg1 ;
-(id)suggestionTypeForLogging;
-(BOOL)isNonCacheable;
-(void)setIsNonCacheable:(BOOL)arg1 ;
-(BOOL)showQueryFormationAffordance;
-(void)setShowQueryFormationAffordance:(BOOL)arg1 ;
-(id)initWithStructuredText:(id)arg1 summaryAttributedText:(id)arg2 ;
-(FBSearchStructuredText *)structuredText;
-(NSAttributedString *)summaryAttributedText;
-(NSString *)text;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(unsigned long long)resultType;
-(NSString *)semantic;
@end

