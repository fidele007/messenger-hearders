/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBTextViewComponent, NSString;

@interface FBPageComponentFlowTextViewComponent : CKCompositeComponent {

	FBTextViewComponent* _component;

}

@property (nonatomic,copy) NSString * text; 
+(id)newWithFieldName:(id)arg1 configuration:(const FBPageComponentFlowTextViewComponentConfiguration*)arg2 actions:(const FBPageComponentFlowTextViewComponentActions*)arg3 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

