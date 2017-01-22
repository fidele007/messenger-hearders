/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/NTAction.h>

@protocol NTNativeTemplateModel, NTAction;
@class NTNativeTemplateBaseContext, NSObject, NSString;

@interface NTNativeTemplateDateAction : NSObject <NTAction> {

	NTNativeTemplateBaseContext* _context;
	long long _timestamp;
	NSObject*<NTNativeTemplateModel> _model;
	id<NTAction> _childAction;

}

@property (nonatomic,readonly) long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<NTNativeTemplateModel> model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<NTAction> childAction;                            //@synthesize childAction=_childAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)childModelNames;
+(Class)controllerClass;
-(id<NTAction>)childAction;
-(long long)timestamp;
-(NSObject*<NTNativeTemplateModel>)model;
-(void)performAction;
@end
