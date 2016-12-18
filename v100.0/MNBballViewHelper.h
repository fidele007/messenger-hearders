/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNBballScene;

@interface MNBballViewHelper : NSObject {

	float _scale;
	MNBballScene* _scene;

}

@property (nonatomic,readonly) int rimWidth; 
@property (nonatomic,readonly) int rimHeight; 
@property (nonatomic,readonly) int backboardWidth; 
@property (nonatomic,readonly) int backboardHeight; 
@property (nonatomic,readonly) int backboardInnerWidth; 
@property (nonatomic,readonly) int backboardInnerHeight; 
@property (nonatomic,readonly) int backboardBoltWidth; 
@property (nonatomic,readonly) int backboardBoltHeight; 
@property (nonatomic,readonly) int tableHeight; 
@property (nonatomic,readonly) double ballTranslationX; 
@property (nonatomic,readonly) double ballTranslationY; 
@property (nonatomic,readonly) double rimTranslationX; 
@property (nonatomic,readonly) double rimTranslationY; 
@property (nonatomic,readonly) double defaultRimTranslationY; 
@property (nonatomic,readonly) double backboardTranslationY; 
@property (nonatomic,readonly) double backboardTargetTranslationY; 
@property (nonatomic,readonly) double backboardBoltTranslationY; 
@property (nonatomic,readonly) int ballSize; 
-(void)setViewWidth:(int)arg1 height:(int)arg2 ;
-(int)ballSize;
-(double)ballTranslationX;
-(double)ballTranslationY;
-(id)initWithBballScene:(id)arg1 ;
-(int)rimWidth;
-(int)rimHeight;
-(int)backboardWidth;
-(int)backboardHeight;
-(int)backboardInnerWidth;
-(int)backboardInnerHeight;
-(int)backboardBoltWidth;
-(int)backboardBoltHeight;
-(double)defaultRimTranslationY;
-(double)rimTranslationX;
-(double)rimTranslationY;
-(double)backboardTargetTranslationY;
-(double)backboardTranslationY;
-(double)backboardBoltTranslationY;
-(int)tableHeight;
@end
