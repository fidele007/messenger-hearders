/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASLayoutSpec.h>

@interface ASStackLayoutSpec : ASLayoutSpec {

	RecursiveMutex _propertyLock;
	BOOL _baselineRelativeArrangement;
	unsigned long long _direction;
	double _spacing;
	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	unsigned long long _justifyContent;
	unsigned long long _alignItems;

}

@property (assign,nonatomic) unsigned long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double spacing;                                      //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) unsigned long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long verticalAlignment;                //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long justifyContent;                   //@synthesize justifyContent=_justifyContent - In the implementation block
@property (assign,nonatomic) unsigned long long alignItems;                       //@synthesize alignItems=_alignItems - In the implementation block
@property (assign,nonatomic) BOOL baselineRelativeArrangement;                    //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
+(id)stackLayoutSpecWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 children:(id)arg5 ;
+(id)verticalStackLayoutSpec;
+(id)horizontalStackLayoutSpec;
-(void)setJustifyContent:(unsigned long long)arg1 ;
-(unsigned long long)justifyContent;
-(void)setAlignItems:(unsigned long long)arg1 ;
-(unsigned long long)alignItems;
-(BOOL)supportsUpwardPropagation;
-(id)measureWithSizeRange:(SCD_Struct_AS385)arg1 ;
-(id)asciiArtString;
-(id)initWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 children:(id)arg5 ;
-(void)resolveHorizontalAlignment;
-(void)resolveVerticalAlignment;
-(BOOL)baselineRelativeArrangement;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(void)setHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
@end

