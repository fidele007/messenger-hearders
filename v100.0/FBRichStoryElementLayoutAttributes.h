/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBRichStoryElementLayoutAttributes : NSObject {

	CGPoint _origin;
	CGSize _size;
	CGSize _constrainingSize;

}

@property (assign,nonatomic) CGPoint origin;                       //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize constrainingSize;              //@synthesize constrainingSize=_constrainingSize - In the implementation block
+(id)layoutAttributesWithOrigin:(CGPoint)arg1 size:(CGSize)arg2 constrainingSize:(CGSize)arg3 ;
-(CGSize)constrainingSize;
-(void)setConstrainingSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
@end
