/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CAGradientLayer.h>

@class CALayer;

@interface FBShimmeringMaskLayer : CAGradientLayer {

	CALayer* _fadeLayer;

}

@property (nonatomic,readonly) CALayer * fadeLayer;              //@synthesize fadeLayer=_fadeLayer - In the implementation block
-(CALayer *)fadeLayer;
-(id)init;
-(void)layoutSublayers;
@end

