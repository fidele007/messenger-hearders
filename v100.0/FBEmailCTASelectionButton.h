/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBSmartClippingTextNode;

@interface FBEmailCTASelectionButton : ASControlNode {

	FBSmartClippingTextNode* _emailTextNode;
	FBSmartClippingTextNode* _changeLabelTextNode;

}

@property (nonatomic,readonly) FBSmartClippingTextNode * emailTextNode;                    //@synthesize emailTextNode=_emailTextNode - In the implementation block
@property (nonatomic,readonly) FBSmartClippingTextNode * changeLabelTextNode;              //@synthesize changeLabelTextNode=_changeLabelTextNode - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(FBSmartClippingTextNode *)emailTextNode;
-(FBSmartClippingTextNode *)changeLabelTextNode;
-(void)setEmailText:(id)arg1 ;
-(id)init;
-(void)layout;
@end

