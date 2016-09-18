/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASLayoutable <ASEnvironment,ASStackLayoutable,ASStaticLayoutable,ASLayoutablePrivate,ASLayoutableExtensibility>
@property (nonatomic,readonly) unsigned long long layoutableType; 
@property (nonatomic,readonly) BOOL canLayoutAsynchronous; 
@property (assign,nonatomic) double spacingBefore; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) BOOL flexGrow; 
@property (assign,nonatomic) BOOL flexShrink; 
@property (assign,nonatomic) KeyboardConfiguration flexBasis; 
@property (assign,nonatomic) unsigned long long alignSelf; 
@property (assign,nonatomic) double ascender; 
@property (assign,nonatomic) double descender; 
@property (assign,nonatomic) SCD_Struct_AS384 sizeRange; 
@property (assign,nonatomic) CGPoint layoutPosition; 
@required
-(void)setFlexGrow:(BOOL)arg1;
-(BOOL)flexGrow;
-(void)setFlexShrink:(BOOL)arg1;
-(BOOL)flexShrink;
-(void)setFlexBasis:(KeyboardConfiguration)arg1;
-(KeyboardConfiguration)flexBasis;
-(void)setAlignSelf:(unsigned long long)arg1;
-(unsigned long long)alignSelf;
-(id)measureWithSizeRange:(SCD_Struct_AS385)arg1;
-(unsigned long long)layoutableType;
-(BOOL)canLayoutAsynchronous;
-(void)setSpacingBefore:(double)arg1;
-(void)setSpacingAfter:(double)arg1;
-(void)setAscender:(double)arg1;
-(void)setDescender:(double)arg1;
-(void)setSizeRange:(SCD_Struct_AS384)arg1;
-(SCD_Struct_AS384)sizeRange;
-(double)spacingBefore;
-(double)spacingAfter;
-(double)ascender;
-(double)descender;
-(void)setLayoutPosition:(CGPoint)arg1;
-(CGPoint)layoutPosition;

@end

