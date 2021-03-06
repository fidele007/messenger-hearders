/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSoccerScene;

@interface MNSoccerViewHelper : NSObject {

	double _viewWidth;
	double _viewHeight;
	double _scale;
	MNSoccerScene* _scene;

}

@property (nonatomic,readonly) double ballTranslationX; 
@property (nonatomic,readonly) double ballTranslationY; 
@property (nonatomic,readonly) int ballSize; 
-(id)initWithKeepUpScene:(id)arg1 ;
-(void)setViewWidth:(int)arg1 height:(int)arg2 ;
-(int)ballSize;
-(double)viewYFromScene:(double)arg1 ;
-(double)ballTranslationX;
-(double)ballTranslationY;
-(double)viewXFromScene:(double)arg1 ;
-(double)sceneFromViewX:(int)arg1 ;
-(double)sceneFromViewY:(int)arg1 ;
@end

