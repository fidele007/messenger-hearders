/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKComponentController.h>

@class FBPageComponentFlowShoppingCartDataModel;

@interface FBPageComponentFlowShoppingCartComponentController : CKComponentController {

	FBPageComponentFlowShoppingCartDataModel* _currentModel;

}
-(void)updateFormFieldsWithShoppingCartDataModel:(id)arg1 context:(id)arg2 ;
-(void)updateFormFieldsForTipWithSender:(id)arg1 tip:(id)arg2 isCash:(BOOL)arg3 ;
-(void)shoppingCartItemComponent:(id)arg1 didRemoveItem:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateItemQuantities:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateTip:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateTipAsCash:(id)arg2 ;
-(void)didMount;
-(id)initWithComponent:(id)arg1 ;
@end

