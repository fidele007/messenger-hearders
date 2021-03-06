/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBInchWormingSymbolProtocol.h>

@class UIColor, FBInchWormingLayer, NSString;

@interface FBInchWormingPauseSymbol : ASDisplayNode <FBInchWormingSymbolProtocol> {

	FBInchWormingLayer* _leftBar;
	FBInchWormingLayer* _rightBar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * wormColor; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setWormColor:(UIColor *)arg1 ;
-(void)stopAnimating:(/*^block*/id)arg1 ;
-(UIColor *)wormColor;
-(void)rev;
-(void)layout;
-(void)startAnimating;
-(void)didLoad;
@end

