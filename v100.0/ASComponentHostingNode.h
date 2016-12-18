/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/CKComponentStateListener.h>

@protocol CKComponentSizeRangeProviding, OS_dispatch_queue, ASComponentHostingNodeDelegate;
@class NSObject, ASDisplayNode, NSValue, NSSet, NSString;

@interface ASComponentHostingNode : ASDisplayNode <CKComponentStateListener> {

	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	ASDisplayNode* _containerNode;
	CKComponentLayout* _computedLayout;
	CKComponentLayout* _mountedLayout;
	NSValue* _constrainedSize;
	NSSet* _mountedComponents;
	ASComponentHostingViewInputs* _pendingInputs;
	id<ASComponentHostingNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASComponentHostingNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)updateModel:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)updateContext:(id)arg1 mode:(unsigned long long)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 model:(id)arg3 context:(id)arg4 ;
-(tuple<bool, CKBuildComponentResult, CKComponentLayout>*)_reloadComponent;
-(void)_setNeedsUpdateWithMode:(unsigned long long)arg1 ;
-(void)_scheduleReloadComponent;
-(pair<CKBuildComponentResult, CKComponentLayout>*)_buildComponentWithInputs:(const ASComponentHostingViewInputs*)arg1 boundingSize:(CGSize)arg2 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)setDelegate:(id<ASComponentHostingNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<ASComponentHostingNodeDelegate>)delegate;
-(void)layout;
@end

