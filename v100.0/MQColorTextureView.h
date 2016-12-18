/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQTextureViewBase.h>

@protocol MQColorTextureModelProtocol;
@class MQEventHandler, NSData;

@interface MQColorTextureView : MQTextureViewBase {

	MQEventHandler* _onChangeHandler;
	NSData* _colorData;
	id<MQColorTextureModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MQColorTextureModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id)constructData;
-(id)data;
-(id<MQColorTextureModelProtocol>)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id<MQColorTextureModelProtocol>)arg1 ;
@end

