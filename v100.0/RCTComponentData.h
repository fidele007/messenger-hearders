/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTComponent;
@class NSMutableDictionary, RCTBridge, RCTViewManager, NSString;

@interface RCTComponentData : NSObject {

	id<RCTComponent> _defaultView;
	NSMutableDictionary* _viewPropBlocks;
	NSMutableDictionary* _shadowPropBlocks;
	BOOL _implementsUIBlockToAmendWithShadowViewRegistry;
	RCTBridge* _bridge;
	RCTViewManager* _manager;
	Class _managerClass;
	NSString* _name;

}

@property (nonatomic,readonly) Class managerClass;                           //@synthesize managerClass=_managerClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) RCTViewManager * manager;              //@synthesize manager=_manager - In the implementation block
-(/*^block*/id)uiBlockToAmendWithShadowViewRegistry:(id)arg1 ;
-(id)createViewWithTag:(id)arg1 ;
-(/*^block*/id)propBlockForKey:(id)arg1 inDictionary:(id)arg2 ;
-(id)initWithManagerClass:(Class)arg1 bridge:(id)arg2 ;
-(id)createShadowViewWithTag:(id)arg1 ;
-(void)setProps:(id)arg1 forView:(id)arg2 ;
-(void)setProps:(id)arg1 forShadowView:(id)arg2 ;
-(id)viewConfig;
-(Class)managerClass;
-(RCTViewManager *)manager;
-(id)init;
-(NSString *)name;
@end

