/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKStatefulViewComponent.h>

@class NSString, FBTextView;

@interface FBTextViewComponent : CKStatefulViewComponent {

	NSString* _currentText;
	FBTextViewComponentActions _actions;
	FBTextViewComponentViewConfiguration _textViewConfiguration;

}

@property (nonatomic,readonly) FBTextViewComponentViewConfiguration textViewConfiguration;              //@synthesize textViewConfiguration=_textViewConfiguration - In the implementation block
@property (nonatomic,readonly) FBTextViewComponentActions actions;                                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) FBTextView * textView; 
@property (nonatomic,copy) NSString * currentText;                                                      //@synthesize currentText=_currentText - In the implementation block
+(id)newWithConfiguration:(const FBTextViewComponentViewConfiguration*)arg1 initialText:(id)arg2 size:(const CKComponentSize*)arg3 actions:(const FBTextViewComponentActions*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(FBTextViewComponentViewConfiguration)textViewConfiguration;
-(FBTextViewComponentActions)actions;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(FBTextView *)textView;
@end
