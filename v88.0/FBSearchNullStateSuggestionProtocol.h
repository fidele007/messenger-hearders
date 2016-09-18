/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSearchNullStateSuggestionProtocol <NSObject>
@property (nonatomic,copy) NSString * suggestionServerSource; 
@property (nonatomic,copy) NSString * imageURLString; 
@property (assign,nonatomic) BOOL isBadged; 
@property (assign,nonatomic) BOOL isProminent; 
@property (nonatomic,copy) NSString * tracking; 
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) unsigned long long suggestionType; 
@property (assign,nonatomic) BOOL shouldTicker; 
@property (assign,nonatomic) BOOL shouldDelete; 
@property (nonatomic,readonly) BOOL isRemovable; 
@required
-(NSString *)imageURLString;
-(void)setImageURLString:(id)arg1;
-(void)setSuggestionServerSource:(id)arg1;
-(void)setSuggestionType:(unsigned long long)arg1;
-(unsigned long long)suggestionType;
-(void)setIsBadged:(BOOL)arg1;
-(void)setIsProminent:(BOOL)arg1;
-(void)setShouldTicker:(BOOL)arg1;
-(void)setShouldDelete:(BOOL)arg1;
-(BOOL)isBadged;
-(BOOL)isProminent;
-(BOOL)shouldTicker;
-(BOOL)shouldDelete;
-(NSString *)suggestionServerSource;
-(BOOL)isRemovable;
-(void)setNumberOfLines:(unsigned long long)arg1;
-(void)setTracking:(id)arg1;
-(unsigned long long)numberOfLines;
-(NSString *)tracking;

@end
