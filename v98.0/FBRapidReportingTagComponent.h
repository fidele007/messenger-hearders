/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent, FBMemNegativeFeedbackTag;

@interface FBRapidReportingTagComponent : CKComponent {

	CKComponent* _labelComponent;
	BOOL _selected;
	FBMemNegativeFeedbackTag* _tag;
	CKTypedComponentAction<> _action;

}

@property (nonatomic,readonly) CKTypedComponentAction<> action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) FBMemNegativeFeedbackTag * tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
+(id)newWithTag:(id)arg1 selectionAction:(CKTypedComponentAction<>)arg2 uiProvider:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKTypedComponentAction<>)action;
-(FBMemNegativeFeedbackTag *)tag;
-(BOOL)selected;
@end
