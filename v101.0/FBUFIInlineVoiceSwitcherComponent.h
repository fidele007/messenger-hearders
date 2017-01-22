/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBMemFeedback, FBFeedToolbox, FBInlineVoiceSwitcherViewModel;

@interface FBUFIInlineVoiceSwitcherComponent : CKCompositeComponent {

	FBMemFeedback* _feedback;
	FBFeedToolbox* _toolbox;
	FBInlineVoiceSwitcherViewModel* _inlineVoiceSwitcherViewModel;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                                                   //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                    //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBInlineVoiceSwitcherViewModel * inlineVoiceSwitcherViewModel;              //@synthesize inlineVoiceSwitcherViewModel=_inlineVoiceSwitcherViewModel - In the implementation block
+(id)newWithFeedback:(id)arg1 profilePictureUri:(id)arg2 tapAction:(CKTypedComponentAction<>)arg3 inlineVoiceSwitcherViewModel:(id)arg4 toolbox:(id)arg5 ;
-(FBFeedToolbox *)toolbox;
-(FBInlineVoiceSwitcherViewModel *)inlineVoiceSwitcherViewModel;
-(FBMemFeedback *)feedback;
@end
