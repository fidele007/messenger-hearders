/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBRapidReportingTextViewComponent;

@interface FBRapidReportingInputComponent : CKCompositeComponent {

	FBRapidReportingTextViewComponent* _textViewComponent;

}

@property (nonatomic,readonly) FBRapidReportingTextViewComponent * textViewComponent;              //@synthesize textViewComponent=_textViewComponent - In the implementation block
+(id)newWithMetadata:(id)arg1 helpAction:(CKTypedComponentAction<>)arg2 didSelectTagAction:(CKTypedComponentAction<>)arg3 textDidChangeAction:(CKTypedComponentAction<>)arg4 uiProvider:(id)arg5 ;
-(FBRapidReportingTextViewComponent *)textViewComponent;
@end

