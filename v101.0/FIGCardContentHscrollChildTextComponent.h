/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent, FIGLabelTextComponent;

@interface FIGCardContentHscrollChildTextComponent : CKComponent {

	CKComponent* _allVariantStackComponent;
	CKComponent* _noBodyVariantStackComponent;
	CKComponent* _noMetaVariantStackComponent;
	FIGLabelTextComponent* _titleComponent;
	FIGLabelTextComponent* _bodyComponent;
	unsigned long long _variant;

}
+(id)newWithTitle:(id)arg1 body:(id)arg2 meta:(id)arg3 variant:(unsigned long long)arg4 options:(const FIGCardContentHScrollChildTextComponentOptions*)arg5 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
