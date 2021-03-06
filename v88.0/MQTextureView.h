/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQTextureViewBase.h>

@class MQEventHandler, MQTextureModel;

@interface MQTextureView : MQTextureViewBase {

	MQEventHandler* _onChangeHandler;
	MQTextureModel* _model;

}

@property (nonatomic,retain) MQTextureModel * model;              //@synthesize model=_model - In the implementation block
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(MQTextureModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(MQTextureModel *)arg1 ;
@end

