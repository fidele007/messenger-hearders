/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSTextCheckingResult, UIView;

@interface FBRichTextComponentForceTouchContext : NSObject {

	NSTextCheckingResult* _result;
	UIView* _richTextView;
	CGRect _rectForTextCheckingResult;

}

@property (nonatomic,readonly) NSTextCheckingResult * result;                 //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) UIView * richTextView;                         //@synthesize richTextView=_richTextView - In the implementation block
@property (nonatomic,readonly) CGRect rectForTextCheckingResult;              //@synthesize rectForTextCheckingResult=_rectForTextCheckingResult - In the implementation block
-(UIView *)richTextView;
-(id)initWithResult:(id)arg1 richTextView:(id)arg2 rectForTextCheckingResult:(CGRect)arg3 ;
-(CGRect)rectForTextCheckingResult;
-(NSTextCheckingResult *)result;
@end

