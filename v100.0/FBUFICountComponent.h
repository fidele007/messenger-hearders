/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@interface FBUFICountComponent : CKCompositeComponent {

	CKTypedComponentAction<> _tapAction;
	unsigned long long _tapActionType;

}
+(id)newWithString:(id)arg1 options:(const FBUFICountStyleOptions*)arg2 tapAttributes:(FBUFICountComponentTapAttributes)arg3 toolbox:(id)arg4 ;
+(FBUFICountStyleOptions)ufiCountStyleOptionFromUFITheme:(id)arg1 ;
-(void)handleTapAction;
@end

