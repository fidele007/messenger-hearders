/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class CKComponent, NSArray, FBMemPagesPlatformProduct;

@interface FBPageComponentFlowProductWithSelectorComponent : CKCompositeComponent {

	CKComponent* _pickerComponent;
	NSArray* _items;
	CKTypedComponentAction<> _action;
	FBMemPagesPlatformProduct* _selectedProduct;
	BOOL _isSelected;

}
+(id)newWithModel:(id)arg1 image:(id)arg2 action:(CKTypedComponentAction<>)arg3 isSelected:(BOOL)arg4 initialSelectedProduct:(id)arg5 context:(id)arg6 ;
-(void)keyboardPopUp;
@end
