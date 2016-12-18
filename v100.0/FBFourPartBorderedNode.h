/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ASDisplayNode.h>

@class CALayer, UIImage;

@interface FBFourPartBorderedNode : ASDisplayNode {

	CALayer* _layers[4];
	UIImage* _images[4];
	BOOL _useTopAndBottomAtFullWidth;

}

@property (assign,nonatomic) BOOL useTopAndBottomAtFullWidth;              //@synthesize useTopAndBottomAtFullWidth=_useTopAndBottomAtFullWidth - In the implementation block
-(void)_staticInitialize;
-(void)setImage:(id)arg1 forRectEdge:(unsigned)arg2 ;
-(void)setNeedsDisplayAtScale:(double)arg1 ;
-(BOOL)useTopAndBottomAtFullWidth;
-(void)setUseTopAndBottomAtFullWidth:(BOOL)arg1 ;
-(id)init;
-(void)layout;
-(void)didLoad;
@end
