/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBPageComponentFlowShoppingCartDataModel, FBPageComponentFlowComponentContext, FBPageComponentFlowShoppingCartTipComponent;

@interface FBPageComponentFlowShoppingCartComponent : CKCompositeComponent {

	FBPageComponentFlowShoppingCartDataModel* _model;
	FBPageComponentFlowComponentContext* _context;
	FBPageComponentFlowShoppingCartTipComponent* _tipComponent;

}

@property (nonatomic,readonly) FBPageComponentFlowShoppingCartDataModel * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) FBPageComponentFlowComponentContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBPageComponentFlowShoppingCartTipComponent * tipComponent;              //@synthesize tipComponent=_tipComponent - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
-(FBPageComponentFlowShoppingCartTipComponent *)tipComponent;
-(FBPageComponentFlowComponentContext *)context;
-(FBPageComponentFlowShoppingCartDataModel *)model;
@end

