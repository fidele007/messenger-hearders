/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBDecomposedRule : NSObject {

	NSArray* _valueComponents;
	double _sizeValue;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSArray * valueComponents;              //@synthesize valueComponents=_valueComponents - In the implementation block
@property (assign,nonatomic) double sizeValue;                              //@synthesize sizeValue=_sizeValue - In the implementation block
@property (assign,nonatomic) CGSize size;                                   //@synthesize size=_size - In the implementation block
-(id)initWithRule:(id)arg1 scaleInducer:(unsigned long long)arg2 ;
-(NSArray *)valueComponents;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(double)sizeValue;
-(void)setSizeValue:(double)arg1 ;
@end
