/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/NTAction.h>

@protocol NTAction, NTNativeTemplateModel;
@class NSObject, NTNativeTemplateBaseContext, NSString;

@interface NTNativeTemplateDelayAction : NSObject <NTAction> {

	id<NTAction> _childAction;
	NSObject*<NTNativeTemplateModel> _model;
	long long _delay;
	NTNativeTemplateBaseContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(Class)controllerClass;
-(void)invalidate;
-(void)performAction;
@end

