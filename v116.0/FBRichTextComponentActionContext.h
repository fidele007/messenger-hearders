/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSTextCheckingResult, UIView;

@interface FBRichTextComponentActionContext : NSObject {

	NSTextCheckingResult* _result;
	UIView* _view;
	CGPoint _location;

}

@property (nonatomic,readonly) NSTextCheckingResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) UIView * view;                              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint location;                           //@synthesize location=_location - In the implementation block
-(id)initWithResult:(id)arg1 view:(id)arg2 location:(CGPoint)arg3 ;
-(UIView *)view;
-(CGPoint)location;
-(NSTextCheckingResult *)result;
@end

