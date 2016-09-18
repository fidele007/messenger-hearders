/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSearchSuggestionProtocol.h>
#import <Messenger/FBSearchNullStateSuggestionProtocol.h>
#import <Messenger/FBSearchLiveSuggestionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSearchTrendingTopicSuggestion : NSObject <FBSearchSuggestionProtocol, FBSearchNullStateSuggestionProtocol, FBSearchLiveSuggestionProtocol, NSCopying> {

	BOOL _isBadged;
	BOOL _isProminent;
	BOOL _isSelected;
	BOOL _showQueryFormationAffordance;
	BOOL _shouldTicker;
	BOOL _shouldDelete;
	BOOL _isNonCacheable;
	BOOL _isRemovable;
	BOOL _isLive;
	NSString* _suggestionServerSource;
	NSString* _imageURLString;
	NSString* _tracking;
	unsigned long long _numberOfLines;
	unsigned long long _suggestionType;
	unsigned long long _cacheType;
	NSString* _text;
	NSString* _semantic;
	unsigned long long _resultType;
	NSString* _fbid;
	NSString* _relatedArticleTitle;
	NSString* _suggestionTypeText;
	NSString* _trendingTopicsQueryID;
	NSString* _uniqueKeyword;
	NSString* _contextPhotoURL;

}

@property (assign,nonatomic) unsigned long long cacheType;                                //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL isNonCacheable;                                         //@synthesize isNonCacheable=_isNonCacheable - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                      //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                                  //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                                          //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbid;                                      //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * relatedArticleTitle;                       //@synthesize relatedArticleTitle=_relatedArticleTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionTypeText;                        //@synthesize suggestionTypeText=_suggestionTypeText - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionAccessibilityLabel; 
@property (nonatomic,copy,readonly) NSString * trendingTopicsQueryID;                     //@synthesize trendingTopicsQueryID=_trendingTopicsQueryID - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueKeyword;                             //@synthesize uniqueKeyword=_uniqueKeyword - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextPhotoURL;                           //@synthesize contextPhotoURL=_contextPhotoURL - In the implementation block
@property (nonatomic,readonly) BOOL isLive;                                               //@synthesize isLive=_isLive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isSelected;                                             //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL showQueryFormationAffordance;                           //@synthesize showQueryFormationAffordance=_showQueryFormationAffordance - In the implementation block
@property (nonatomic,copy) NSString * suggestionServerSource;                             //@synthesize suggestionServerSource=_suggestionServerSource - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                                     //@synthesize imageURLString=_imageURLString - In the implementation block
@property (assign,nonatomic) BOOL isBadged;                                               //@synthesize isBadged=_isBadged - In the implementation block
@property (assign,nonatomic) BOOL isProminent;                                            //@synthesize isProminent=_isProminent - In the implementation block
@property (nonatomic,copy) NSString * tracking;                                           //@synthesize tracking=_tracking - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                            //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionType;                           //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) BOOL shouldTicker;                                           //@synthesize shouldTicker=_shouldTicker - In the implementation block
@property (assign,nonatomic) BOOL shouldDelete;                                           //@synthesize shouldDelete=_shouldDelete - In the implementation block
-(NSString *)fbid;
-(NSString *)imageURLString;
-(void)setImageURLString:(NSString *)arg1 ;
-(id)suggestionTypeForLogging;
-(BOOL)isNonCacheable;
-(void)setIsNonCacheable:(BOOL)arg1 ;
-(BOOL)showQueryFormationAffordance;
-(void)setShowQueryFormationAffordance:(BOOL)arg1 ;
-(void)setSuggestionServerSource:(NSString *)arg1 ;
-(NSString *)uniqueKeyword;
-(void)setSuggestionType:(unsigned long long)arg1 ;
-(unsigned long long)suggestionType;
-(void)setIsBadged:(BOOL)arg1 ;
-(void)setIsProminent:(BOOL)arg1 ;
-(void)setShouldTicker:(BOOL)arg1 ;
-(void)setShouldDelete:(BOOL)arg1 ;
-(BOOL)isBadged;
-(BOOL)isProminent;
-(BOOL)shouldTicker;
-(BOOL)shouldDelete;
-(NSString *)relatedArticleTitle;
-(id)initWithText:(id)arg1 fbid:(id)arg2 semantic:(id)arg3 imageURLString:(id)arg4 relatedArticleTitle:(id)arg5 suggestionTypeText:(id)arg6 trendingTopicsQueryID:(id)arg7 uniqueKeyword:(id)arg8 contextPhotoURL:(id)arg9 isRemovable:(BOOL)arg10 isLive:(BOOL)arg11 numberOfLines:(unsigned long long)arg12 isBadged:(BOOL)arg13 isProminent:(BOOL)arg14 shouldTicker:(BOOL)arg15 tracking:(id)arg16 ;
-(NSString *)suggestionAccessibilityLabel;
-(NSString *)suggestionTypeText;
-(NSString *)trendingTopicsQueryID;
-(NSString *)contextPhotoURL;
-(NSString *)suggestionServerSource;
-(BOOL)isLive;
-(BOOL)isRemovable;
-(NSString *)description;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(BOOL)isSelected;
-(void)setTracking:(NSString *)arg1 ;
-(unsigned long long)numberOfLines;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(NSString *)tracking;
-(unsigned long long)resultType;
-(NSString *)semantic;
@end
