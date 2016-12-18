/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSString;


@protocol ASDisplayNodeViewProperties
@property (assign,nonatomic) BOOL clipsToBounds; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL autoresizesSubviews; 
@property (assign,nonatomic) unsigned long long autoresizingMask; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) long long contentMode; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isExclusiveTouch,nonatomic) BOOL exclusiveTouch; 
@property (assign,setter=asyncdisplaykit_setAsyncTransactionContainer:,getter=asyncdisplaykit_isAsyncTransactionContainer,nonatomic) BOOL asyncdisplaykit_asyncTransactionContainer; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@required
-(void)asyncdisplaykit_setAsyncTransactionContainer:(BOOL)arg1;
-(BOOL)asyncdisplaykit_isAsyncTransactionContainer;
-(void)setAutoresizingMask:(unsigned long long)arg1;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(CGRect)bounds;
-(void)setClipsToBounds:(BOOL)arg1;
-(BOOL)isHidden;
-(double)alpha;
-(void)setHidden:(BOOL)arg1;
-(void)setAlpha:(double)arg1;
-(void)setFrame:(CGRect)arg1;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1;
-(void)setContentMode:(long long)arg1;
-(BOOL)isUserInteractionEnabled;
-(NSString *)accessibilityIdentifier;
-(long long)contentMode;
-(BOOL)clipsToBounds;
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(unsigned long long)autoresizingMask;
-(void)setExclusiveTouch:(BOOL)arg1;
-(BOOL)isExclusiveTouch;
-(void)setAutoresizesSubviews:(BOOL)arg1;
-(BOOL)autoresizesSubviews;
-(void)setAccessibilityIdentifier:(id)arg1;

@end

