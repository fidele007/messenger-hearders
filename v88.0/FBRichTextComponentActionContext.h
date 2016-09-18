/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

