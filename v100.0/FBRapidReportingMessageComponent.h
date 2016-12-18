/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@class FBRapidReportingToolbox, NSString, FBTextViewComponent;

@interface FBRapidReportingMessageComponent : CKCompositeComponent {

	FBRapidReportingToolbox* _toolbox;
	NSString* _targetID;
	NSString* _nodeID;
	FBTextViewComponent* _textViewComponent;

}

@property (nonatomic,readonly) FBTextViewComponent * textViewComponent;              //@synthesize textViewComponent=_textViewComponent - In the implementation block
+(id)newWithMessageAction:(id)arg1 toolbox:(id)arg2 ;
-(FBTextViewComponent *)textViewComponent;
-(void)cancelMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
@end

