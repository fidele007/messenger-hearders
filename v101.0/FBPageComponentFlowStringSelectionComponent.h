/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@class FBPageComponentFlowComponentContext, FBMemStringSelectionFormField;

@interface FBPageComponentFlowStringSelectionComponent : CKCompositeComponent {

	FBPageComponentFlowComponentContext* _context;
	FBMemStringSelectionFormField* _model;

}

@property (nonatomic,retain) FBPageComponentFlowComponentContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemStringSelectionFormField * model;                      //@synthesize model=_model - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
-(FBPageComponentFlowComponentContext *)context;
-(FBMemStringSelectionFormField *)model;
-(void)setContext:(FBPageComponentFlowComponentContext *)arg1 ;
-(void)setModel:(FBMemStringSelectionFormField *)arg1 ;
@end

