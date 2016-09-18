/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBHTMLEmbedSize : NSObject {

	double _scaleFactor;
	CGSize _contentSize;
	CGSize _boundsSize;

}

@property (assign,nonatomic) CGSize contentSize;               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize boundsSize;                //@synthesize boundsSize=_boundsSize - In the implementation block
@property (assign,nonatomic) double scaleFactor;               //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGSize scaledSize; 
+(id)zeroSize;
+(id)sizeWithContentSize:(CGSize)arg1 boundsSize:(CGSize)arg2 scaleFactor:(double)arg3 ;
-(CGSize)boundsSize;
-(void)setBoundsSize:(CGSize)arg1 ;
-(id)description;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)scaledSize;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
@end

