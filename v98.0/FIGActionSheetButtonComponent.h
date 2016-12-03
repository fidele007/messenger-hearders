/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FIGActionSheetMenuItemActionHandler;
@class FIGActionSheetButtonItem;

@interface FIGActionSheetButtonComponent : CKCompositeComponent {

	FIGActionSheetButtonItem* _actionItem;
	id<FIGActionSheetMenuItemActionHandler> _menuActionHandler;
	unsigned long long _buttonType;

}
+(id)newWithActionItem:(id)arg1 menuActionHandler:(id)arg2 metrics:(id)arg3 buttonType:(unsigned long long)arg4 ;
-(void)_performActionItemAction:(id)arg1 ;
@end
